(function (console, $hx_exports) { "use strict";
$hx_exports.kha = $hx_exports.kha || {};
$hx_exports.kha.input = $hx_exports.kha.input || {};
var $hxClasses = {},$estr = function() { return js_Boot.__string_rec(this,''); };
function $extend(from, fields) {
	function Inherit() {} Inherit.prototype = from; var proto = new Inherit();
	for (var name in fields) proto[name] = fields[name];
	if( fields.toString !== Object.prototype.toString ) proto.toString = fields.toString;
	return proto;
}
var EReg = function(r,opt) {
	opt = opt.split("u").join("");
	this.r = new RegExp(r,opt);
};
$hxClasses["EReg"] = EReg;
EReg.__name__ = ["EReg"];
EReg.prototype = {
	match: function(s) {
		if(this.r.global) this.r.lastIndex = 0;
		this.r.m = this.r.exec(s);
		this.r.s = s;
		return this.r.m != null;
	}
	,matched: function(n) {
		if(this.r.m != null && n >= 0 && n < this.r.m.length) return this.r.m[n]; else throw new js__$Boot_HaxeError("EReg::matched");
	}
	,__class__: EReg
};
var HxOverrides = function() { };
$hxClasses["HxOverrides"] = HxOverrides;
HxOverrides.__name__ = ["HxOverrides"];
HxOverrides.strDate = function(s) {
	var _g = s.length;
	switch(_g) {
	case 8:
		var k = s.split(":");
		var d = new Date();
		d.setTime(0);
		d.setUTCHours(k[0]);
		d.setUTCMinutes(k[1]);
		d.setUTCSeconds(k[2]);
		return d;
	case 10:
		var k1 = s.split("-");
		return new Date(k1[0],k1[1] - 1,k1[2],0,0,0);
	case 19:
		var k2 = s.split(" ");
		var y = k2[0].split("-");
		var t = k2[1].split(":");
		return new Date(y[0],y[1] - 1,y[2],t[0],t[1],t[2]);
	default:
		throw new js__$Boot_HaxeError("Invalid date format : " + s);
	}
};
HxOverrides.cca = function(s,index) {
	var x = s.charCodeAt(index);
	if(x != x) return undefined;
	return x;
};
HxOverrides.substr = function(s,pos,len) {
	if(pos != null && pos != 0 && len != null && len < 0) return "";
	if(len == null) len = s.length;
	if(pos < 0) {
		pos = s.length + pos;
		if(pos < 0) pos = 0;
	} else if(len < 0) len = s.length + len - pos;
	return s.substr(pos,len);
};
HxOverrides.indexOf = function(a,obj,i) {
	var len = a.length;
	if(i < 0) {
		i += len;
		if(i < 0) i = 0;
	}
	while(i < len) {
		if(a[i] === obj) return i;
		i++;
	}
	return -1;
};
HxOverrides.remove = function(a,obj) {
	var i = HxOverrides.indexOf(a,obj,0);
	if(i == -1) return false;
	a.splice(i,1);
	return true;
};
HxOverrides.iter = function(a) {
	return { cur : 0, arr : a, hasNext : function() {
		return this.cur < this.arr.length;
	}, next : function() {
		return this.arr[this.cur++];
	}};
};
var Lambda = function() { };
$hxClasses["Lambda"] = Lambda;
Lambda.__name__ = ["Lambda"];
Lambda.array = function(it) {
	var a = [];
	var $it0 = $iterator(it)();
	while( $it0.hasNext() ) {
		var i = $it0.next();
		a.push(i);
	}
	return a;
};
Lambda.has = function(it,elt) {
	var $it0 = $iterator(it)();
	while( $it0.hasNext() ) {
		var x = $it0.next();
		if(x == elt) return true;
	}
	return false;
};
var List = function() {
	this.length = 0;
};
$hxClasses["List"] = List;
List.__name__ = ["List"];
List.prototype = {
	add: function(item) {
		var x = [item];
		if(this.h == null) this.h = x; else this.q[1] = x;
		this.q = x;
		this.length++;
	}
	,remove: function(v) {
		var prev = null;
		var l = this.h;
		while(l != null) {
			if(l[0] == v) {
				if(prev == null) this.h = l[1]; else prev[1] = l[1];
				if(this.q == l) this.q = prev;
				this.length--;
				return true;
			}
			prev = l;
			l = l[1];
		}
		return false;
	}
	,iterator: function() {
		return new _$List_ListIterator(this.h);
	}
	,__class__: List
};
var _$List_ListIterator = function(head) {
	this.head = head;
	this.val = null;
};
$hxClasses["_List.ListIterator"] = _$List_ListIterator;
_$List_ListIterator.__name__ = ["_List","ListIterator"];
_$List_ListIterator.prototype = {
	hasNext: function() {
		return this.head != null;
	}
	,next: function() {
		this.val = this.head[0];
		this.head = this.head[1];
		return this.val;
	}
	,__class__: _$List_ListIterator
};
var Main = function() { };
$hxClasses["Main"] = Main;
Main.__name__ = ["Main"];
Main.main = function() {
	var control = solemnsky_ui_Web.ctrl();
	var starter = new kha_Starter();
	var manager = new Manager(control,60);
	starter.start(manager);
};
var kha_Game = function(name,hasHighscores) {
	if(hasHighscores == null) hasHighscores = false;
	this.deprecatedImage = null;
	this.setInstance();
	this.name = name;
	if(hasHighscores) this.highscores = new kha_HighscoreList();
	this.width = kha_Loader.the.width | 0;
	this.height = kha_Loader.the.height | 0;
};
$hxClasses["kha.Game"] = kha_Game;
kha_Game.__name__ = ["kha","Game"];
kha_Game.prototype = {
	setInstance: function() {
		kha_Game.the = this;
	}
	,loadFinished: function() {
		var w = kha_Loader.the.width;
		if(w > 0) this.width = w;
		var h = kha_Loader.the.height;
		if(h > 0) this.height = h;
		this.init();
	}
	,init: function() {
	}
	,update: function() {
	}
	,startRender: function(frame) {
		frame.get_g2().begin();
	}
	,endRender: function(frame) {
		frame.get_g2().end();
	}
	,render: function(frame) {
		this.startRender(frame);
		this.endRender(frame);
	}
	,getHighscores: function() {
		return this.highscores;
	}
	,initDeprecatedImage: function() {
		if(this.deprecatedImage != null) return;
		this.deprecatedImage = kha_Image.create(this.width,this.height,kha_graphics4_TextureFormat.L8);
	}
	,painterTransformMouseX: function(x,y) {
		this.initDeprecatedImage();
		return kha_Scaler.transformX(x,y,this.deprecatedImage,kha_ScreenCanvas.get_the(),kha_Sys.screenRotation);
	}
	,painterTransformMouseY: function(x,y) {
		this.initDeprecatedImage();
		return kha_Scaler.transformY(x,y,this.deprecatedImage,kha_ScreenCanvas.get_the(),kha_Sys.screenRotation);
	}
	,buttonDown: function(button) {
	}
	,buttonUp: function(button) {
	}
	,keyDown: function(key,$char) {
	}
	,keyUp: function(key,$char) {
	}
	,mouseDown: function(x,y) {
	}
	,mouseUp: function(x,y) {
	}
	,rightMouseDown: function(x,y) {
	}
	,rightMouseUp: function(x,y) {
	}
	,middleMouseDown: function(x,y) {
	}
	,middleMouseUp: function(x,y) {
	}
	,mouseMove: function(x,y) {
	}
	,mouseWheel: function(delta) {
	}
	,onForeground: function() {
	}
	,onResume: function() {
	}
	,onPause: function() {
	}
	,onBackground: function() {
	}
	,onShutdown: function() {
	}
	,__class__: kha_Game
};
var Manager = function(ctrl,tps) {
	if(tps == null) tps = 60;
	this.tickOff = [];
	this.tickOn = [];
	this.primCount = [];
	this.renderOff = [];
	this.renderOn = [];
	this.bufferOn = [];
	this.profileTicker = 0;
	this.tickAccum = 0;
	kha_Game.call(this,"solemnsky",false);
	this.tps = tps;
	this.tickLength = 1 / tps;
	this.ctrl = ctrl;
	ctrl.init(null);
	var now = haxe_Timer.stamp();
	this.bufferStart = now;
	this.renderStart = now;
	this.renderSleepStart = now;
	this.tickStart = now;
	this.tickSleepStart = now;
	this.lastTick = now;
	this.lastRender = now;
	var doc = window.document;
	doc.body.style.margin = "0px";
	doc.body.style.overflow = "hidden";
	doc.getElementsByTagName("p").item(0).style.margin = "0px";
	this.resize();
	window.onresize = $bind(this,this.resize);
};
$hxClasses["Manager"] = Manager;
Manager.__name__ = ["Manager"];
Manager.__super__ = kha_Game;
Manager.prototype = $extend(kha_Game.prototype,{
	init: function() {
		var _g = this;
		kha_Game.prototype.init.call(this);
		this.backbuffer = kha_Image.createRenderTarget(1600,900);
		this.g = this.backbuffer.get_g2();
		kha_Configuration.setScreen(new kha_LoadingScreen());
		kha_Loader.the.loadRoom("main",function() {
			kha_Configuration.setScreen(_g);
		});
	}
	,render: function(frame) {
		this.profileTicker++;
		if(this.profileTicker > 100) {
			this.profileTicker = 0;
			this.ctrl.profiling(new solemnsky_control_Profile(this.bufferOn,this.renderOn,this.renderOff,this.primCount,this.tickOn,this.tickOff));
		}
		var now = haxe_Timer.stamp();
		this.pushProfile(now - this.renderSleepStart,this.renderOff);
		var newRender = now;
		var sleepTime = newRender - this.lastRender;
		this.lastRender = newRender;
		this.controlRender(frame,sleepTime);
		this.renderSleepStart = haxe_Timer.stamp();
	}
	,update: function() {
		var now = haxe_Timer.stamp();
		this.pushProfile(now - this.tickSleepStart,this.tickOff);
		var newTick = now;
		this.tickAccum += newTick - this.lastTick;
		this.lastTick = newTick;
		while(this.tickAccum >= this.tickLength) {
			this.tickAccum -= this.tickLength;
			this.controlTick(this.tickLength);
		}
		this.tickSleepStart = haxe_Timer.stamp();
	}
	,mouseMove: function(x,y) {
		var event;
		if(this.realWidth / this.realHeight > 1.77777777777777768) {
			var factor = 900 / this.realHeight;
			event = solemnsky_control_Event.MouseMove(x * factor + (1600 - this.realWidth * factor) / 2,y * factor);
		} else {
			var factor1 = 1600 / this.realWidth;
			event = solemnsky_control_Event.MouseMove(x * factor1,y * factor1 + (900 - this.realHeight * factor1) / 2);
		}
		this.ctrl.handle(event);
	}
	,keyDown: function(key,$char) {
		if($char != "") this.ctrl.handle(solemnsky_control_Event.CharKey($char,true)); else this.ctrl.handle(solemnsky_control_Event.SpecialKey(key,true));
	}
	,keyUp: function(key,$char) {
		if($char != null) this.ctrl.handle(solemnsky_control_Event.CharKey($char,false)); else this.ctrl.handle(solemnsky_control_Event.SpecialKey(key,false));
	}
	,pushProfile: function(point,profile) {
		profile.push(Math.round(point * 1000));
		if(profile.length > 50) profile.shift();
	}
	,pushProfileValue: function(point,profile) {
		profile.push(point);
		if(profile.length > 50) profile.shift();
	}
	,controlTick: function(deltaRaw) {
		this.tickStart = haxe_Timer.stamp();
		var delta = deltaRaw * 1000;
		this.ctrl.tick(delta);
		this.pushProfile(haxe_Timer.stamp() - this.tickStart,this.tickOn);
	}
	,controlRender: function(frame,deltaRaw) {
		this.bufferStart = haxe_Timer.stamp();
		var delta = deltaRaw * 1000;
		var buffer = this.ctrl.render(delta);
		var now = haxe_Timer.stamp();
		this.pushProfile(now - this.bufferStart,this.bufferOn);
		this.renderStart = now;
		var prims = Render.render(this.g,buffer);
		this.startRender(frame);
		kha_Scaler.scale(this.backbuffer,frame,kha_Sys.screenRotation);
		this.endRender(frame);
		this.pushProfile(haxe_Timer.stamp() - this.renderStart,this.renderOn);
		this.pushProfileValue(prims,this.primCount);
	}
	,resize: function() {
		var win = window;
		var canvas = window.document.getElementsByTagName("canvas").item(0);
		var w = win.innerWidth;
		var h = win.innerHeight;
		canvas.setAttribute("width",w + "");
		canvas.setAttribute("height",h + "");
		this.realWidth = w;
		this.realHeight = h;
	}
	,__class__: Manager
});
Math.__name__ = ["Math"];
var Reflect = function() { };
$hxClasses["Reflect"] = Reflect;
Reflect.__name__ = ["Reflect"];
Reflect.field = function(o,field) {
	try {
		return o[field];
	} catch( e ) {
		if (e instanceof js__$Boot_HaxeError) e = e.val;
		return null;
	}
};
Reflect.setField = function(o,field,value) {
	o[field] = value;
};
Reflect.callMethod = function(o,func,args) {
	return func.apply(o,args);
};
Reflect.fields = function(o) {
	var a = [];
	if(o != null) {
		var hasOwnProperty = Object.prototype.hasOwnProperty;
		for( var f in o ) {
		if(f != "__id__" && f != "hx__closures__" && hasOwnProperty.call(o,f)) a.push(f);
		}
	}
	return a;
};
Reflect.isFunction = function(f) {
	return typeof(f) == "function" && !(f.__name__ || f.__ename__);
};
Reflect.deleteField = function(o,field) {
	if(!Object.prototype.hasOwnProperty.call(o,field)) return false;
	delete(o[field]);
	return true;
};
var Render = function() { };
$hxClasses["Render"] = Render;
Render.__name__ = ["Render"];
Render.renderPrim = function(gr,prim) {
	switch(prim[1]) {
	case 0:
		var a = prim[5];
		var b = prim[4];
		var g = prim[3];
		var r = prim[2];
		gr.set_color(kha__$Color_Color_$Impl_$.fromBytes(r,g,b,a));
		break;
	case 1:
		var size = prim[3];
		var name = prim[2];
		gr.set_font(kha_Loader.the.loadFont(name,new kha_FontStyle(false,false,false),size));
		break;
	case 2:
		var radius = prim[3];
		var pos = prim[2];
		kha_graphics2_GraphicsExtension.fillCircle(gr,pos.x,pos.y,radius);
		break;
	case 3:
		var bottomRight = prim[3];
		var topLeft = prim[2];
		var width = bottomRight.x - topLeft.x;
		var height = bottomRight.y - topLeft.y;
		gr.fillRect(topLeft.x,topLeft.y,width,height);
		break;
	case 4:
		var text = prim[4];
		var align = prim[3];
		var pos1 = prim[2];
		var xPos = pos1.x;
		var textWidth;
		switch(align[1]) {
		case 0:
			textWidth = gr.get_font().stringWidth(text);
			xPos -= textWidth / 2;
			break;
		case 2:
			textWidth = gr.get_font().stringWidth(text);
			xPos += textWidth;
			break;
		default:
		}
		gr.drawString(text,xPos,pos1.y);
		break;
	case 5:
		var image = prim[3];
		var pos2 = prim[2];
		var image1 = kha_Loader.the.getImage(image);
		gr.drawImage(image1,pos2.x,pos2.y);
		break;
	}
};
Render.renderNoInit = function(pTrans,pOpacity,g,scene) {
	var prims = scene.prims.length;
	var resultTrans = pTrans.multmat(scene.trans);
	var resultOpacity = pOpacity * scene.alpha;
	g.set_transformation(Render.matrixFromTrans(resultTrans));
	g.set_opacity(resultOpacity);
	var _g = 0;
	var _g1 = scene.prims;
	while(_g < _g1.length) {
		var prim = _g1[_g];
		++_g;
		Render.renderPrim(g,prim);
	}
	var _g2 = 0;
	var _g11 = scene.children;
	while(_g2 < _g11.length) {
		var child = _g11[_g2];
		++_g2;
		prims += Render.renderNoInit(resultTrans,resultOpacity,g,child);
	}
	return prims;
};
Render.render = function(g,scene) {
	g.begin(true,16777215);
	var prims = Render.renderNoInit(new math_Transform(1,0,0,0,1,0,0,0,1),1,g,scene);
	g.end();
	return prims;
};
Render.matrixFromTrans = function(trans) {
	return new kha_math_FastMatrix3(trans._00,trans._10,trans._20,trans._01,trans._11,trans._21,trans._02,trans._12,trans._22);
};
var Std = function() { };
$hxClasses["Std"] = Std;
Std.__name__ = ["Std"];
Std.string = function(s) {
	return js_Boot.__string_rec(s,"");
};
Std["int"] = function(x) {
	return x | 0;
};
Std.parseInt = function(x) {
	var v = parseInt(x,10);
	if(v == 0 && (HxOverrides.cca(x,1) == 120 || HxOverrides.cca(x,1) == 88)) v = parseInt(x);
	if(isNaN(v)) return null;
	return v;
};
Std.parseFloat = function(x) {
	return parseFloat(x);
};
var StringBuf = function() {
	this.b = "";
};
$hxClasses["StringBuf"] = StringBuf;
StringBuf.__name__ = ["StringBuf"];
StringBuf.prototype = {
	add: function(x) {
		this.b += Std.string(x);
	}
	,__class__: StringBuf
};
var StringTools = function() { };
$hxClasses["StringTools"] = StringTools;
StringTools.__name__ = ["StringTools"];
StringTools.endsWith = function(s,end) {
	var elen = end.length;
	var slen = s.length;
	return slen >= elen && HxOverrides.substr(s,slen - elen,elen) == end;
};
StringTools.fastCodeAt = function(s,index) {
	return s.charCodeAt(index);
};
var ValueType = $hxClasses["ValueType"] = { __ename__ : ["ValueType"], __constructs__ : ["TNull","TInt","TFloat","TBool","TObject","TFunction","TClass","TEnum","TUnknown"] };
ValueType.TNull = ["TNull",0];
ValueType.TNull.toString = $estr;
ValueType.TNull.__enum__ = ValueType;
ValueType.TInt = ["TInt",1];
ValueType.TInt.toString = $estr;
ValueType.TInt.__enum__ = ValueType;
ValueType.TFloat = ["TFloat",2];
ValueType.TFloat.toString = $estr;
ValueType.TFloat.__enum__ = ValueType;
ValueType.TBool = ["TBool",3];
ValueType.TBool.toString = $estr;
ValueType.TBool.__enum__ = ValueType;
ValueType.TObject = ["TObject",4];
ValueType.TObject.toString = $estr;
ValueType.TObject.__enum__ = ValueType;
ValueType.TFunction = ["TFunction",5];
ValueType.TFunction.toString = $estr;
ValueType.TFunction.__enum__ = ValueType;
ValueType.TClass = function(c) { var $x = ["TClass",6,c]; $x.__enum__ = ValueType; $x.toString = $estr; return $x; };
ValueType.TEnum = function(e) { var $x = ["TEnum",7,e]; $x.__enum__ = ValueType; $x.toString = $estr; return $x; };
ValueType.TUnknown = ["TUnknown",8];
ValueType.TUnknown.toString = $estr;
ValueType.TUnknown.__enum__ = ValueType;
var Type = function() { };
$hxClasses["Type"] = Type;
Type.__name__ = ["Type"];
Type.getClassName = function(c) {
	var a = c.__name__;
	if(a == null) return null;
	return a.join(".");
};
Type.getEnumName = function(e) {
	var a = e.__ename__;
	return a.join(".");
};
Type.resolveClass = function(name) {
	var cl = $hxClasses[name];
	if(cl == null || !cl.__name__) return null;
	return cl;
};
Type.resolveEnum = function(name) {
	var e = $hxClasses[name];
	if(e == null || !e.__ename__) return null;
	return e;
};
Type.createEmptyInstance = function(cl) {
	function empty() {}; empty.prototype = cl.prototype;
	return new empty();
};
Type.createEnum = function(e,constr,params) {
	var f = Reflect.field(e,constr);
	if(f == null) throw new js__$Boot_HaxeError("No such constructor " + constr);
	if(Reflect.isFunction(f)) {
		if(params == null) throw new js__$Boot_HaxeError("Constructor " + constr + " need parameters");
		return Reflect.callMethod(e,f,params);
	}
	if(params != null && params.length != 0) throw new js__$Boot_HaxeError("Constructor " + constr + " does not need parameters");
	return f;
};
Type.createEnumIndex = function(e,index,params) {
	var c = e.__constructs__[index];
	if(c == null) throw new js__$Boot_HaxeError(index + " is not a valid enum constructor index");
	return Type.createEnum(e,c,params);
};
Type.getEnumConstructs = function(e) {
	var a = e.__constructs__;
	return a.slice();
};
Type["typeof"] = function(v) {
	var _g = typeof(v);
	switch(_g) {
	case "boolean":
		return ValueType.TBool;
	case "string":
		return ValueType.TClass(String);
	case "number":
		if(Math.ceil(v) == v % 2147483648.0) return ValueType.TInt;
		return ValueType.TFloat;
	case "object":
		if(v == null) return ValueType.TNull;
		var e = v.__enum__;
		if(e != null) return ValueType.TEnum(e);
		var c = js_Boot.getClass(v);
		if(c != null) return ValueType.TClass(c);
		return ValueType.TObject;
	case "function":
		if(v.__name__ || v.__ename__) return ValueType.TObject;
		return ValueType.TFunction;
	case "undefined":
		return ValueType.TNull;
	default:
		return ValueType.TUnknown;
	}
};
var _$UInt_UInt_$Impl_$ = {};
$hxClasses["_UInt.UInt_Impl_"] = _$UInt_UInt_$Impl_$;
_$UInt_UInt_$Impl_$.__name__ = ["_UInt","UInt_Impl_"];
_$UInt_UInt_$Impl_$.gt = function(a,b) {
	var aNeg = a < 0;
	var bNeg = b < 0;
	if(aNeg != bNeg) return aNeg; else return a > b;
};
_$UInt_UInt_$Impl_$.gte = function(a,b) {
	var aNeg = a < 0;
	var bNeg = b < 0;
	if(aNeg != bNeg) return aNeg; else return a >= b;
};
_$UInt_UInt_$Impl_$.toFloat = function(this1) {
	var $int = this1;
	if($int < 0) return 4294967296.0 + $int; else return $int + 0.0;
};
var haxe_IMap = function() { };
$hxClasses["haxe.IMap"] = haxe_IMap;
haxe_IMap.__name__ = ["haxe","IMap"];
var haxe_Log = function() { };
$hxClasses["haxe.Log"] = haxe_Log;
haxe_Log.__name__ = ["haxe","Log"];
haxe_Log.trace = function(v,infos) {
	js_Boot.__trace(v,infos);
};
var haxe_Serializer = function() {
	this.buf = new StringBuf();
	this.cache = [];
	this.useCache = haxe_Serializer.USE_CACHE;
	this.useEnumIndex = haxe_Serializer.USE_ENUM_INDEX;
	this.shash = new haxe_ds_StringMap();
	this.scount = 0;
};
$hxClasses["haxe.Serializer"] = haxe_Serializer;
haxe_Serializer.__name__ = ["haxe","Serializer"];
haxe_Serializer.run = function(v) {
	var s = new haxe_Serializer();
	s.serialize(v);
	return s.toString();
};
haxe_Serializer.prototype = {
	toString: function() {
		return this.buf.b;
	}
	,serializeString: function(s) {
		var x = this.shash.get(s);
		if(x != null) {
			this.buf.b += "R";
			if(x == null) this.buf.b += "null"; else this.buf.b += "" + x;
			return;
		}
		this.shash.set(s,this.scount++);
		this.buf.b += "y";
		s = encodeURIComponent(s);
		if(s.length == null) this.buf.b += "null"; else this.buf.b += "" + s.length;
		this.buf.b += ":";
		if(s == null) this.buf.b += "null"; else this.buf.b += "" + s;
	}
	,serializeRef: function(v) {
		var vt = typeof(v);
		var _g1 = 0;
		var _g = this.cache.length;
		while(_g1 < _g) {
			var i = _g1++;
			var ci = this.cache[i];
			if(typeof(ci) == vt && ci == v) {
				this.buf.b += "r";
				if(i == null) this.buf.b += "null"; else this.buf.b += "" + i;
				return true;
			}
		}
		this.cache.push(v);
		return false;
	}
	,serializeFields: function(v) {
		var _g = 0;
		var _g1 = Reflect.fields(v);
		while(_g < _g1.length) {
			var f = _g1[_g];
			++_g;
			this.serializeString(f);
			this.serialize(Reflect.field(v,f));
		}
		this.buf.b += "g";
	}
	,serialize: function(v) {
		{
			var _g = Type["typeof"](v);
			switch(_g[1]) {
			case 0:
				this.buf.b += "n";
				break;
			case 1:
				var v1 = v;
				if(v1 == 0) {
					this.buf.b += "z";
					return;
				}
				this.buf.b += "i";
				if(v1 == null) this.buf.b += "null"; else this.buf.b += "" + v1;
				break;
			case 2:
				var v2 = v;
				if(isNaN(v2)) this.buf.b += "k"; else if(!isFinite(v2)) if(v2 < 0) this.buf.b += "m"; else this.buf.b += "p"; else {
					this.buf.b += "d";
					if(v2 == null) this.buf.b += "null"; else this.buf.b += "" + v2;
				}
				break;
			case 3:
				if(v) this.buf.b += "t"; else this.buf.b += "f";
				break;
			case 6:
				var c = _g[2];
				if(c == String) {
					this.serializeString(v);
					return;
				}
				if(this.useCache && this.serializeRef(v)) return;
				switch(c) {
				case Array:
					var ucount = 0;
					this.buf.b += "a";
					var l = v.length;
					var _g1 = 0;
					while(_g1 < l) {
						var i = _g1++;
						if(v[i] == null) ucount++; else {
							if(ucount > 0) {
								if(ucount == 1) this.buf.b += "n"; else {
									this.buf.b += "u";
									if(ucount == null) this.buf.b += "null"; else this.buf.b += "" + ucount;
								}
								ucount = 0;
							}
							this.serialize(v[i]);
						}
					}
					if(ucount > 0) {
						if(ucount == 1) this.buf.b += "n"; else {
							this.buf.b += "u";
							if(ucount == null) this.buf.b += "null"; else this.buf.b += "" + ucount;
						}
					}
					this.buf.b += "h";
					break;
				case List:
					this.buf.b += "l";
					var v3 = v;
					var _g1_head = v3.h;
					var _g1_val = null;
					while(_g1_head != null) {
						var i1;
						_g1_val = _g1_head[0];
						_g1_head = _g1_head[1];
						i1 = _g1_val;
						this.serialize(i1);
					}
					this.buf.b += "h";
					break;
				case Date:
					var d = v;
					this.buf.b += "v";
					this.buf.add(d.getTime());
					break;
				case haxe_ds_StringMap:
					this.buf.b += "b";
					var v4 = v;
					var $it0 = v4.keys();
					while( $it0.hasNext() ) {
						var k = $it0.next();
						this.serializeString(k);
						this.serialize(__map_reserved[k] != null?v4.getReserved(k):v4.h[k]);
					}
					this.buf.b += "h";
					break;
				case haxe_ds_IntMap:
					this.buf.b += "q";
					var v5 = v;
					var $it1 = v5.keys();
					while( $it1.hasNext() ) {
						var k1 = $it1.next();
						this.buf.b += ":";
						if(k1 == null) this.buf.b += "null"; else this.buf.b += "" + k1;
						this.serialize(v5.h[k1]);
					}
					this.buf.b += "h";
					break;
				case haxe_ds_ObjectMap:
					this.buf.b += "M";
					var v6 = v;
					var $it2 = v6.keys();
					while( $it2.hasNext() ) {
						var k2 = $it2.next();
						var id = Reflect.field(k2,"__id__");
						Reflect.deleteField(k2,"__id__");
						this.serialize(k2);
						k2.__id__ = id;
						this.serialize(v6.h[k2.__id__]);
					}
					this.buf.b += "h";
					break;
				case haxe_io_Bytes:
					var v7 = v;
					var i2 = 0;
					var max = v7.length - 2;
					var charsBuf = new StringBuf();
					var b64 = haxe_Serializer.BASE64;
					while(i2 < max) {
						var b1 = v7.get(i2++);
						var b2 = v7.get(i2++);
						var b3 = v7.get(i2++);
						charsBuf.add(b64.charAt(b1 >> 2));
						charsBuf.add(b64.charAt((b1 << 4 | b2 >> 4) & 63));
						charsBuf.add(b64.charAt((b2 << 2 | b3 >> 6) & 63));
						charsBuf.add(b64.charAt(b3 & 63));
					}
					if(i2 == max) {
						var b11 = v7.get(i2++);
						var b21 = v7.get(i2++);
						charsBuf.add(b64.charAt(b11 >> 2));
						charsBuf.add(b64.charAt((b11 << 4 | b21 >> 4) & 63));
						charsBuf.add(b64.charAt(b21 << 2 & 63));
					} else if(i2 == max + 1) {
						var b12 = v7.get(i2++);
						charsBuf.add(b64.charAt(b12 >> 2));
						charsBuf.add(b64.charAt(b12 << 4 & 63));
					}
					var chars = charsBuf.b;
					this.buf.b += "s";
					if(chars.length == null) this.buf.b += "null"; else this.buf.b += "" + chars.length;
					this.buf.b += ":";
					if(chars == null) this.buf.b += "null"; else this.buf.b += "" + chars;
					break;
				default:
					if(this.useCache) this.cache.pop();
					if(v.hxSerialize != null) {
						this.buf.b += "C";
						this.serializeString(Type.getClassName(c));
						if(this.useCache) this.cache.push(v);
						v.hxSerialize(this);
						this.buf.b += "g";
					} else {
						this.buf.b += "c";
						this.serializeString(Type.getClassName(c));
						if(this.useCache) this.cache.push(v);
						this.serializeFields(v);
					}
				}
				break;
			case 4:
				if(js_Boot.__instanceof(v,Class)) {
					var className = Type.getClassName(v);
					this.buf.b += "A";
					this.serializeString(className);
				} else if(js_Boot.__instanceof(v,Enum)) {
					this.buf.b += "B";
					this.serializeString(Type.getEnumName(v));
				} else {
					if(this.useCache && this.serializeRef(v)) return;
					this.buf.b += "o";
					this.serializeFields(v);
				}
				break;
			case 7:
				var e = _g[2];
				if(this.useCache) {
					if(this.serializeRef(v)) return;
					this.cache.pop();
				}
				if(this.useEnumIndex) this.buf.b += "j"; else this.buf.b += "w";
				this.serializeString(Type.getEnumName(e));
				if(this.useEnumIndex) {
					this.buf.b += ":";
					this.buf.b += Std.string(v[1]);
				} else this.serializeString(v[0]);
				this.buf.b += ":";
				var l1 = v.length;
				this.buf.b += Std.string(l1 - 2);
				var _g11 = 2;
				while(_g11 < l1) {
					var i3 = _g11++;
					this.serialize(v[i3]);
				}
				if(this.useCache) this.cache.push(v);
				break;
			case 5:
				throw new js__$Boot_HaxeError("Cannot serialize function");
				break;
			default:
				throw new js__$Boot_HaxeError("Cannot serialize " + Std.string(v));
			}
		}
	}
	,__class__: haxe_Serializer
};
var haxe_Timer = function() { };
$hxClasses["haxe.Timer"] = haxe_Timer;
haxe_Timer.__name__ = ["haxe","Timer"];
haxe_Timer.stamp = function() {
	return new Date().getTime() / 1000;
};
var haxe_Unserializer = function(buf) {
	this.buf = buf;
	this.length = buf.length;
	this.pos = 0;
	this.scache = [];
	this.cache = [];
	var r = haxe_Unserializer.DEFAULT_RESOLVER;
	if(r == null) {
		r = Type;
		haxe_Unserializer.DEFAULT_RESOLVER = r;
	}
	this.setResolver(r);
};
$hxClasses["haxe.Unserializer"] = haxe_Unserializer;
haxe_Unserializer.__name__ = ["haxe","Unserializer"];
haxe_Unserializer.initCodes = function() {
	var codes = [];
	var _g1 = 0;
	var _g = haxe_Unserializer.BASE64.length;
	while(_g1 < _g) {
		var i = _g1++;
		codes[haxe_Unserializer.BASE64.charCodeAt(i)] = i;
	}
	return codes;
};
haxe_Unserializer.run = function(v) {
	return new haxe_Unserializer(v).unserialize();
};
haxe_Unserializer.prototype = {
	setResolver: function(r) {
		if(r == null) this.resolver = { resolveClass : function(_) {
			return null;
		}, resolveEnum : function(_1) {
			return null;
		}}; else this.resolver = r;
	}
	,get: function(p) {
		return this.buf.charCodeAt(p);
	}
	,readDigits: function() {
		var k = 0;
		var s = false;
		var fpos = this.pos;
		while(true) {
			var c = this.buf.charCodeAt(this.pos);
			if(c != c) break;
			if(c == 45) {
				if(this.pos != fpos) break;
				s = true;
				this.pos++;
				continue;
			}
			if(c < 48 || c > 57) break;
			k = k * 10 + (c - 48);
			this.pos++;
		}
		if(s) k *= -1;
		return k;
	}
	,readFloat: function() {
		var p1 = this.pos;
		while(true) {
			var c = this.buf.charCodeAt(this.pos);
			if(c >= 43 && c < 58 || c == 101 || c == 69) this.pos++; else break;
		}
		return Std.parseFloat(HxOverrides.substr(this.buf,p1,this.pos - p1));
	}
	,unserializeObject: function(o) {
		while(true) {
			if(this.pos >= this.length) throw new js__$Boot_HaxeError("Invalid object");
			if(this.buf.charCodeAt(this.pos) == 103) break;
			var k = this.unserialize();
			if(!(typeof(k) == "string")) throw new js__$Boot_HaxeError("Invalid object key");
			var v = this.unserialize();
			o[k] = v;
		}
		this.pos++;
	}
	,unserializeEnum: function(edecl,tag) {
		if(this.get(this.pos++) != 58) throw new js__$Boot_HaxeError("Invalid enum format");
		var nargs = this.readDigits();
		if(nargs == 0) return Type.createEnum(edecl,tag);
		var args = [];
		while(nargs-- > 0) args.push(this.unserialize());
		return Type.createEnum(edecl,tag,args);
	}
	,unserialize: function() {
		var _g = this.get(this.pos++);
		switch(_g) {
		case 110:
			return null;
		case 116:
			return true;
		case 102:
			return false;
		case 122:
			return 0;
		case 105:
			return this.readDigits();
		case 100:
			return this.readFloat();
		case 121:
			var len = this.readDigits();
			if(this.get(this.pos++) != 58 || this.length - this.pos < len) throw new js__$Boot_HaxeError("Invalid string length");
			var s = HxOverrides.substr(this.buf,this.pos,len);
			this.pos += len;
			s = decodeURIComponent(s.split("+").join(" "));
			this.scache.push(s);
			return s;
		case 107:
			return NaN;
		case 109:
			return -Infinity;
		case 112:
			return Infinity;
		case 97:
			var buf = this.buf;
			var a = [];
			this.cache.push(a);
			while(true) {
				var c = this.buf.charCodeAt(this.pos);
				if(c == 104) {
					this.pos++;
					break;
				}
				if(c == 117) {
					this.pos++;
					var n = this.readDigits();
					a[a.length + n - 1] = null;
				} else a.push(this.unserialize());
			}
			return a;
		case 111:
			var o = { };
			this.cache.push(o);
			this.unserializeObject(o);
			return o;
		case 114:
			var n1 = this.readDigits();
			if(n1 < 0 || n1 >= this.cache.length) throw new js__$Boot_HaxeError("Invalid reference");
			return this.cache[n1];
		case 82:
			var n2 = this.readDigits();
			if(n2 < 0 || n2 >= this.scache.length) throw new js__$Boot_HaxeError("Invalid string reference");
			return this.scache[n2];
		case 120:
			throw new js__$Boot_HaxeError(this.unserialize());
			break;
		case 99:
			var name = this.unserialize();
			var cl = this.resolver.resolveClass(name);
			if(cl == null) throw new js__$Boot_HaxeError("Class not found " + name);
			var o1 = Type.createEmptyInstance(cl);
			this.cache.push(o1);
			this.unserializeObject(o1);
			return o1;
		case 119:
			var name1 = this.unserialize();
			var edecl = this.resolver.resolveEnum(name1);
			if(edecl == null) throw new js__$Boot_HaxeError("Enum not found " + name1);
			var e = this.unserializeEnum(edecl,this.unserialize());
			this.cache.push(e);
			return e;
		case 106:
			var name2 = this.unserialize();
			var edecl1 = this.resolver.resolveEnum(name2);
			if(edecl1 == null) throw new js__$Boot_HaxeError("Enum not found " + name2);
			this.pos++;
			var index = this.readDigits();
			var tag = Type.getEnumConstructs(edecl1)[index];
			if(tag == null) throw new js__$Boot_HaxeError("Unknown enum index " + name2 + "@" + index);
			var e1 = this.unserializeEnum(edecl1,tag);
			this.cache.push(e1);
			return e1;
		case 108:
			var l = new List();
			this.cache.push(l);
			var buf1 = this.buf;
			while(this.buf.charCodeAt(this.pos) != 104) l.add(this.unserialize());
			this.pos++;
			return l;
		case 98:
			var h = new haxe_ds_StringMap();
			this.cache.push(h);
			var buf2 = this.buf;
			while(this.buf.charCodeAt(this.pos) != 104) {
				var s1 = this.unserialize();
				h.set(s1,this.unserialize());
			}
			this.pos++;
			return h;
		case 113:
			var h1 = new haxe_ds_IntMap();
			this.cache.push(h1);
			var buf3 = this.buf;
			var c1 = this.get(this.pos++);
			while(c1 == 58) {
				var i = this.readDigits();
				h1.set(i,this.unserialize());
				c1 = this.get(this.pos++);
			}
			if(c1 != 104) throw new js__$Boot_HaxeError("Invalid IntMap format");
			return h1;
		case 77:
			var h2 = new haxe_ds_ObjectMap();
			this.cache.push(h2);
			var buf4 = this.buf;
			while(this.buf.charCodeAt(this.pos) != 104) {
				var s2 = this.unserialize();
				h2.set(s2,this.unserialize());
			}
			this.pos++;
			return h2;
		case 118:
			var d;
			if(this.buf.charCodeAt(this.pos) >= 48 && this.buf.charCodeAt(this.pos) <= 57 && this.buf.charCodeAt(this.pos + 1) >= 48 && this.buf.charCodeAt(this.pos + 1) <= 57 && this.buf.charCodeAt(this.pos + 2) >= 48 && this.buf.charCodeAt(this.pos + 2) <= 57 && this.buf.charCodeAt(this.pos + 3) >= 48 && this.buf.charCodeAt(this.pos + 3) <= 57 && this.buf.charCodeAt(this.pos + 4) == 45) {
				var s3 = HxOverrides.substr(this.buf,this.pos,19);
				d = HxOverrides.strDate(s3);
				this.pos += 19;
			} else {
				var t = this.readFloat();
				var d1 = new Date();
				d1.setTime(t);
				d = d1;
			}
			this.cache.push(d);
			return d;
		case 115:
			var len1 = this.readDigits();
			var buf5 = this.buf;
			if(this.get(this.pos++) != 58 || this.length - this.pos < len1) throw new js__$Boot_HaxeError("Invalid bytes length");
			var codes = haxe_Unserializer.CODES;
			if(codes == null) {
				codes = haxe_Unserializer.initCodes();
				haxe_Unserializer.CODES = codes;
			}
			var i1 = this.pos;
			var rest = len1 & 3;
			var size;
			size = (len1 >> 2) * 3 + (rest >= 2?rest - 1:0);
			var max = i1 + (len1 - rest);
			var bytes = haxe_io_Bytes.alloc(size);
			var bpos = 0;
			while(i1 < max) {
				var c11 = codes[StringTools.fastCodeAt(buf5,i1++)];
				var c2 = codes[StringTools.fastCodeAt(buf5,i1++)];
				bytes.set(bpos++,c11 << 2 | c2 >> 4);
				var c3 = codes[StringTools.fastCodeAt(buf5,i1++)];
				bytes.set(bpos++,c2 << 4 | c3 >> 2);
				var c4 = codes[StringTools.fastCodeAt(buf5,i1++)];
				bytes.set(bpos++,c3 << 6 | c4);
			}
			if(rest >= 2) {
				var c12 = codes[StringTools.fastCodeAt(buf5,i1++)];
				var c21 = codes[StringTools.fastCodeAt(buf5,i1++)];
				bytes.set(bpos++,c12 << 2 | c21 >> 4);
				if(rest == 3) {
					var c31 = codes[StringTools.fastCodeAt(buf5,i1++)];
					bytes.set(bpos++,c21 << 4 | c31 >> 2);
				}
			}
			this.pos += len1;
			this.cache.push(bytes);
			return bytes;
		case 67:
			var name3 = this.unserialize();
			var cl1 = this.resolver.resolveClass(name3);
			if(cl1 == null) throw new js__$Boot_HaxeError("Class not found " + name3);
			var o2 = Type.createEmptyInstance(cl1);
			this.cache.push(o2);
			o2.hxUnserialize(this);
			if(this.get(this.pos++) != 103) throw new js__$Boot_HaxeError("Invalid custom data");
			return o2;
		case 65:
			var name4 = this.unserialize();
			var cl2 = this.resolver.resolveClass(name4);
			if(cl2 == null) throw new js__$Boot_HaxeError("Class not found " + name4);
			return cl2;
		case 66:
			var name5 = this.unserialize();
			var e2 = this.resolver.resolveEnum(name5);
			if(e2 == null) throw new js__$Boot_HaxeError("Enum not found " + name5);
			return e2;
		default:
		}
		this.pos--;
		throw new js__$Boot_HaxeError("Invalid char " + this.buf.charAt(this.pos) + " at position " + this.pos);
	}
	,__class__: haxe_Unserializer
};
var haxe_ds_IntMap = function() {
	this.h = { };
};
$hxClasses["haxe.ds.IntMap"] = haxe_ds_IntMap;
haxe_ds_IntMap.__name__ = ["haxe","ds","IntMap"];
haxe_ds_IntMap.__interfaces__ = [haxe_IMap];
haxe_ds_IntMap.prototype = {
	set: function(key,value) {
		this.h[key] = value;
	}
	,keys: function() {
		var a = [];
		for( var key in this.h ) {
		if(this.h.hasOwnProperty(key)) a.push(key | 0);
		}
		return HxOverrides.iter(a);
	}
	,iterator: function() {
		return { ref : this.h, it : this.keys(), hasNext : function() {
			return this.it.hasNext();
		}, next : function() {
			var i = this.it.next();
			return this.ref[i];
		}};
	}
	,__class__: haxe_ds_IntMap
};
var haxe_ds_ObjectMap = function() {
	this.h = { };
	this.h.__keys__ = { };
};
$hxClasses["haxe.ds.ObjectMap"] = haxe_ds_ObjectMap;
haxe_ds_ObjectMap.__name__ = ["haxe","ds","ObjectMap"];
haxe_ds_ObjectMap.__interfaces__ = [haxe_IMap];
haxe_ds_ObjectMap.prototype = {
	set: function(key,value) {
		var id = key.__id__ || (key.__id__ = ++haxe_ds_ObjectMap.count);
		this.h[id] = value;
		this.h.__keys__[id] = key;
	}
	,keys: function() {
		var a = [];
		for( var key in this.h.__keys__ ) {
		if(this.h.hasOwnProperty(key)) a.push(this.h.__keys__[key]);
		}
		return HxOverrides.iter(a);
	}
	,__class__: haxe_ds_ObjectMap
};
var haxe_ds__$StringMap_StringMapIterator = function(map,keys) {
	this.map = map;
	this.keys = keys;
	this.index = 0;
	this.count = keys.length;
};
$hxClasses["haxe.ds._StringMap.StringMapIterator"] = haxe_ds__$StringMap_StringMapIterator;
haxe_ds__$StringMap_StringMapIterator.__name__ = ["haxe","ds","_StringMap","StringMapIterator"];
haxe_ds__$StringMap_StringMapIterator.prototype = {
	hasNext: function() {
		return this.index < this.count;
	}
	,next: function() {
		return this.map.get(this.keys[this.index++]);
	}
	,__class__: haxe_ds__$StringMap_StringMapIterator
};
var haxe_ds_StringMap = function() {
	this.h = { };
};
$hxClasses["haxe.ds.StringMap"] = haxe_ds_StringMap;
haxe_ds_StringMap.__name__ = ["haxe","ds","StringMap"];
haxe_ds_StringMap.__interfaces__ = [haxe_IMap];
haxe_ds_StringMap.prototype = {
	set: function(key,value) {
		if(__map_reserved[key] != null) this.setReserved(key,value); else this.h[key] = value;
	}
	,get: function(key) {
		if(__map_reserved[key] != null) return this.getReserved(key);
		return this.h[key];
	}
	,exists: function(key) {
		if(__map_reserved[key] != null) return this.existsReserved(key);
		return this.h.hasOwnProperty(key);
	}
	,setReserved: function(key,value) {
		if(this.rh == null) this.rh = { };
		this.rh["$" + key] = value;
	}
	,getReserved: function(key) {
		if(this.rh == null) return null; else return this.rh["$" + key];
	}
	,existsReserved: function(key) {
		if(this.rh == null) return false;
		return this.rh.hasOwnProperty("$" + key);
	}
	,remove: function(key) {
		if(__map_reserved[key] != null) {
			key = "$" + key;
			if(this.rh == null || !this.rh.hasOwnProperty(key)) return false;
			delete(this.rh[key]);
			return true;
		} else {
			if(!this.h.hasOwnProperty(key)) return false;
			delete(this.h[key]);
			return true;
		}
	}
	,keys: function() {
		var _this = this.arrayKeys();
		return HxOverrides.iter(_this);
	}
	,arrayKeys: function() {
		var out = [];
		for( var key in this.h ) {
		if(this.h.hasOwnProperty(key)) out.push(key);
		}
		if(this.rh != null) {
			for( var key in this.rh ) {
			if(key.charCodeAt(0) == 36) out.push(key.substr(1));
			}
		}
		return out;
	}
	,iterator: function() {
		return new haxe_ds__$StringMap_StringMapIterator(this,this.arrayKeys());
	}
	,__class__: haxe_ds_StringMap
};
var haxe_io_Bytes = function(data) {
	this.length = data.byteLength;
	this.b = new Uint8Array(data);
	this.b.bufferValue = data;
	data.hxBytes = this;
	data.bytes = this.b;
};
$hxClasses["haxe.io.Bytes"] = haxe_io_Bytes;
haxe_io_Bytes.__name__ = ["haxe","io","Bytes"];
haxe_io_Bytes.alloc = function(length) {
	return new haxe_io_Bytes(new ArrayBuffer(length));
};
haxe_io_Bytes.ofString = function(s) {
	var a = [];
	var i = 0;
	while(i < s.length) {
		var c = StringTools.fastCodeAt(s,i++);
		if(55296 <= c && c <= 56319) c = c - 55232 << 10 | StringTools.fastCodeAt(s,i++) & 1023;
		if(c <= 127) a.push(c); else if(c <= 2047) {
			a.push(192 | c >> 6);
			a.push(128 | c & 63);
		} else if(c <= 65535) {
			a.push(224 | c >> 12);
			a.push(128 | c >> 6 & 63);
			a.push(128 | c & 63);
		} else {
			a.push(240 | c >> 18);
			a.push(128 | c >> 12 & 63);
			a.push(128 | c >> 6 & 63);
			a.push(128 | c & 63);
		}
	}
	return new haxe_io_Bytes(new Uint8Array(a).buffer);
};
haxe_io_Bytes.ofData = function(b) {
	var hb = b.hxBytes;
	if(hb != null) return hb;
	return new haxe_io_Bytes(b);
};
haxe_io_Bytes.prototype = {
	get: function(pos) {
		return this.b[pos];
	}
	,set: function(pos,v) {
		this.b[pos] = v & 255;
	}
	,getDouble: function(pos) {
		if(this.data == null) this.data = new DataView(this.b.buffer,this.b.byteOffset,this.b.byteLength);
		return this.data.getFloat64(pos,true);
	}
	,getFloat: function(pos) {
		if(this.data == null) this.data = new DataView(this.b.buffer,this.b.byteOffset,this.b.byteLength);
		return this.data.getFloat32(pos,true);
	}
	,setDouble: function(pos,v) {
		if(this.data == null) this.data = new DataView(this.b.buffer,this.b.byteOffset,this.b.byteLength);
		this.data.setFloat64(pos,v,true);
	}
	,getInt32: function(pos) {
		if(this.data == null) this.data = new DataView(this.b.buffer,this.b.byteOffset,this.b.byteLength);
		return this.data.getInt32(pos,true);
	}
	,setInt32: function(pos,v) {
		if(this.data == null) this.data = new DataView(this.b.buffer,this.b.byteOffset,this.b.byteLength);
		this.data.setInt32(pos,v,true);
	}
	,getString: function(pos,len) {
		if(pos < 0 || len < 0 || pos + len > this.length) throw new js__$Boot_HaxeError(haxe_io_Error.OutsideBounds);
		var s = "";
		var b = this.b;
		var fcc = String.fromCharCode;
		var i = pos;
		var max = pos + len;
		while(i < max) {
			var c = b[i++];
			if(c < 128) {
				if(c == 0) break;
				s += fcc(c);
			} else if(c < 224) s += fcc((c & 63) << 6 | b[i++] & 127); else if(c < 240) {
				var c2 = b[i++];
				s += fcc((c & 31) << 12 | (c2 & 127) << 6 | b[i++] & 127);
			} else {
				var c21 = b[i++];
				var c3 = b[i++];
				var u = (c & 15) << 18 | (c21 & 127) << 12 | (c3 & 127) << 6 | b[i++] & 127;
				s += fcc((u >> 10) + 55232);
				s += fcc(u & 1023 | 56320);
			}
		}
		return s;
	}
	,toString: function() {
		return this.getString(0,this.length);
	}
	,__class__: haxe_io_Bytes
};
var haxe_io_BytesBuffer = function() {
	this.b = [];
};
$hxClasses["haxe.io.BytesBuffer"] = haxe_io_BytesBuffer;
haxe_io_BytesBuffer.__name__ = ["haxe","io","BytesBuffer"];
haxe_io_BytesBuffer.prototype = {
	addBytes: function(src,pos,len) {
		if(pos < 0 || len < 0 || pos + len > src.length) throw new js__$Boot_HaxeError(haxe_io_Error.OutsideBounds);
		var b1 = this.b;
		var b2 = src.b;
		var _g1 = pos;
		var _g = pos + len;
		while(_g1 < _g) {
			var i = _g1++;
			this.b.push(b2[i]);
		}
	}
	,getBytes: function() {
		var bytes = new haxe_io_Bytes(new Uint8Array(this.b).buffer);
		this.b = null;
		return bytes;
	}
	,__class__: haxe_io_BytesBuffer
};
var haxe_io_Input = function() { };
$hxClasses["haxe.io.Input"] = haxe_io_Input;
haxe_io_Input.__name__ = ["haxe","io","Input"];
haxe_io_Input.prototype = {
	readByte: function() {
		throw new js__$Boot_HaxeError("Not implemented");
	}
	,readBytes: function(s,pos,len) {
		var k = len;
		var b = s.b;
		if(pos < 0 || len < 0 || pos + len > s.length) throw new js__$Boot_HaxeError(haxe_io_Error.OutsideBounds);
		while(k > 0) {
			b[pos] = this.readByte();
			pos++;
			k--;
		}
		return len;
	}
	,readFullBytes: function(s,pos,len) {
		while(len > 0) {
			var k = this.readBytes(s,pos,len);
			pos += k;
			len -= k;
		}
	}
	,read: function(nbytes) {
		var s = haxe_io_Bytes.alloc(nbytes);
		var p = 0;
		while(nbytes > 0) {
			var k = this.readBytes(s,p,nbytes);
			if(k == 0) throw new js__$Boot_HaxeError(haxe_io_Error.Blocked);
			p += k;
			nbytes -= k;
		}
		return s;
	}
	,readInt32: function() {
		var ch1 = this.readByte();
		var ch2 = this.readByte();
		var ch3 = this.readByte();
		var ch4 = this.readByte();
		if(this.bigEndian) return ch4 | ch3 << 8 | ch2 << 16 | ch1 << 24; else return ch1 | ch2 << 8 | ch3 << 16 | ch4 << 24;
	}
	,readString: function(len) {
		var b = haxe_io_Bytes.alloc(len);
		this.readFullBytes(b,0,len);
		return b.toString();
	}
	,__class__: haxe_io_Input
};
var haxe_io_BytesInput = function(b,pos,len) {
	if(pos == null) pos = 0;
	if(len == null) len = b.length - pos;
	if(pos < 0 || len < 0 || pos + len > b.length) throw new js__$Boot_HaxeError(haxe_io_Error.OutsideBounds);
	this.b = b.b;
	this.pos = pos;
	this.len = len;
	this.totlen = len;
};
$hxClasses["haxe.io.BytesInput"] = haxe_io_BytesInput;
haxe_io_BytesInput.__name__ = ["haxe","io","BytesInput"];
haxe_io_BytesInput.__super__ = haxe_io_Input;
haxe_io_BytesInput.prototype = $extend(haxe_io_Input.prototype,{
	set_position: function(p) {
		if(p < 0) p = 0; else if(p > this.totlen) p = this.totlen;
		this.len = this.totlen - p;
		return this.pos = p;
	}
	,readByte: function() {
		if(this.len == 0) throw new js__$Boot_HaxeError(new haxe_io_Eof());
		this.len--;
		return this.b[this.pos++];
	}
	,readBytes: function(buf,pos,len) {
		if(pos < 0 || len < 0 || pos + len > buf.length) throw new js__$Boot_HaxeError(haxe_io_Error.OutsideBounds);
		if(this.len == 0 && len > 0) throw new js__$Boot_HaxeError(new haxe_io_Eof());
		if(this.len < len) len = this.len;
		var b1 = this.b;
		var b2 = buf.b;
		var _g = 0;
		while(_g < len) {
			var i = _g++;
			b2[pos + i] = b1[this.pos + i];
		}
		this.pos += len;
		this.len -= len;
		return len;
	}
	,__class__: haxe_io_BytesInput
});
var haxe_io_Output = function() { };
$hxClasses["haxe.io.Output"] = haxe_io_Output;
haxe_io_Output.__name__ = ["haxe","io","Output"];
haxe_io_Output.prototype = {
	writeByte: function(c) {
		throw new js__$Boot_HaxeError("Not implemented");
	}
	,writeBytes: function(s,pos,len) {
		var k = len;
		var b = s.b.bufferValue;
		if(pos < 0 || len < 0 || pos + len > s.length) throw new js__$Boot_HaxeError(haxe_io_Error.OutsideBounds);
		while(k > 0) {
			this.writeByte(b[pos]);
			pos++;
			k--;
		}
		return len;
	}
	,write: function(s) {
		var l = s.length;
		var p = 0;
		while(l > 0) {
			var k = this.writeBytes(s,p,l);
			if(k == 0) throw new js__$Boot_HaxeError(haxe_io_Error.Blocked);
			p += k;
			l -= k;
		}
	}
	,writeInt32: function(x) {
		if(this.bigEndian) {
			this.writeByte(x >>> 24);
			this.writeByte(x >> 16 & 255);
			this.writeByte(x >> 8 & 255);
			this.writeByte(x & 255);
		} else {
			this.writeByte(x & 255);
			this.writeByte(x >> 8 & 255);
			this.writeByte(x >> 16 & 255);
			this.writeByte(x >>> 24);
		}
	}
	,__class__: haxe_io_Output
};
var haxe_io_BytesOutput = function() {
	this.b = new haxe_io_BytesBuffer();
};
$hxClasses["haxe.io.BytesOutput"] = haxe_io_BytesOutput;
haxe_io_BytesOutput.__name__ = ["haxe","io","BytesOutput"];
haxe_io_BytesOutput.__super__ = haxe_io_Output;
haxe_io_BytesOutput.prototype = $extend(haxe_io_Output.prototype,{
	writeByte: function(c) {
		this.b.b.push(c);
	}
	,writeBytes: function(buf,pos,len) {
		this.b.addBytes(buf,pos,len);
		return len;
	}
	,getBytes: function() {
		return this.b.getBytes();
	}
	,__class__: haxe_io_BytesOutput
});
var haxe_io_Eof = function() {
};
$hxClasses["haxe.io.Eof"] = haxe_io_Eof;
haxe_io_Eof.__name__ = ["haxe","io","Eof"];
haxe_io_Eof.prototype = {
	toString: function() {
		return "Eof";
	}
	,__class__: haxe_io_Eof
};
var haxe_io_Error = $hxClasses["haxe.io.Error"] = { __ename__ : ["haxe","io","Error"], __constructs__ : ["Blocked","Overflow","OutsideBounds","Custom"] };
haxe_io_Error.Blocked = ["Blocked",0];
haxe_io_Error.Blocked.toString = $estr;
haxe_io_Error.Blocked.__enum__ = haxe_io_Error;
haxe_io_Error.Overflow = ["Overflow",1];
haxe_io_Error.Overflow.toString = $estr;
haxe_io_Error.Overflow.__enum__ = haxe_io_Error;
haxe_io_Error.OutsideBounds = ["OutsideBounds",2];
haxe_io_Error.OutsideBounds.toString = $estr;
haxe_io_Error.OutsideBounds.__enum__ = haxe_io_Error;
haxe_io_Error.Custom = function(e) { var $x = ["Custom",3,e]; $x.__enum__ = haxe_io_Error; $x.toString = $estr; return $x; };
var haxe_io_FPHelper = function() { };
$hxClasses["haxe.io.FPHelper"] = haxe_io_FPHelper;
haxe_io_FPHelper.__name__ = ["haxe","io","FPHelper"];
haxe_io_FPHelper.floatToI32 = function(f) {
	if(f == 0) return 0;
	var af;
	if(f < 0) af = -f; else af = f;
	var exp = Math.floor(Math.log(af) / 0.6931471805599453);
	if(exp < -127) exp = -127; else if(exp > 128) exp = 128;
	var sig = Math.round((af / Math.pow(2,exp) - 1) * 8388608) & 8388607;
	return (f < 0?-2147483648:0) | exp + 127 << 23 | sig;
};
var js__$Boot_HaxeError = function(val) {
	Error.call(this);
	this.val = val;
	this.message = String(val);
	if(Error.captureStackTrace) Error.captureStackTrace(this,js__$Boot_HaxeError);
};
$hxClasses["js._Boot.HaxeError"] = js__$Boot_HaxeError;
js__$Boot_HaxeError.__name__ = ["js","_Boot","HaxeError"];
js__$Boot_HaxeError.__super__ = Error;
js__$Boot_HaxeError.prototype = $extend(Error.prototype,{
	__class__: js__$Boot_HaxeError
});
var js_Boot = function() { };
$hxClasses["js.Boot"] = js_Boot;
js_Boot.__name__ = ["js","Boot"];
js_Boot.__unhtml = function(s) {
	return s.split("&").join("&amp;").split("<").join("&lt;").split(">").join("&gt;");
};
js_Boot.__trace = function(v,i) {
	var msg;
	if(i != null) msg = i.fileName + ":" + i.lineNumber + ": "; else msg = "";
	msg += js_Boot.__string_rec(v,"");
	if(i != null && i.customParams != null) {
		var _g = 0;
		var _g1 = i.customParams;
		while(_g < _g1.length) {
			var v1 = _g1[_g];
			++_g;
			msg += "," + js_Boot.__string_rec(v1,"");
		}
	}
	var d;
	if(typeof(document) != "undefined" && (d = document.getElementById("haxe:trace")) != null) d.innerHTML += js_Boot.__unhtml(msg) + "<br/>"; else if(typeof console != "undefined" && console.log != null) console.log(msg);
};
js_Boot.getClass = function(o) {
	if((o instanceof Array) && o.__enum__ == null) return Array; else {
		var cl = o.__class__;
		if(cl != null) return cl;
		var name = js_Boot.__nativeClassName(o);
		if(name != null) return js_Boot.__resolveNativeClass(name);
		return null;
	}
};
js_Boot.__string_rec = function(o,s) {
	if(o == null) return "null";
	if(s.length >= 5) return "<...>";
	var t = typeof(o);
	if(t == "function" && (o.__name__ || o.__ename__)) t = "object";
	switch(t) {
	case "object":
		if(o instanceof Array) {
			if(o.__enum__) {
				if(o.length == 2) return o[0];
				var str2 = o[0] + "(";
				s += "\t";
				var _g1 = 2;
				var _g = o.length;
				while(_g1 < _g) {
					var i1 = _g1++;
					if(i1 != 2) str2 += "," + js_Boot.__string_rec(o[i1],s); else str2 += js_Boot.__string_rec(o[i1],s);
				}
				return str2 + ")";
			}
			var l = o.length;
			var i;
			var str1 = "[";
			s += "\t";
			var _g2 = 0;
			while(_g2 < l) {
				var i2 = _g2++;
				str1 += (i2 > 0?",":"") + js_Boot.__string_rec(o[i2],s);
			}
			str1 += "]";
			return str1;
		}
		var tostr;
		try {
			tostr = o.toString;
		} catch( e ) {
			if (e instanceof js__$Boot_HaxeError) e = e.val;
			return "???";
		}
		if(tostr != null && tostr != Object.toString && typeof(tostr) == "function") {
			var s2 = o.toString();
			if(s2 != "[object Object]") return s2;
		}
		var k = null;
		var str = "{\n";
		s += "\t";
		var hasp = o.hasOwnProperty != null;
		for( var k in o ) {
		if(hasp && !o.hasOwnProperty(k)) {
			continue;
		}
		if(k == "prototype" || k == "__class__" || k == "__super__" || k == "__interfaces__" || k == "__properties__") {
			continue;
		}
		if(str.length != 2) str += ", \n";
		str += s + k + " : " + js_Boot.__string_rec(o[k],s);
		}
		s = s.substring(1);
		str += "\n" + s + "}";
		return str;
	case "function":
		return "<function>";
	case "string":
		return o;
	default:
		return String(o);
	}
};
js_Boot.__interfLoop = function(cc,cl) {
	if(cc == null) return false;
	if(cc == cl) return true;
	var intf = cc.__interfaces__;
	if(intf != null) {
		var _g1 = 0;
		var _g = intf.length;
		while(_g1 < _g) {
			var i = _g1++;
			var i1 = intf[i];
			if(i1 == cl || js_Boot.__interfLoop(i1,cl)) return true;
		}
	}
	return js_Boot.__interfLoop(cc.__super__,cl);
};
js_Boot.__instanceof = function(o,cl) {
	if(cl == null) return false;
	switch(cl) {
	case Int:
		return (o|0) === o;
	case Float:
		return typeof(o) == "number";
	case Bool:
		return typeof(o) == "boolean";
	case String:
		return typeof(o) == "string";
	case Array:
		return (o instanceof Array) && o.__enum__ == null;
	case Dynamic:
		return true;
	default:
		if(o != null) {
			if(typeof(cl) == "function") {
				if(o instanceof cl) return true;
				if(js_Boot.__interfLoop(js_Boot.getClass(o),cl)) return true;
			} else if(typeof(cl) == "object" && js_Boot.__isNativeObj(cl)) {
				if(o instanceof cl) return true;
			}
		} else return false;
		if(cl == Class && o.__name__ != null) return true;
		if(cl == Enum && o.__ename__ != null) return true;
		return o.__enum__ == cl;
	}
};
js_Boot.__cast = function(o,t) {
	if(js_Boot.__instanceof(o,t)) return o; else throw new js__$Boot_HaxeError("Cannot cast " + Std.string(o) + " to " + Std.string(t));
};
js_Boot.__nativeClassName = function(o) {
	var name = js_Boot.__toStr.call(o).slice(8,-1);
	if(name == "Object" || name == "Function" || name == "Math" || name == "JSON") return null;
	return name;
};
js_Boot.__isNativeObj = function(o) {
	return js_Boot.__nativeClassName(o) != null;
};
js_Boot.__resolveNativeClass = function(name) {
	return (Function("return typeof " + name + " != \"undefined\" ? " + name + " : null"))();
};
var js_html_compat_ArrayBuffer = function(a) {
	if((a instanceof Array) && a.__enum__ == null) {
		this.a = a;
		this.byteLength = a.length;
	} else {
		var len = a;
		this.a = [];
		var _g = 0;
		while(_g < len) {
			var i = _g++;
			this.a[i] = 0;
		}
		this.byteLength = len;
	}
};
$hxClasses["js.html.compat.ArrayBuffer"] = js_html_compat_ArrayBuffer;
js_html_compat_ArrayBuffer.__name__ = ["js","html","compat","ArrayBuffer"];
js_html_compat_ArrayBuffer.sliceImpl = function(begin,end) {
	var u = new Uint8Array(this,begin,end == null?null:end - begin);
	var result = new ArrayBuffer(u.byteLength);
	var resultArray = new Uint8Array(result);
	resultArray.set(u);
	return result;
};
js_html_compat_ArrayBuffer.prototype = {
	slice: function(begin,end) {
		return new js_html_compat_ArrayBuffer(this.a.slice(begin,end));
	}
	,__class__: js_html_compat_ArrayBuffer
};
var js_html_compat_Uint8Array = function() { };
$hxClasses["js.html.compat.Uint8Array"] = js_html_compat_Uint8Array;
js_html_compat_Uint8Array.__name__ = ["js","html","compat","Uint8Array"];
js_html_compat_Uint8Array._new = function(arg1,offset,length) {
	var arr;
	if(typeof(arg1) == "number") {
		arr = [];
		var _g = 0;
		while(_g < arg1) {
			var i = _g++;
			arr[i] = 0;
		}
		arr.byteLength = arr.length;
		arr.byteOffset = 0;
		arr.buffer = new js_html_compat_ArrayBuffer(arr);
	} else if(js_Boot.__instanceof(arg1,js_html_compat_ArrayBuffer)) {
		var buffer = arg1;
		if(offset == null) offset = 0;
		if(length == null) length = buffer.byteLength - offset;
		if(offset == 0) arr = buffer.a; else arr = buffer.a.slice(offset,offset + length);
		arr.byteLength = arr.length;
		arr.byteOffset = offset;
		arr.buffer = buffer;
	} else if((arg1 instanceof Array) && arg1.__enum__ == null) {
		arr = arg1.slice();
		arr.byteLength = arr.length;
		arr.byteOffset = 0;
		arr.buffer = new js_html_compat_ArrayBuffer(arr);
	} else throw new js__$Boot_HaxeError("TODO " + Std.string(arg1));
	arr.subarray = js_html_compat_Uint8Array._subarray;
	arr.set = js_html_compat_Uint8Array._set;
	return arr;
};
js_html_compat_Uint8Array._set = function(arg,offset) {
	var t = this;
	if(js_Boot.__instanceof(arg.buffer,js_html_compat_ArrayBuffer)) {
		var a = arg;
		if(arg.byteLength + offset > t.byteLength) throw new js__$Boot_HaxeError("set() outside of range");
		var _g1 = 0;
		var _g = arg.byteLength;
		while(_g1 < _g) {
			var i = _g1++;
			t[i + offset] = a[i];
		}
	} else if((arg instanceof Array) && arg.__enum__ == null) {
		var a1 = arg;
		if(a1.length + offset > t.byteLength) throw new js__$Boot_HaxeError("set() outside of range");
		var _g11 = 0;
		var _g2 = a1.length;
		while(_g11 < _g2) {
			var i1 = _g11++;
			t[i1 + offset] = a1[i1];
		}
	} else throw new js__$Boot_HaxeError("TODO");
};
js_html_compat_Uint8Array._subarray = function(start,end) {
	var t = this;
	var a = js_html_compat_Uint8Array._new(t.slice(start,end));
	a.byteOffset = start;
	return a;
};
var kha_Resource = function() { };
$hxClasses["kha.Resource"] = kha_Resource;
kha_Resource.__name__ = ["kha","Resource"];
kha_Resource.prototype = {
	__class__: kha_Resource
};
var kha_Blob = function(bytes) {
	this.myFirstLine = true;
	this.bytes = bytes;
	this.buffer = [];
	this.position = 0;
};
$hxClasses["kha.Blob"] = kha_Blob;
kha_Blob.__name__ = ["kha","Blob"];
kha_Blob.__interfaces__ = [kha_Resource];
kha_Blob.prototype = {
	length: function() {
		return this.bytes.length;
	}
	,reset: function() {
		this.position = 0;
	}
	,seek: function(pos) {
		this.position = pos;
	}
	,readU8: function() {
		var $byte = this.bytes.b[this.position];
		++this.position;
		return $byte;
	}
	,readS8: function() {
		var $byte = this.bytes.b[this.position];
		++this.position;
		var sign;
		if(($byte & 128) == 0) sign = 1; else sign = -1;
		$byte = $byte & 127;
		return sign * $byte;
	}
	,readU16BE: function() {
		var first = this.bytes.b[this.position];
		var second = this.bytes.b[this.position + 1];
		this.position += 2;
		return first * 256 + second;
	}
	,readU16LE: function() {
		var first = this.bytes.b[this.position];
		var second = this.bytes.b[this.position + 1];
		this.position += 2;
		return second * 256 + first;
	}
	,readS16BE: function() {
		var first = this.bytes.b[this.position];
		var second = this.bytes.b[this.position + 1];
		this.position += 2;
		var sign;
		if((first & 128) == 0) sign = 1; else sign = -1;
		first = first & 127;
		if(sign == -1) return -32767 + first * 256 + second; else return first * 256 + second;
	}
	,readS16LE: function() {
		var first = this.bytes.b[this.position];
		var second = this.bytes.b[this.position + 1];
		var sign;
		if((second & 128) == 0) sign = 1; else sign = -1;
		second = second & 127;
		this.position += 2;
		if(sign == -1) return -32767 + second * 256 + first; else return second * 256 + first;
	}
	,readS32LE: function() {
		var fourth = this.bytes.b[this.position];
		var third = this.bytes.b[this.position + 1];
		var second = this.bytes.b[this.position + 2];
		var first = this.bytes.b[this.position + 3];
		var sign;
		if((first & 128) == 0) sign = 1; else sign = -1;
		first = first & 127;
		this.position += 4;
		if(sign == -1) return -2147483647 + fourth + third * 256 + second * 256 * 256 + first * 256 * 256 * 256; else return fourth + third * 256 + second * 256 * 256 + first * 256 * 256 * 256;
	}
	,readS32BE: function() {
		var fourth = this.bytes.b[this.position];
		var third = this.bytes.b[this.position + 1];
		var second = this.bytes.b[this.position + 2];
		var first = this.bytes.b[this.position + 3];
		var sign;
		if((fourth & 128) == 0) sign = 1; else sign = -1;
		fourth = fourth & 127;
		this.position += 4;
		if(sign == -1) return -2147483647 + first + second * 256 + third * 256 * 256 + fourth * 256 * 256 * 256;
		return first + second * 256 + third * 256 * 256 + fourth * 256 * 256 * 256;
	}
	,readF32LE: function() {
		return this.readF32(this.readS32LE());
	}
	,readF32BE: function() {
		return this.readF32(this.readS32BE());
	}
	,readF32: function(i) {
		var sign;
		if((i & -2147483648) == 0) sign = 1; else sign = -1;
		var exp = i >> 23 & 255;
		var man = i & 8388607;
		switch(exp) {
		case 0:
			return 0.0;
		case 255:
			if(man != 0) return NaN; else if(sign > 0) return Infinity; else return -Infinity;
			break;
		default:
			return sign * ((man + 8388608) / 8388608.0) * Math.pow(2,exp - 127);
		}
	}
	,toString: function() {
		return this.bytes.toString();
	}
	,bit: function(value,position) {
		var b = (value >>> position & 1) == 1;
		if(b) {
			var a = 3;
			++a;
			return true;
		} else {
			var c = 4;
			--c;
			return false;
		}
	}
	,readUtf8Char: function() {
		if(this.position >= this.length()) return -1;
		var c = this.readU8();
		var value = 0;
		if(!this.bit(c,7)) value = c; else if(this.bit(c,7) && this.bit(c,6) && !this.bit(c,5)) {
			var a = c & 31;
			var c2 = this.readU8();
			var b = c2 & 63;
			value = a << 6 | b;
		} else if(this.bit(c,7) && this.bit(c,6) && this.bit(c,5) && !this.bit(c,4)) {
			var _g = 0;
			while(_g < 2) {
				var i = _g++;
				this.readU8();
			}
		} else if(this.bit(c,7) && this.bit(c,6) && this.bit(c,5) && this.bit(c,4) && !this.bit(c,3)) {
			var _g1 = 0;
			while(_g1 < 3) {
				var i1 = _g1++;
				this.readU8();
			}
		}
		return value;
	}
	,readUtf8Line: function() {
		var bufferindex = 0;
		var c = this.readUtf8Char();
		if(c < 0) return "";
		while(c != 10 && bufferindex < 2000) {
			this.buffer[bufferindex] = c;
			++bufferindex;
			c = this.readUtf8Char();
			if(this.position >= this.length()) {
				this.buffer[bufferindex] = c;
				++bufferindex;
				break;
			}
		}
		if(this.myFirstLine) {
			this.myFirstLine = false;
			if(bufferindex > 2 && this.buffer[0] == 239 && this.buffer[1] == 187 && this.buffer[2] == 191) {
				var chars1 = [];
				var _g1 = 3;
				var _g = bufferindex - 3;
				while(_g1 < _g) {
					var i = _g1++;
					chars1[i - 3] = this.buffer[i];
				}
				return this.toText(chars1,bufferindex - 3);
			}
		}
		var chars = [];
		var _g2 = 0;
		while(_g2 < bufferindex) {
			var i1 = _g2++;
			chars[i1] = this.buffer[i1];
		}
		return this.toText(chars,bufferindex);
	}
	,toText: function(chars,length) {
		var value = "";
		var _g = 0;
		while(_g < length) {
			var i = _g++;
			value += String.fromCharCode(chars[i]);
		}
		return value;
	}
	,readUtf8String: function() {
		var text = "";
		while(this.position < this.length()) text += this.readUtf8Line() + "\n";
		return text;
	}
	,toBytes: function() {
		return this.bytes;
	}
	,unload: function() {
		this.bytes = null;
	}
	,__class__: kha_Blob
};
var kha_Button = $hxClasses["kha.Button"] = { __ename__ : ["kha","Button"], __constructs__ : ["NONE","UP","RIGHT","DOWN","LEFT","BUTTON_1","BUTTON_2"] };
kha_Button.NONE = ["NONE",0];
kha_Button.NONE.toString = $estr;
kha_Button.NONE.__enum__ = kha_Button;
kha_Button.UP = ["UP",1];
kha_Button.UP.toString = $estr;
kha_Button.UP.__enum__ = kha_Button;
kha_Button.RIGHT = ["RIGHT",2];
kha_Button.RIGHT.toString = $estr;
kha_Button.RIGHT.__enum__ = kha_Button;
kha_Button.DOWN = ["DOWN",3];
kha_Button.DOWN.toString = $estr;
kha_Button.DOWN.__enum__ = kha_Button;
kha_Button.LEFT = ["LEFT",4];
kha_Button.LEFT.toString = $estr;
kha_Button.LEFT.__enum__ = kha_Button;
kha_Button.BUTTON_1 = ["BUTTON_1",5];
kha_Button.BUTTON_1.toString = $estr;
kha_Button.BUTTON_1.__enum__ = kha_Button;
kha_Button.BUTTON_2 = ["BUTTON_2",6];
kha_Button.BUTTON_2.toString = $estr;
kha_Button.BUTTON_2.__enum__ = kha_Button;
var kha_Canvas = function() { };
$hxClasses["kha.Canvas"] = kha_Canvas;
kha_Canvas.__name__ = ["kha","Canvas"];
kha_Canvas.prototype = {
	__class__: kha_Canvas
};
var kha_Image = function() { };
$hxClasses["kha.Image"] = kha_Image;
kha_Image.__name__ = ["kha","Image"];
kha_Image.__interfaces__ = [kha_Resource,kha_Canvas];
kha_Image.create = function(width,height,format,usage,levels) {
	if(levels == null) levels = 1;
	if(format == null) format = kha_graphics4_TextureFormat.RGBA32;
	if(usage == null) usage = kha_graphics4_Usage.StaticUsage;
	if(kha_Sys.gl == null) return new kha_CanvasImage(width,height,format,false); else return new kha_WebGLImage(width,height,format,false);
};
kha_Image.createRenderTarget = function(width,height,format,depthStencil,antiAliasingSamples) {
	if(antiAliasingSamples == null) antiAliasingSamples = 1;
	if(depthStencil == null) depthStencil = false;
	if(format == null) format = kha_graphics4_TextureFormat.RGBA32;
	if(kha_Sys.gl == null) return new kha_CanvasImage(width,height,format,true); else return new kha_WebGLImage(width,height,format,true);
};
kha_Image.fromImage = function(image,readable) {
	if(kha_Sys.gl == null) {
		var img = new kha_CanvasImage(image.width,image.height,kha_graphics4_TextureFormat.RGBA32,false);
		img.image = image;
		img.createTexture();
		return img;
	} else {
		var img1 = new kha_WebGLImage(image.width,image.height,kha_graphics4_TextureFormat.RGBA32,false);
		img1.image = image;
		img1.createTexture();
		return img1;
	}
};
kha_Image.fromVideo = function(video) {
	if(kha_Sys.gl == null) {
		var img = new kha_CanvasImage(video.element.videoWidth,video.element.videoHeight,kha_graphics4_TextureFormat.RGBA32,false);
		img.video = video.element;
		img.createTexture();
		return img;
	} else {
		var img1 = new kha_WebGLImage(video.element.videoWidth,video.element.videoHeight,kha_graphics4_TextureFormat.RGBA32,false);
		img1.video = video.element;
		img1.createTexture();
		return img1;
	}
};
kha_Image.get_maxSize = function() {
	if(kha_Sys.gl == null) return 8192; else return kha_Sys.gl.getParameter(kha_Sys.gl.MAX_TEXTURE_SIZE);
};
kha_Image.get_nonPow2Supported = function() {
	return kha_Sys.gl != null;
};
kha_Image.prototype = {
	isOpaque: function(x,y) {
		return false;
	}
	,at: function(x,y) {
		return kha__$Color_Color_$Impl_$.Black;
	}
	,unload: function() {
	}
	,lock: function(level) {
		if(level == null) level = 0;
		return null;
	}
	,unlock: function() {
	}
	,get_width: function() {
		return 0;
	}
	,get_height: function() {
		return 0;
	}
	,get_realWidth: function() {
		return 0;
	}
	,get_realHeight: function() {
		return 0;
	}
	,get_g1: function() {
		return null;
	}
	,get_g2: function() {
		return null;
	}
	,get_g4: function() {
		return null;
	}
	,__class__: kha_Image
};
var kha_CanvasImage = function(width,height,format,renderTarget) {
	this.g2canvas = null;
	this.myWidth = width;
	this.myHeight = height;
	this.format = format;
	this.renderTarget = renderTarget;
	this.image = null;
	this.video = null;
	if(renderTarget) this.createTexture();
};
$hxClasses["kha.CanvasImage"] = kha_CanvasImage;
kha_CanvasImage.__name__ = ["kha","CanvasImage"];
kha_CanvasImage.init = function() {
	var canvas = window.document.createElement("canvas");
	if(canvas != null) {
		kha_CanvasImage.context = canvas.getContext("2d");
		canvas.width = 2048;
		canvas.height = 2048;
		kha_CanvasImage.context.globalCompositeOperation = "copy";
	}
};
kha_CanvasImage.upperPowerOfTwo = function(v) {
	v--;
	v |= v >>> 1;
	v |= v >>> 2;
	v |= v >>> 4;
	v |= v >>> 8;
	v |= v >>> 16;
	v++;
	return v;
};
kha_CanvasImage.__super__ = kha_Image;
kha_CanvasImage.prototype = $extend(kha_Image.prototype,{
	get_g1: function() {
		if(this.graphics1 == null) this.graphics1 = new kha_graphics2_Graphics1(this);
		return this.graphics1;
	}
	,get_g2: function() {
		if(this.g2canvas == null) {
			var canvas = window.document.createElement("canvas");
			this.image = canvas;
			var context = canvas.getContext("2d");
			canvas.width = this.get_width();
			canvas.height = this.get_height();
			this.g2canvas = new kha_js_CanvasGraphics(context,this.get_width(),this.get_height());
		}
		return this.g2canvas;
	}
	,get_g4: function() {
		return null;
	}
	,get_width: function() {
		return this.myWidth;
	}
	,get_height: function() {
		return this.myHeight;
	}
	,get_realWidth: function() {
		return this.myWidth;
	}
	,get_realHeight: function() {
		return this.myHeight;
	}
	,isOpaque: function(x,y) {
		if(this.data == null) {
			if(kha_CanvasImage.context == null) return true; else this.createImageData();
		}
		return this.data.data[y * Std["int"](this.image.width) * 4 + x * 4 + 3] != 0;
	}
	,at: function(x,y) {
		if(this.data == null) {
			if(kha_CanvasImage.context == null) return kha__$Color_Color_$Impl_$.Black; else this.createImageData();
		}
		var value = this.data.data[y * Std["int"](this.image.width) * 4 + x * 4];
		return kha__$Color_Color_$Impl_$._new(value);
	}
	,createImageData: function() {
		kha_CanvasImage.context.strokeStyle = "rgba(0,0,0,0)";
		kha_CanvasImage.context.fillStyle = "rgba(0,0,0,0)";
		kha_CanvasImage.context.fillRect(0,0,this.image.width,this.image.height);
		kha_CanvasImage.context.drawImage(this.image,0,0,this.image.width,this.image.height,0,0,this.image.width,this.image.height);
		this.data = kha_CanvasImage.context.getImageData(0,0,this.image.width,this.image.height);
	}
	,createTexture: function() {
		if(kha_Sys.gl == null) return;
		this.texture = kha_Sys.gl.createTexture();
		kha_Sys.gl.bindTexture(kha_Sys.gl.TEXTURE_2D,this.texture);
		kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_MAG_FILTER,kha_Sys.gl.LINEAR);
		kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_MIN_FILTER,kha_Sys.gl.LINEAR);
		kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_WRAP_S,kha_Sys.gl.CLAMP_TO_EDGE);
		kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_WRAP_T,kha_Sys.gl.CLAMP_TO_EDGE);
		if(this.renderTarget) {
			this.frameBuffer = kha_Sys.gl.createFramebuffer();
			kha_Sys.gl.bindFramebuffer(kha_Sys.gl.FRAMEBUFFER,this.frameBuffer);
			kha_Sys.gl.texImage2D(kha_Sys.gl.TEXTURE_2D,0,kha_Sys.gl.RGBA,this.get_realWidth(),this.get_realHeight(),0,kha_Sys.gl.RGBA,kha_Sys.gl.UNSIGNED_BYTE,null);
			kha_Sys.gl.framebufferTexture2D(kha_Sys.gl.FRAMEBUFFER,kha_Sys.gl.COLOR_ATTACHMENT0,kha_Sys.gl.TEXTURE_2D,this.texture,0);
			kha_Sys.gl.bindFramebuffer(kha_Sys.gl.FRAMEBUFFER,null);
		} else if(this.video != null) kha_Sys.gl.texImage2D(kha_Sys.gl.TEXTURE_2D,0,kha_Sys.gl.RGBA,kha_Sys.gl.RGBA,kha_Sys.gl.UNSIGNED_BYTE,this.video); else kha_Sys.gl.texImage2D(kha_Sys.gl.TEXTURE_2D,0,kha_Sys.gl.RGBA,kha_Sys.gl.RGBA,kha_Sys.gl.UNSIGNED_BYTE,this.image);
		kha_Sys.gl.bindTexture(kha_Sys.gl.TEXTURE_2D,null);
	}
	,set: function(stage) {
		kha_Sys.gl.activeTexture(kha_Sys.gl.TEXTURE0 + stage);
		kha_Sys.gl.bindTexture(kha_Sys.gl.TEXTURE_2D,this.texture);
		if(this.video != null) kha_Sys.gl.texImage2D(kha_Sys.gl.TEXTURE_2D,0,kha_Sys.gl.RGBA,kha_Sys.gl.RGBA,kha_Sys.gl.UNSIGNED_BYTE,this.video);
	}
	,lock: function(level) {
		if(level == null) level = 0;
		this.bytes = haxe_io_Bytes.alloc(this.format == kha_graphics4_TextureFormat.RGBA32?4 * this.get_width() * this.get_height():this.get_width() * this.get_height());
		return this.bytes;
	}
	,unlock: function() {
		if(kha_Sys.gl != null) {
			this.texture = kha_Sys.gl.createTexture();
			kha_Sys.gl.bindTexture(kha_Sys.gl.TEXTURE_2D,this.texture);
			kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_MAG_FILTER,kha_Sys.gl.LINEAR);
			kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_MIN_FILTER,kha_Sys.gl.LINEAR);
			kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_WRAP_S,kha_Sys.gl.CLAMP_TO_EDGE);
			kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_WRAP_T,kha_Sys.gl.CLAMP_TO_EDGE);
			kha_Sys.gl.texImage2D(kha_Sys.gl.TEXTURE_2D,0,kha_Sys.gl.LUMINANCE,this.get_width(),this.get_height(),0,kha_Sys.gl.LUMINANCE,kha_Sys.gl.UNSIGNED_BYTE,new Uint8Array(this.bytes.b.bufferValue));
			if(kha_Sys.gl.getError() == 1282) {
				var rgbaBytes = haxe_io_Bytes.alloc(this.get_width() * this.get_height() * 4);
				var _g1 = 0;
				var _g = this.get_height();
				while(_g1 < _g) {
					var y = _g1++;
					var _g3 = 0;
					var _g2 = this.get_width();
					while(_g3 < _g2) {
						var x = _g3++;
						var value = this.bytes.get(y * this.get_width() + x);
						rgbaBytes.set(y * this.get_width() * 4 + x * 4,value);
						rgbaBytes.set(y * this.get_width() * 4 + x * 4 + 1,value);
						rgbaBytes.set(y * this.get_width() * 4 + x * 4 + 2,value);
						rgbaBytes.set(y * this.get_width() * 4 + x * 4 + 3,255);
					}
				}
				kha_Sys.gl.texImage2D(kha_Sys.gl.TEXTURE_2D,0,kha_Sys.gl.RGBA,this.get_width(),this.get_height(),0,kha_Sys.gl.RGBA,kha_Sys.gl.UNSIGNED_BYTE,new Uint8Array(rgbaBytes.b.bufferValue));
			}
			kha_Sys.gl.bindTexture(kha_Sys.gl.TEXTURE_2D,null);
			this.bytes = null;
		}
	}
	,unload: function() {
	}
	,__class__: kha_CanvasImage
});
var kha__$Color_Color_$Impl_$ = {};
$hxClasses["kha._Color.Color_Impl_"] = kha__$Color_Color_$Impl_$;
kha__$Color_Color_$Impl_$.__name__ = ["kha","_Color","Color_Impl_"];
kha__$Color_Color_$Impl_$.fromValue = function(value) {
	return kha__$Color_Color_$Impl_$._new(value);
};
kha__$Color_Color_$Impl_$.fromBytes = function(r,g,b,a) {
	if(a == null) a = 255;
	return kha__$Color_Color_$Impl_$._new(a << 24 | r << 16 | g << 8 | b);
};
kha__$Color_Color_$Impl_$.fromFloats = function(r,g,b,a) {
	if(a == null) a = 1;
	return kha__$Color_Color_$Impl_$._new((a * 255 | 0) << 24 | (r * 255 | 0) << 16 | (g * 255 | 0) << 8 | (b * 255 | 0));
};
kha__$Color_Color_$Impl_$.fromString = function(value) {
	if((value.length == 7 || value.length == 9) && value.charCodeAt(0) == 35) {
		var colorValue = Std.parseInt("0x" + HxOverrides.substr(value,1,null));
		if(value.length == 7) colorValue += -16777216;
		return kha__$Color_Color_$Impl_$._new(colorValue);
	} else throw new js__$Boot_HaxeError("Invalid Color string: '" + value + "'");
};
kha__$Color_Color_$Impl_$._new = function(value) {
	return value;
};
kha__$Color_Color_$Impl_$.get_value = function(this1) {
	return this1;
};
kha__$Color_Color_$Impl_$.set_value = function(this1,value) {
	this1 = value;
	return this1;
};
kha__$Color_Color_$Impl_$.get_Rb = function(this1) {
	return (this1 & 16711680) >>> 16;
};
kha__$Color_Color_$Impl_$.get_Gb = function(this1) {
	return (this1 & 65280) >>> 8;
};
kha__$Color_Color_$Impl_$.get_Bb = function(this1) {
	return this1 & 255;
};
kha__$Color_Color_$Impl_$.get_Ab = function(this1) {
	return this1 >>> 24;
};
kha__$Color_Color_$Impl_$.set_Rb = function(this1,i) {
	this1 = kha__$Color_Color_$Impl_$.get_Ab(this1) << 24 | i << 16 | kha__$Color_Color_$Impl_$.get_Gb(this1) << 8 | kha__$Color_Color_$Impl_$.get_Bb(this1);
	return i;
};
kha__$Color_Color_$Impl_$.set_Gb = function(this1,i) {
	this1 = kha__$Color_Color_$Impl_$.get_Ab(this1) << 24 | kha__$Color_Color_$Impl_$.get_Rb(this1) << 16 | i << 8 | kha__$Color_Color_$Impl_$.get_Bb(this1);
	return i;
};
kha__$Color_Color_$Impl_$.set_Bb = function(this1,i) {
	this1 = kha__$Color_Color_$Impl_$.get_Ab(this1) << 24 | kha__$Color_Color_$Impl_$.get_Rb(this1) << 16 | kha__$Color_Color_$Impl_$.get_Gb(this1) << 8 | i;
	return i;
};
kha__$Color_Color_$Impl_$.set_Ab = function(this1,i) {
	this1 = i << 24 | kha__$Color_Color_$Impl_$.get_Rb(this1) << 16 | kha__$Color_Color_$Impl_$.get_Gb(this1) << 8 | kha__$Color_Color_$Impl_$.get_Bb(this1);
	return i;
};
kha__$Color_Color_$Impl_$.get_R = function(this1) {
	return kha__$Color_Color_$Impl_$.get_Rb(this1) * 0.00392156862745098;
};
kha__$Color_Color_$Impl_$.get_G = function(this1) {
	return kha__$Color_Color_$Impl_$.get_Gb(this1) * 0.00392156862745098;
};
kha__$Color_Color_$Impl_$.get_B = function(this1) {
	return kha__$Color_Color_$Impl_$.get_Bb(this1) * 0.00392156862745098;
};
kha__$Color_Color_$Impl_$.get_A = function(this1) {
	return kha__$Color_Color_$Impl_$.get_Ab(this1) * 0.00392156862745098;
};
kha__$Color_Color_$Impl_$.set_R = function(this1,f) {
	this1 = Std["int"](kha__$Color_Color_$Impl_$.get_Ab(this1) * 0.00392156862745098 * 255) << 24 | (f * 255 | 0) << 16 | Std["int"](kha__$Color_Color_$Impl_$.get_Gb(this1) * 0.00392156862745098 * 255) << 8 | Std["int"](kha__$Color_Color_$Impl_$.get_Bb(this1) * 0.00392156862745098 * 255);
	return f;
};
kha__$Color_Color_$Impl_$.set_G = function(this1,f) {
	this1 = Std["int"](kha__$Color_Color_$Impl_$.get_Ab(this1) * 0.00392156862745098 * 255) << 24 | Std["int"](kha__$Color_Color_$Impl_$.get_Rb(this1) * 0.00392156862745098 * 255) << 16 | (f * 255 | 0) << 8 | Std["int"](kha__$Color_Color_$Impl_$.get_Bb(this1) * 0.00392156862745098 * 255);
	return f;
};
kha__$Color_Color_$Impl_$.set_B = function(this1,f) {
	this1 = Std["int"](kha__$Color_Color_$Impl_$.get_Ab(this1) * 0.00392156862745098 * 255) << 24 | Std["int"](kha__$Color_Color_$Impl_$.get_Rb(this1) * 0.00392156862745098 * 255) << 16 | Std["int"](kha__$Color_Color_$Impl_$.get_Gb(this1) * 0.00392156862745098 * 255) << 8 | (f * 255 | 0);
	return f;
};
kha__$Color_Color_$Impl_$.set_A = function(this1,f) {
	this1 = (f * 255 | 0) << 24 | Std["int"](kha__$Color_Color_$Impl_$.get_Rb(this1) * 0.00392156862745098 * 255) << 16 | Std["int"](kha__$Color_Color_$Impl_$.get_Gb(this1) * 0.00392156862745098 * 255) << 8 | Std["int"](kha__$Color_Color_$Impl_$.get_Bb(this1) * 0.00392156862745098 * 255);
	return f;
};
var kha_Configuration = function() { };
$hxClasses["kha.Configuration"] = kha_Configuration;
kha_Configuration.__name__ = ["kha","Configuration"];
kha_Configuration.screen = function() {
	return kha_Configuration.theScreen;
};
kha_Configuration.schedulerInitialized = function() {
	kha_Configuration.id = -1;
};
kha_Configuration.setScreen = function(screen) {
	kha_Configuration.theScreen = screen;
	kha_Configuration.theScreen.setInstance();
	if(kha_Configuration.id < 0) kha_Configuration.id = kha_Scheduler.addTimeTask(kha_Configuration.update,0,0.0166666666666666664);
};
kha_Configuration.update = function() {
	kha_Configuration.theScreen.update();
};
var kha_Cursor = function() { };
$hxClasses["kha.Cursor"] = kha_Cursor;
kha_Cursor.__name__ = ["kha","Cursor"];
kha_Cursor.prototype = {
	__class__: kha_Cursor
};
var kha_EmptyScreen = function(color) {
	kha_Game.call(this,"Nothing",false);
	this.color = color;
};
$hxClasses["kha.EmptyScreen"] = kha_EmptyScreen;
kha_EmptyScreen.__name__ = ["kha","EmptyScreen"];
kha_EmptyScreen.__super__ = kha_Game;
kha_EmptyScreen.prototype = $extend(kha_Game.prototype,{
	render: function(frame) {
		this.startRender(frame);
		frame.get_g2().set_color(this.color);
		frame.get_g2().fillRect(0,0,10000,10000);
		this.endRender(frame);
	}
	,update: function() {
	}
	,__class__: kha_EmptyScreen
});
var kha_EnvironmentVariables = function() {
};
$hxClasses["kha.EnvironmentVariables"] = kha_EnvironmentVariables;
kha_EnvironmentVariables.__name__ = ["kha","EnvironmentVariables"];
kha_EnvironmentVariables.prototype = {
	getVariable: function(name) {
		return "";
	}
	,__class__: kha_EnvironmentVariables
};
var kha_Font = function() { };
$hxClasses["kha.Font"] = kha_Font;
kha_Font.__name__ = ["kha","Font"];
kha_Font.prototype = {
	__class__: kha_Font
};
var kha_FontStyle = function(bold,italic,underlined) {
	this.bold = bold;
	this.italic = italic;
	this.underlined = underlined;
};
$hxClasses["kha.FontStyle"] = kha_FontStyle;
kha_FontStyle.__name__ = ["kha","FontStyle"];
kha_FontStyle.prototype = {
	getBold: function() {
		return this.bold;
	}
	,getItalic: function() {
		return this.italic;
	}
	,getUnderlined: function() {
		return this.underlined;
	}
	,__class__: kha_FontStyle
};
var kha_Framebuffer = function(g1,g2,g4) {
	this.graphics1 = g1;
	this.graphics2 = g2;
	this.graphics4 = g4;
};
$hxClasses["kha.Framebuffer"] = kha_Framebuffer;
kha_Framebuffer.__name__ = ["kha","Framebuffer"];
kha_Framebuffer.__interfaces__ = [kha_Canvas];
kha_Framebuffer.prototype = {
	init: function(g1,g2,g4) {
		this.graphics1 = g1;
		this.graphics2 = g2;
		this.graphics4 = g4;
	}
	,get_g1: function() {
		return this.graphics1;
	}
	,get_g2: function() {
		return this.graphics2;
	}
	,get_g4: function() {
		return this.graphics4;
	}
	,get_width: function() {
		return kha_Sys.get_pixelWidth();
	}
	,get_height: function() {
		return kha_Sys.get_pixelHeight();
	}
	,__class__: kha_Framebuffer
};
var kha_HighscoreList = function() {
	this.scores = [];
};
$hxClasses["kha.HighscoreList"] = kha_HighscoreList;
kha_HighscoreList.__name__ = ["kha","HighscoreList"];
kha_HighscoreList.prototype = {
	getScores: function() {
		return this.scores;
	}
	,addScore: function(name,score) {
		this.scores.push(new kha_Score(name,score));
		this.scores.sort(function(score1,score2) {
			return score2.getScore() - score1.getScore();
		});
	}
	,load: function(file) {
		if(file == null) return;
		var loaded = file.readObject();
		this.scores = [];
		if(loaded != null) {
			var _g1 = 0;
			var _g = loaded.length;
			while(_g1 < _g) {
				var i = _g1++;
				this.scores[i] = new kha_Score(loaded[i].name,loaded[i].score);
			}
		}
	}
	,save: function(file) {
		file.writeObject(this.scores);
	}
	,__class__: kha_HighscoreList
};
var kha_Key = $hxClasses["kha.Key"] = { __ename__ : ["kha","Key"], __constructs__ : ["BACKSPACE","TAB","ENTER","SHIFT","CTRL","ALT","CHAR","ESC","DEL","UP","DOWN","LEFT","RIGHT","BACK"] };
kha_Key.BACKSPACE = ["BACKSPACE",0];
kha_Key.BACKSPACE.toString = $estr;
kha_Key.BACKSPACE.__enum__ = kha_Key;
kha_Key.TAB = ["TAB",1];
kha_Key.TAB.toString = $estr;
kha_Key.TAB.__enum__ = kha_Key;
kha_Key.ENTER = ["ENTER",2];
kha_Key.ENTER.toString = $estr;
kha_Key.ENTER.__enum__ = kha_Key;
kha_Key.SHIFT = ["SHIFT",3];
kha_Key.SHIFT.toString = $estr;
kha_Key.SHIFT.__enum__ = kha_Key;
kha_Key.CTRL = ["CTRL",4];
kha_Key.CTRL.toString = $estr;
kha_Key.CTRL.__enum__ = kha_Key;
kha_Key.ALT = ["ALT",5];
kha_Key.ALT.toString = $estr;
kha_Key.ALT.__enum__ = kha_Key;
kha_Key.CHAR = ["CHAR",6];
kha_Key.CHAR.toString = $estr;
kha_Key.CHAR.__enum__ = kha_Key;
kha_Key.ESC = ["ESC",7];
kha_Key.ESC.toString = $estr;
kha_Key.ESC.__enum__ = kha_Key;
kha_Key.DEL = ["DEL",8];
kha_Key.DEL.toString = $estr;
kha_Key.DEL.__enum__ = kha_Key;
kha_Key.UP = ["UP",9];
kha_Key.UP.toString = $estr;
kha_Key.UP.__enum__ = kha_Key;
kha_Key.DOWN = ["DOWN",10];
kha_Key.DOWN.toString = $estr;
kha_Key.DOWN.__enum__ = kha_Key;
kha_Key.LEFT = ["LEFT",11];
kha_Key.LEFT.toString = $estr;
kha_Key.LEFT.__enum__ = kha_Key;
kha_Key.RIGHT = ["RIGHT",12];
kha_Key.RIGHT.toString = $estr;
kha_Key.RIGHT.__enum__ = kha_Key;
kha_Key.BACK = ["BACK",13];
kha_Key.BACK.toString = $estr;
kha_Key.BACK.__enum__ = kha_Key;
var kha_BakedChar = function() {
};
$hxClasses["kha.BakedChar"] = kha_BakedChar;
kha_BakedChar.__name__ = ["kha","BakedChar"];
kha_BakedChar.prototype = {
	__class__: kha_BakedChar
};
var kha_AlignedQuad = function() {
};
$hxClasses["kha.AlignedQuad"] = kha_AlignedQuad;
kha_AlignedQuad.__name__ = ["kha","AlignedQuad"];
kha_AlignedQuad.prototype = {
	__class__: kha_AlignedQuad
};
var kha_Kravur = function(blob) {
	var size = blob.readS32LE();
	var ascent = blob.readS32LE();
	var descent = blob.readS32LE();
	var lineGap = blob.readS32LE();
	this.baseline = ascent;
	this.chars = [];
	var _g1 = 0;
	var _g = 224;
	while(_g1 < _g) {
		var i = _g1++;
		var $char = new kha_BakedChar();
		$char.x0 = blob.readS16LE();
		$char.y0 = blob.readS16LE();
		$char.x1 = blob.readS16LE();
		$char.y1 = blob.readS16LE();
		$char.xoff = blob.readF32LE();
		$char.yoff = blob.readF32LE() + this.baseline;
		$char.xadvance = blob.readF32LE();
		this.chars.push($char);
	}
	this.width = blob.readS32LE();
	this.height = blob.readS32LE();
	var w = this.width;
	var h = this.height;
	while(w > kha_Image.get_maxSize() || h > kha_Image.get_maxSize()) {
		blob.seek(blob.position + h * w);
		w = w / 2 | 0;
		h = h / 2 | 0;
	}
	this.texture = kha_Image.create(w,h,kha_graphics4_TextureFormat.L8);
	var bytes = this.texture.lock();
	var pos = 0;
	var _g2 = 0;
	while(_g2 < h) {
		var y = _g2++;
		var _g11 = 0;
		while(_g11 < w) {
			var x = _g11++;
			bytes.set(pos,blob.readU8());
			++pos;
		}
	}
	this.texture.unlock();
	blob.reset();
};
$hxClasses["kha.Kravur"] = kha_Kravur;
kha_Kravur.__name__ = ["kha","Kravur"];
kha_Kravur.__interfaces__ = [kha_Font];
kha_Kravur.get = function(name,style,size) {
	var key = name;
	if(style.getBold()) key += "#Bold";
	if(style.getItalic()) key += "#Italic";
	key += size + ".kravur";
	var kravur = kha_Kravur.fontCache.get(key);
	if(kravur == null) {
		var blob = kha_Loader.the.getBlob(key);
		if(blob != null) {
			kravur = new kha_Kravur(blob);
			kravur.myName = name;
			kravur.myStyle = style;
			kravur.mySize = size;
			kha_Kravur.fontCache.set(key,kravur);
		}
	}
	return kravur;
};
kha_Kravur.prototype = {
	getTexture: function() {
		return this.texture;
	}
	,getBakedQuad: function(char_index,xpos,ypos) {
		if(char_index >= this.chars.length) return null;
		var ipw = 1.0 / this.width;
		var iph = 1.0 / this.height;
		var b = this.chars[char_index];
		if(b == null) return null;
		var round_x = Math.round(xpos + b.xoff);
		var round_y = Math.round(ypos + b.yoff);
		var q = new kha_AlignedQuad();
		q.x0 = round_x;
		q.y0 = round_y;
		q.x1 = round_x + b.x1 - b.x0;
		q.y1 = round_y + b.y1 - b.y0;
		q.s0 = b.x0 * ipw;
		q.t0 = b.y0 * iph;
		q.s1 = b.x1 * ipw;
		q.t1 = b.y1 * iph;
		q.xadvance = b.xadvance;
		return q;
	}
	,getCharWidth: function(charIndex) {
		if(charIndex < 32) return 0;
		if(charIndex - 32 >= this.chars.length) return 0;
		return this.chars[charIndex - 32].xadvance;
	}
	,get_name: function() {
		return this.myName;
	}
	,get_style: function() {
		return this.myStyle;
	}
	,get_size: function() {
		return this.mySize;
	}
	,getHeight: function() {
		return this.mySize;
	}
	,charWidth: function(ch) {
		return this.getCharWidth(HxOverrides.cca(ch,0));
	}
	,charsWidth: function(ch,offset,length) {
		return this.stringWidth(HxOverrides.substr(ch,offset,length));
	}
	,stringWidth: function(string) {
		var str = new String(string);
		var width = 0;
		var _g1 = 0;
		var _g = str.length;
		while(_g1 < _g) {
			var c = _g1++;
			width += this.getCharWidth(HxOverrides.cca(str,c));
		}
		if(width > 10 && width < 100) {
			var a = 3;
			++a;
		}
		return width;
	}
	,getBaselinePosition: function() {
		return this.baseline;
	}
	,__class__: kha_Kravur
};
var kha_Loader = $hx_exports.kha.Loader = function() {
	this.basePath = ".";
	this.autoCleanupAssets = true;
	this.blobs = new haxe_ds_StringMap();
	this.images = new haxe_ds_StringMap();
	this.sounds = new haxe_ds_StringMap();
	this.musics = new haxe_ds_StringMap();
	this.videos = new haxe_ds_StringMap();
	this.assets = new haxe_ds_StringMap();
	this.shaders = new haxe_ds_StringMap();
	this.rooms = new haxe_ds_StringMap();
	this.enqueued = [];
	this.multiFileCallbacks = [];
	this.loadingFilesLeft = 0;
	this.loadingFilesCount = 0;
	this.width = -1;
	this.height = -1;
};
$hxClasses["kha.Loader"] = kha_Loader;
kha_Loader.__name__ = ["kha","Loader"];
kha_Loader.init = function(loader) {
	kha_Loader.the = loader;
};
kha_Loader.containsAsset = function(assetName,assetType,map) {
	var _g = 0;
	while(_g < map.length) {
		var asset = map[_g];
		++_g;
		if(asset.type == assetType && asset.name == assetName) return true;
	}
	return false;
};
kha_Loader.prototype = {
	getLoadPercentage: function() {
		if(this.loadingFilesCount == 0) return 0;
		return (this.loadingFilesCount - this.loadingFilesLeft) / this.loadingFilesCount * 100 | 0;
	}
	,getBlob: function(name) {
		return this.blobs.get(name);
	}
	,getImage: function(name) {
		if(!this.images.exists(name) && name != "") haxe_Log.trace("Could not find image " + name + ".",{ fileName : "Loader.hx", lineNumber : 65, className : "kha.Loader", methodName : "getImage"});
		return this.images.get(name);
	}
	,getMusic: function(name) {
		return this.musics.get(name);
	}
	,getSound: function(name) {
		if(name != "" && !this.sounds.exists(name)) haxe_Log.trace("Sound '" + name + "' not found",{ fileName : "Loader.hx", lineNumber : 76, className : "kha.Loader", methodName : "getSound"});
		return this.sounds.get(name);
	}
	,getVideo: function(name) {
		return this.videos.get(name);
	}
	,getShader: function(name) {
		return this.shaders.get(name);
	}
	,getAvailableBlobs: function() {
		return this.blobs.keys();
	}
	,isBlobAvailable: function(name) {
		return this.blobs.exists(name);
	}
	,getAvailableImages: function() {
		return this.images.keys();
	}
	,isImageAvailable: function(name) {
		return this.images.exists(name);
	}
	,getAvailableMusic: function() {
		return this.musics.keys();
	}
	,isMusicAvailable: function(name) {
		return this.musics.exists(name);
	}
	,getAvailableSounds: function() {
		return this.sounds.keys();
	}
	,isSoundAvailable: function(name) {
		return this.sounds.exists(name);
	}
	,getAvailableVideos: function() {
		return this.videos.keys();
	}
	,isVideoAvailable: function(name) {
		return this.videos.exists(name);
	}
	,enqueue: function(asset) {
		if(!Lambda.has(this.enqueued,asset)) {
			++this.loadingFilesLeft;
			++this.loadingFilesCount;
			this.enqueued.push(asset);
		}
	}
	,removeImage: function(resources,resourceName) {
		var resource;
		resource = __map_reserved[resourceName] != null?resources.getReserved(resourceName):resources.h[resourceName];
		resource.unload();
		resources.remove(resourceName);
	}
	,removeBlob: function(resources,resourceName) {
		var resource;
		resource = __map_reserved[resourceName] != null?resources.getReserved(resourceName):resources.h[resourceName];
		resource.unload();
		resources.remove(resourceName);
	}
	,removeMusic: function(resources,resourceName) {
		var resource;
		resource = __map_reserved[resourceName] != null?resources.getReserved(resourceName):resources.h[resourceName];
		resource.unload();
		resources.remove(resourceName);
	}
	,removeSound: function(resources,resourceName) {
		var resource;
		resource = __map_reserved[resourceName] != null?resources.getReserved(resourceName):resources.h[resourceName];
		resource.unload();
		resources.remove(resourceName);
	}
	,removeVideo: function(resources,resourceName) {
		var resource;
		resource = __map_reserved[resourceName] != null?resources.getReserved(resourceName):resources.h[resourceName];
		resource.unload();
		resources.remove(resourceName);
	}
	,cleanup: function() {
		var $it0 = this.images.keys();
		while( $it0.hasNext() ) {
			var imagename = $it0.next();
			if(!kha_Loader.containsAsset(imagename,"image",this.enqueued)) this.removeImage(this.images,imagename);
		}
		var $it1 = this.musics.keys();
		while( $it1.hasNext() ) {
			var musicname = $it1.next();
			if(!kha_Loader.containsAsset(musicname,"music",this.enqueued)) this.removeMusic(this.musics,musicname);
		}
		var $it2 = this.sounds.keys();
		while( $it2.hasNext() ) {
			var soundname = $it2.next();
			if(!kha_Loader.containsAsset(soundname,"sound",this.enqueued)) this.removeSound(this.sounds,soundname);
		}
		var $it3 = this.videos.keys();
		while( $it3.hasNext() ) {
			var videoname = $it3.next();
			if(!kha_Loader.containsAsset(videoname,"video",this.enqueued)) this.removeVideo(this.videos,videoname);
		}
		var $it4 = this.blobs.keys();
		while( $it4.hasNext() ) {
			var blobname = $it4.next();
			if(!kha_Loader.containsAsset(blobname,"blob",this.enqueued)) this.removeBlob(this.blobs,blobname);
		}
		if(!this.autoCleanupAssets) this.enqueued = [];
	}
	,loadFiles: function(call,autoCleanup) {
		var _g3 = this;
		this.multiFileCallbacks.push(call);
		if(autoCleanup) this.cleanup();
		if(this.enqueued.length > 0) {
			var _g1 = 0;
			var _g = this.enqueued.length;
			while(_g1 < _g) {
				var i = _g1++;
				var _g2 = this.enqueued[i].type;
				switch(_g2) {
				case "image":
					if(!(function($this) {
						var $r;
						var key = $this.enqueued[i].name;
						$r = $this.images.exists(key);
						return $r;
					}(this))) {
						var imageName = [this.enqueued[i].name];
						this.loadImage(this.enqueued[i],(function(imageName) {
							return function(image) {
								if(!_g3.images.exists(imageName[0])) {
									_g3.images.set(imageName[0],image);
									--_g3.loadingFilesLeft;
									_g3.checkComplete();
								}
							};
						})(imageName));
					} else this.loadDummyFile();
					break;
				case "music":
					if(!(function($this) {
						var $r;
						var key1 = $this.enqueued[i].name;
						$r = $this.musics.exists(key1);
						return $r;
					}(this))) {
						var musicName = [this.enqueued[i].name];
						this.loadMusic(this.enqueued[i],(function(musicName) {
							return function(music) {
								if(!_g3.musics.exists(musicName[0])) {
									_g3.musics.set(musicName[0],music);
									--_g3.loadingFilesLeft;
									_g3.checkComplete();
								}
							};
						})(musicName));
					} else this.loadDummyFile();
					break;
				case "sound":
					if(!(function($this) {
						var $r;
						var key2 = $this.enqueued[i].name;
						$r = $this.sounds.exists(key2);
						return $r;
					}(this))) {
						var soundName = [this.enqueued[i].name];
						this.loadSound(this.enqueued[i],(function(soundName) {
							return function(sound) {
								if(!_g3.sounds.exists(soundName[0])) {
									_g3.sounds.set(soundName[0],sound);
									--_g3.loadingFilesLeft;
									_g3.checkComplete();
								}
							};
						})(soundName));
					} else this.loadDummyFile();
					break;
				case "video":
					if(!(function($this) {
						var $r;
						var key3 = $this.enqueued[i].name;
						$r = $this.videos.exists(key3);
						return $r;
					}(this))) {
						var videoName = [this.enqueued[i].name];
						this.loadVideo(this.enqueued[i],(function(videoName) {
							return function(video) {
								if(!_g3.videos.exists(videoName[0])) {
									_g3.videos.set(videoName[0],video);
									--_g3.loadingFilesLeft;
									_g3.checkComplete();
								}
							};
						})(videoName));
					} else this.loadDummyFile();
					break;
				case "blob":
					if(!(function($this) {
						var $r;
						var key4 = $this.enqueued[i].name;
						$r = $this.blobs.exists(key4);
						return $r;
					}(this))) {
						var blobName = [this.enqueued[i].name];
						this.loadBlob(this.enqueued[i],(function(blobName) {
							return function(blob) {
								if(!_g3.blobs.exists(blobName[0])) {
									_g3.blobs.set(blobName[0],blob);
									--_g3.loadingFilesLeft;
									_g3.checkComplete();
								}
							};
						})(blobName));
					} else this.loadDummyFile();
					break;
				}
			}
		} else this.checkComplete();
	}
	,loadProject: function(call) {
		var _g = this;
		this.enqueue({ name : "project.kha", files : [this.basePath == "."?"project.kha":this.basePath + "/project.kha"], type : "blob"});
		this.loadFiles(function() {
			_g.loadShaders(call);
		},false);
	}
	,loadShaders: function(call) {
		var _g2 = this;
		var $it0 = this.shaders.iterator();
		while( $it0.hasNext() ) {
			var shader = $it0.next();
			shader.unload();
		}
		this.shaders = new haxe_ds_StringMap();
		var project = this.parseProject();
		if(project.shaders != null && project.shaders.length > 0) {
			var shaders = project.shaders;
			var shaderCount = shaders.length;
			var _g1 = 0;
			var _g = shaders.length;
			while(_g1 < _g) {
				var i = _g1++;
				var shader1 = [shaders[i]];
				this.loadBlob(shader1[0],(function(shader1) {
					return function(blob) {
						if(!_g2.shaders.exists(shader1[0].name)) {
							_g2.shaders.set(shader1[0].name,blob);
							--shaderCount;
							if(shaderCount == 0) call();
						}
					};
				})(shader1));
			}
		} else call();
	}
	,loadRoomAssets: function(room) {
		var _g1 = 0;
		var _g = room.assets.length;
		while(_g1 < _g) {
			var i = _g1++;
			this.enqueue(room.assets[i]);
		}
		if(room.parent != null) this.loadRoomAssets(room.parent);
	}
	,loadRoom: function(name,call) {
		this.loadRoomAssets(this.rooms.get(name));
		this.loadFiles(call,this.autoCleanupAssets);
	}
	,unloadedImage: function(name) {
		this.removeImage(this.images,name);
	}
	,initProject: function() {
		var project = this.parseProject();
		this.name = project.game.name;
		this.width = project.game.width;
		this.height = project.game.height;
		if(Object.prototype.hasOwnProperty.call(project.game,"antiAliasingSamples")) this.antiAliasingSamples = project.game.antiAliasingSamples; else this.antiAliasingSamples = 1;
		var assets = project.assets;
		var _g1 = 0;
		var _g = assets.length;
		while(_g1 < _g) {
			var i = _g1++;
			if(this.basePath != ".") assets[i].file = this.basePath + "/" + assets[i].file;
			if(this.assets.exists(assets[i].name)) this.assets.get(assets[i].name).push(assets[i]); else this.assets.set(assets[i].name,[assets[i]]);
		}
		var rooms = project.rooms;
		var _g11 = 0;
		var _g2 = rooms.length;
		while(_g11 < _g2) {
			var i1 = _g11++;
			var room = new kha_loader_Room(rooms[i1].name);
			var roomAssets = rooms[i1].assets;
			var _g3 = 0;
			var _g21 = roomAssets.length;
			while(_g3 < _g21) {
				var i2 = _g3++;
				var assets1 = this.assets.get(roomAssets[i2]);
				var _g4 = 0;
				while(_g4 < assets1.length) {
					var asset = assets1[_g4];
					++_g4;
					room.assets.push(asset);
				}
			}
			if(rooms[i1].parent != null) room.parent = new kha_loader_Room(rooms[i1].parent);
			this.rooms.set(rooms[i1].name,room);
		}
		var $it0 = this.rooms.iterator();
		while( $it0.hasNext() ) {
			var room1 = $it0.next();
			if(room1.parent != null) {
				var $it1 = this.rooms.iterator();
				while( $it1.hasNext() ) {
					var room2 = $it1.next();
					if(room2.name == room1.parent.name) {
						room1.parent = room2;
						break;
					}
				}
			}
		}
	}
	,parseProject: function() {
		return JSON.parse(this.getBlob("project.kha").toString());
	}
	,checkComplete: function() {
		if(this.loadingFilesLeft == 0) {
			this.loadingFilesCount = 0;
			if(this.autoCleanupAssets) this.enqueued = [];
			var lastMultiFileCallbacks = this.multiFileCallbacks;
			this.multiFileCallbacks = [];
			var _g = 0;
			while(_g < lastMultiFileCallbacks.length) {
				var callback = lastMultiFileCallbacks[_g];
				++_g;
				callback();
			}
		} else if(this.loadingFilesLeft < 0) haxe_Log.trace("Weird loading error, please restart the internet.",{ fileName : "Loader.hx", lineNumber : 393, className : "kha.Loader", methodName : "checkComplete"});
	}
	,loadDummyFile: function() {
		--this.loadingFilesLeft;
		this.checkComplete();
	}
	,loadImage: function(desc,done) {
	}
	,loadBlob: function(desc,done) {
	}
	,loadSound: function(desc,done) {
	}
	,loadMusic: function(desc,done) {
	}
	,loadVideo: function(desc,done) {
	}
	,loadFont: function(name,style,size) {
		return null;
	}
	,loadURL: function(url) {
	}
	,setNormalCursor: function() {
	}
	,setHandCursor: function() {
	}
	,setCursorBusy: function(busy) {
	}
	,showKeyboard: function() {
	}
	,hideKeyboard: function() {
	}
	,__class__: kha_Loader
};
var kha_LoadingScreen = function() {
	kha_Game.call(this,"Loading",false);
};
$hxClasses["kha.LoadingScreen"] = kha_LoadingScreen;
kha_LoadingScreen.__name__ = ["kha","LoadingScreen"];
kha_LoadingScreen.__super__ = kha_Game;
kha_LoadingScreen.prototype = $extend(kha_Game.prototype,{
	render: function(frame) {
		this.startRender(frame);
		if(kha_Loader.the != null) {
			frame.get_g2().set_color(kha__$Color_Color_$Impl_$.fromBytes(0,0,255));
			frame.get_g2().fillRect(frame.get_width() / 4,frame.get_height() / 2 - 10,kha_Loader.the.getLoadPercentage() * frame.get_width() / 2 / 100,20);
			frame.get_g2().set_color(kha__$Color_Color_$Impl_$.fromBytes(28,28,28));
			frame.get_g2().drawRect(frame.get_width() / 4,frame.get_height() / 2 - 10,frame.get_width() / 2,20);
		}
		this.endRender(frame);
	}
	,update: function() {
	}
	,__class__: kha_LoadingScreen
});
var kha_Mouse = function() {
	this.forceSystem = false;
	this.hidden = false;
	this.cursors = [];
	this.cursorIndex = -1;
};
$hxClasses["kha.Mouse"] = kha_Mouse;
kha_Mouse.__name__ = ["kha","Mouse"];
kha_Mouse.prototype = {
	show: function() {
		this.hidden = false;
		if(this.cursorIndex < 0 || this.forceSystem) this.showSystemCursor();
	}
	,hide: function() {
		this.hidden = true;
		this.hideSystemCursor();
	}
	,hideSystemCursor: function() {
	}
	,showSystemCursor: function() {
	}
	,forceSystemCursor: function(force) {
		this.forceSystem = force;
		if(this.forceSystem) {
			if(!this.hidden) this.showSystemCursor();
		} else if(this.cursorIndex >= 0) this.hideSystemCursor();
	}
	,pushCursor: function(cursorImage) {
		++this.cursorIndex;
		this.cursors[this.cursorIndex] = cursorImage;
		if(!this.forceSystem) this.hideSystemCursor();
	}
	,popCursor: function() {
		--this.cursorIndex;
		if(this.cursorIndex <= -1) {
			this.cursorIndex = -1;
			if(!this.hidden) this.showSystemCursor();
		}
	}
	,render: function(g) {
		if(this.cursorIndex >= 0 && !this.hidden) this.cursors[this.cursorIndex].render(g,kha_Starter.mouseX,kha_Starter.mouseY);
	}
	,update: function() {
		if(this.cursorIndex >= 0) this.cursors[this.cursorIndex].update(kha_Starter.mouseX,kha_Starter.mouseY);
	}
	,__class__: kha_Mouse
};
var kha_Music = function() {
	this._nativemusic = null;
};
$hxClasses["kha.Music"] = kha_Music;
kha_Music.__name__ = ["kha","Music"];
kha_Music.__interfaces__ = [kha_Resource];
kha_Music.prototype = {
	unload: function() {
	}
	,__class__: kha_Music
};
var kha_Rectangle = function(x,y,width,height) {
	this.x = x;
	this.y = y;
	this.width = width;
	this.height = height;
};
$hxClasses["kha.Rectangle"] = kha_Rectangle;
kha_Rectangle.__name__ = ["kha","Rectangle"];
kha_Rectangle.prototype = {
	setPos: function(x,y) {
		this.x = x;
		this.y = y;
	}
	,moveX: function(xdelta) {
		this.x += xdelta;
	}
	,moveY: function(ydelta) {
		this.y += ydelta;
	}
	,collision: function(r) {
		var a;
		var b;
		if(this.x < r.x) a = r.x < this.x + this.width; else a = this.x < r.x + r.width;
		if(this.y < r.y) b = r.y < this.y + this.height; else b = this.y < r.y + r.height;
		return a && b;
	}
	,__class__: kha_Rectangle
};
var kha_Rotation = function(center,angle) {
	this.center = center;
	this.angle = angle;
};
$hxClasses["kha.Rotation"] = kha_Rotation;
kha_Rotation.__name__ = ["kha","Rotation"];
kha_Rotation.prototype = {
	__class__: kha_Rotation
};
var kha_TargetRectangle = function(x,y,w,h,s,r) {
	this.x = x;
	this.y = y;
	this.width = w;
	this.height = h;
	this.scaleFactor = s;
	this.rotation = r;
};
$hxClasses["kha.TargetRectangle"] = kha_TargetRectangle;
kha_TargetRectangle.__name__ = ["kha","TargetRectangle"];
kha_TargetRectangle.prototype = {
	__class__: kha_TargetRectangle
};
var kha_Scaler = function() { };
$hxClasses["kha.Scaler"] = kha_Scaler;
kha_Scaler.__name__ = ["kha","Scaler"];
kha_Scaler.targetRect = function(width,height,destinationWidth,destinationHeight,rotation) {
	var scalex;
	var scaley;
	var scalew;
	var scaleh;
	var scale;
	switch(rotation[1]) {
	case 0:
		if(width / height > destinationWidth / destinationHeight) {
			scale = destinationWidth / width;
			scalew = width * scale;
			scaleh = height * scale;
			scalex = 0;
			scaley = (destinationHeight - scaleh) * 0.5;
		} else {
			scale = destinationHeight / height;
			scalew = width * scale;
			scaleh = height * scale;
			scalex = (destinationWidth - scalew) * 0.5;
			scaley = 0;
		}
		break;
	case 1:
		if(width / height > destinationHeight / destinationWidth) {
			scale = destinationHeight / width;
			scalew = width * scale;
			scaleh = height * scale;
			scalex = (destinationWidth - scaleh) * 0.5 + scaleh;
			scaley = 0;
		} else {
			scale = destinationWidth / height;
			scalew = width * scale;
			scaleh = height * scale;
			scalex = scaleh;
			scaley = (destinationHeight - scalew) * 0.5;
		}
		break;
	case 2:
		if(width / height > destinationWidth / destinationHeight) {
			scale = destinationWidth / width;
			scalew = width * scale;
			scaleh = height * scale;
			scalex = scalew;
			scaley = (destinationHeight - scaleh) * 0.5 + scaleh;
		} else {
			scale = destinationHeight / height;
			scalew = width * scale;
			scaleh = height * scale;
			scalex = (destinationWidth - scalew) * 0.5 + scalew;
			scaley = scaleh;
		}
		break;
	case 3:
		if(width / height > destinationHeight / destinationWidth) {
			scale = destinationHeight / width;
			scalew = width * scale;
			scaleh = height * scale;
			scalex = (destinationWidth - scaleh) * 0.5;
			scaley = scalew;
		} else {
			scale = destinationWidth / height;
			scalew = width * scale;
			scaleh = height * scale;
			scalex = 0;
			scaley = (destinationHeight - scalew) * 0.5 + scalew;
		}
		break;
	}
	return new kha_TargetRectangle(scalex,scaley,scalew,scaleh,scale,rotation);
};
kha_Scaler.transformXDirectly = function(x,y,sourceWidth,sourceHeight,destinationWidth,destinationHeight,rotation) {
	var targetRect = kha_Scaler.targetRect(sourceWidth,sourceHeight,destinationWidth,destinationHeight,rotation);
	var _g = targetRect.rotation;
	switch(_g[1]) {
	case 0:
		return (x - targetRect.x) / targetRect.scaleFactor | 0;
	case 1:
		return (y - targetRect.y) / targetRect.scaleFactor | 0;
	case 2:
		return (targetRect.x - x) / targetRect.scaleFactor | 0;
	case 3:
		return (targetRect.y - y) / targetRect.scaleFactor | 0;
	}
};
kha_Scaler.transformX = function(x,y,source,destination,rotation) {
	return kha_Scaler.transformXDirectly(x,y,source.get_width(),source.get_height(),destination.get_width(),destination.get_height(),rotation);
};
kha_Scaler.transformYDirectly = function(x,y,sourceWidth,sourceHeight,destinationWidth,destinationHeight,rotation) {
	var targetRect = kha_Scaler.targetRect(sourceWidth,sourceHeight,destinationWidth,destinationHeight,rotation);
	var _g = targetRect.rotation;
	switch(_g[1]) {
	case 0:
		return (y - targetRect.y) / targetRect.scaleFactor | 0;
	case 1:
		return (targetRect.x - x) / targetRect.scaleFactor | 0;
	case 2:
		return (targetRect.y - y) / targetRect.scaleFactor | 0;
	case 3:
		return (x - targetRect.x) / targetRect.scaleFactor | 0;
	}
};
kha_Scaler.transformY = function(x,y,source,destination,rotation) {
	return kha_Scaler.transformYDirectly(x,y,source.get_width(),source.get_height(),destination.get_width(),destination.get_height(),rotation);
};
kha_Scaler.scale = function(source,destination,rotation) {
	var g = destination.get_g2();
	g.set_transformation(kha_Scaler.getScaledTransformation(source.get_width(),source.get_height(),destination.get_width(),destination.get_height(),rotation));
	g.set_color(kha__$Color_Color_$Impl_$.White);
	g.set_opacity(1);
	g.drawImage(source,0,0);
};
kha_Scaler.getScaledTransformation = function(width,height,destinationWidth,destinationHeight,rotation) {
	var rect = kha_Scaler.targetRect(width,height,destinationWidth,destinationHeight,rotation);
	var sf = rect.scaleFactor;
	var transformation = new kha_math_FastMatrix3(sf,0,rect.x,0,sf,rect.y,0,0,1);
	switch(rotation[1]) {
	case 0:
		break;
	case 1:
		var m;
		var alpha = Math.PI / 2;
		m = new kha_math_FastMatrix3(Math.cos(alpha),-Math.sin(alpha),0,Math.sin(alpha),Math.cos(alpha),0,0,0,1);
		transformation = new kha_math_FastMatrix3(transformation._00 * m._00 + transformation._10 * m._01 + transformation._20 * m._02,transformation._00 * m._10 + transformation._10 * m._11 + transformation._20 * m._12,transformation._00 * m._20 + transformation._10 * m._21 + transformation._20 * m._22,transformation._01 * m._00 + transformation._11 * m._01 + transformation._21 * m._02,transformation._01 * m._10 + transformation._11 * m._11 + transformation._21 * m._12,transformation._01 * m._20 + transformation._11 * m._21 + transformation._21 * m._22,transformation._02 * m._00 + transformation._12 * m._01 + transformation._22 * m._02,transformation._02 * m._10 + transformation._12 * m._11 + transformation._22 * m._12,transformation._02 * m._20 + transformation._12 * m._21 + transformation._22 * m._22);
		break;
	case 2:
		var m1;
		var alpha1 = Math.PI;
		m1 = new kha_math_FastMatrix3(Math.cos(alpha1),-Math.sin(alpha1),0,Math.sin(alpha1),Math.cos(alpha1),0,0,0,1);
		transformation = new kha_math_FastMatrix3(transformation._00 * m1._00 + transformation._10 * m1._01 + transformation._20 * m1._02,transformation._00 * m1._10 + transformation._10 * m1._11 + transformation._20 * m1._12,transformation._00 * m1._20 + transformation._10 * m1._21 + transformation._20 * m1._22,transformation._01 * m1._00 + transformation._11 * m1._01 + transformation._21 * m1._02,transformation._01 * m1._10 + transformation._11 * m1._11 + transformation._21 * m1._12,transformation._01 * m1._20 + transformation._11 * m1._21 + transformation._21 * m1._22,transformation._02 * m1._00 + transformation._12 * m1._01 + transformation._22 * m1._02,transformation._02 * m1._10 + transformation._12 * m1._11 + transformation._22 * m1._12,transformation._02 * m1._20 + transformation._12 * m1._21 + transformation._22 * m1._22);
		break;
	case 3:
		var m2;
		var alpha2 = Math.PI * 3 / 2;
		m2 = new kha_math_FastMatrix3(Math.cos(alpha2),-Math.sin(alpha2),0,Math.sin(alpha2),Math.cos(alpha2),0,0,0,1);
		transformation = new kha_math_FastMatrix3(transformation._00 * m2._00 + transformation._10 * m2._01 + transformation._20 * m2._02,transformation._00 * m2._10 + transformation._10 * m2._11 + transformation._20 * m2._12,transformation._00 * m2._20 + transformation._10 * m2._21 + transformation._20 * m2._22,transformation._01 * m2._00 + transformation._11 * m2._01 + transformation._21 * m2._02,transformation._01 * m2._10 + transformation._11 * m2._11 + transformation._21 * m2._12,transformation._01 * m2._20 + transformation._11 * m2._21 + transformation._21 * m2._22,transformation._02 * m2._00 + transformation._12 * m2._01 + transformation._22 * m2._02,transformation._02 * m2._10 + transformation._12 * m2._11 + transformation._22 * m2._12,transformation._02 * m2._20 + transformation._12 * m2._21 + transformation._22 * m2._22);
		break;
	}
	return transformation;
};
var kha_TimeTask = function() {
};
$hxClasses["kha.TimeTask"] = kha_TimeTask;
kha_TimeTask.__name__ = ["kha","TimeTask"];
kha_TimeTask.prototype = {
	__class__: kha_TimeTask
};
var kha_FrameTask = function(task,priority,id) {
	this.task = task;
	this.priority = priority;
	this.id = id;
	this.active = true;
	this.paused = false;
};
$hxClasses["kha.FrameTask"] = kha_FrameTask;
kha_FrameTask.__name__ = ["kha","FrameTask"];
kha_FrameTask.prototype = {
	__class__: kha_FrameTask
};
var kha_Scheduler = function() { };
$hxClasses["kha.Scheduler"] = kha_Scheduler;
kha_Scheduler.__name__ = ["kha","Scheduler"];
kha_Scheduler.init = function() {
	kha_Scheduler.deltas = [];
	var _g1 = 0;
	var _g = kha_Scheduler.DIF_COUNT;
	while(_g1 < _g) {
		var i = _g1++;
		kha_Scheduler.deltas[i] = 0;
	}
	kha_Scheduler.stopped = true;
	kha_Scheduler.frame_tasks_sorted = true;
	kha_Scheduler.current = kha_Scheduler.realTime();
	kha_Scheduler.lastTime = kha_Scheduler.realTime();
	kha_Scheduler.currentFrameTaskId = 0;
	kha_Scheduler.currentTimeTaskId = 0;
	kha_Scheduler.currentGroupId = 0;
	kha_Scheduler.timeTasks = [];
	kha_Scheduler.frameTasks = [];
	kha_Scheduler.toDeleteTime = [];
	kha_Scheduler.toDeleteFrame = [];
	kha_Configuration.schedulerInitialized();
};
kha_Scheduler.start = function(restartTimers) {
	if(restartTimers == null) restartTimers = false;
	kha_Scheduler.vsync = kha_Sys.vsynced();
	var hz = kha_Sys.refreshRate();
	if(hz >= 57 && hz <= 63) hz = 60;
	kha_Scheduler.onedifhz = 1.0 / hz;
	kha_Scheduler.stopped = false;
	kha_Scheduler.resetTime();
	kha_Scheduler.lastTime = kha_Scheduler.realTime();
	var _g1 = 0;
	var _g = kha_Scheduler.DIF_COUNT;
	while(_g1 < _g) {
		var i = _g1++;
		kha_Scheduler.deltas[i] = 0;
	}
	if(restartTimers) {
		var _g2 = 0;
		var _g11 = kha_Scheduler.timeTasks;
		while(_g2 < _g11.length) {
			var timeTask = _g11[_g2];
			++_g2;
			timeTask.paused = false;
		}
		var _g3 = 0;
		var _g12 = kha_Scheduler.frameTasks;
		while(_g3 < _g12.length) {
			var frameTask = _g12[_g3];
			++_g3;
			frameTask.paused = false;
		}
	}
};
kha_Scheduler.stop = function() {
	kha_Scheduler.stopped = true;
};
kha_Scheduler.isStopped = function() {
	return kha_Scheduler.stopped;
};
kha_Scheduler.back = function(time) {
	kha_Scheduler.lastTime = time;
	var _g = 0;
	var _g1 = kha_Scheduler.timeTasks;
	while(_g < _g1.length) {
		var timeTask = _g1[_g];
		++_g;
		if(timeTask.start >= time) timeTask.next = timeTask.start; else {
			timeTask.next = timeTask.start;
			while(timeTask.next < time) timeTask.next += timeTask.period;
		}
	}
};
kha_Scheduler.executeFrame = function() {
	kha_Sys.get_mouse().update();
	var now = kha_Scheduler.realTime();
	var delta = now - kha_Scheduler.lastNow;
	kha_Scheduler.lastNow = now;
	var frameEnd = kha_Scheduler.current;
	if(delta < 0) return;
	if(delta > kha_Scheduler.maxframetime) {
		delta = kha_Scheduler.maxframetime;
		frameEnd += delta;
	} else if(kha_Scheduler.vsync) {
		var realdif = kha_Scheduler.onedifhz;
		while(realdif < delta - kha_Scheduler.onedifhz) realdif += kha_Scheduler.onedifhz;
		delta = realdif;
		var _g1 = 0;
		var _g = kha_Scheduler.DIF_COUNT - 2;
		while(_g1 < _g) {
			var i = _g1++;
			delta += kha_Scheduler.deltas[i];
			kha_Scheduler.deltas[i] = kha_Scheduler.deltas[i + 1];
		}
		delta += kha_Scheduler.deltas[kha_Scheduler.DIF_COUNT - 2];
		delta /= kha_Scheduler.DIF_COUNT;
		kha_Scheduler.deltas[kha_Scheduler.DIF_COUNT - 2] = realdif;
		frameEnd += delta;
	} else {
		var _g11 = 0;
		var _g2 = kha_Scheduler.DIF_COUNT - 1;
		while(_g11 < _g2) {
			var i1 = _g11++;
			kha_Scheduler.deltas[i1] = kha_Scheduler.deltas[i1 + 1];
		}
		kha_Scheduler.deltas[kha_Scheduler.DIF_COUNT - 1] = delta;
		var next = 0;
		var _g12 = 0;
		var _g3 = kha_Scheduler.DIF_COUNT;
		while(_g12 < _g3) {
			var i2 = _g12++;
			next += kha_Scheduler.deltas[i2];
		}
		next /= kha_Scheduler.DIF_COUNT;
		frameEnd += next;
	}
	kha_Scheduler.lastTime = frameEnd;
	if(!kha_Scheduler.stopped) kha_Scheduler.current = frameEnd;
	var _g4 = 0;
	var _g13 = kha_Scheduler.timeTasks;
	while(_g4 < _g13.length) {
		var t = _g13[_g4];
		++_g4;
		if(kha_Scheduler.stopped || t.paused) t.next += delta; else if(t.next <= frameEnd) {
			t.next += t.period;
			HxOverrides.remove(kha_Scheduler.timeTasks,t);
			if(t.active && t.task()) {
				if(t.period > 0 && (t.duration == 0 || t.duration >= t.start + t.next)) kha_Scheduler.insertSorted(kha_Scheduler.timeTasks,t);
			} else t.active = false;
		}
	}
	var _g5 = 0;
	var _g14 = kha_Scheduler.timeTasks;
	while(_g5 < _g14.length) {
		var timeTask = _g14[_g5];
		++_g5;
		if(!timeTask.active) kha_Scheduler.toDeleteTime.push(timeTask);
	}
	while(kha_Scheduler.toDeleteTime.length > 0) {
		var x = kha_Scheduler.toDeleteTime.pop();
		HxOverrides.remove(kha_Scheduler.timeTasks,x);
	}
	kha_Scheduler.sortFrameTasks();
	var _g6 = 0;
	var _g15 = kha_Scheduler.frameTasks;
	while(_g6 < _g15.length) {
		var frameTask = _g15[_g6];
		++_g6;
		if(!kha_Scheduler.stopped && frameTask.paused) {
			if(!frameTask.task()) frameTask.active = false;
		}
	}
	var _g7 = 0;
	var _g16 = kha_Scheduler.frameTasks;
	while(_g7 < _g16.length) {
		var frameTask1 = _g16[_g7];
		++_g7;
		if(!frameTask1.active) kha_Scheduler.toDeleteFrame.push(frameTask1);
	}
	while(kha_Scheduler.toDeleteFrame.length > 0) {
		var x1 = kha_Scheduler.toDeleteFrame.pop();
		HxOverrides.remove(kha_Scheduler.frameTasks,x1);
	}
};
kha_Scheduler.time = function() {
	return kha_Scheduler.current;
};
kha_Scheduler.realTime = function() {
	return kha_Sys.getTime() - kha_Scheduler.startTime;
};
kha_Scheduler.resetTime = function() {
	var now = kha_Sys.getTime();
	kha_Scheduler.lastNow = 0;
	var dif = now - kha_Scheduler.startTime;
	kha_Scheduler.startTime = now;
	var _g = 0;
	var _g1 = kha_Scheduler.timeTasks;
	while(_g < _g1.length) {
		var timeTask = _g1[_g];
		++_g;
		timeTask.start -= dif;
		timeTask.next -= dif;
	}
	var _g11 = 0;
	var _g2 = kha_Scheduler.DIF_COUNT;
	while(_g11 < _g2) {
		var i = _g11++;
		kha_Scheduler.deltas[i] = 0;
	}
	kha_Scheduler.current = 0;
	kha_Scheduler.lastTime = 0;
};
kha_Scheduler.addBreakableFrameTask = function(task,priority) {
	kha_Scheduler.frameTasks.push(new kha_FrameTask(task,priority,++kha_Scheduler.currentFrameTaskId));
	kha_Scheduler.frame_tasks_sorted = false;
	return kha_Scheduler.currentFrameTaskId;
};
kha_Scheduler.addFrameTask = function(task,priority) {
	return kha_Scheduler.addBreakableFrameTask(function() {
		task();
		return true;
	},priority);
};
kha_Scheduler.pauseFrameTask = function(id,paused) {
	var _g = 0;
	var _g1 = kha_Scheduler.frameTasks;
	while(_g < _g1.length) {
		var frameTask = _g1[_g];
		++_g;
		if(frameTask.id == id) {
			frameTask.paused = paused;
			break;
		}
	}
};
kha_Scheduler.removeFrameTask = function(id) {
	var _g = 0;
	var _g1 = kha_Scheduler.frameTasks;
	while(_g < _g1.length) {
		var frameTask = _g1[_g];
		++_g;
		if(frameTask.id == id) {
			frameTask.active = false;
			HxOverrides.remove(kha_Scheduler.frameTasks,frameTask);
			break;
		}
	}
};
kha_Scheduler.generateGroupId = function() {
	return ++kha_Scheduler.currentGroupId;
};
kha_Scheduler.addBreakableTimeTaskToGroup = function(groupId,task,start,period,duration) {
	if(duration == null) duration = 0;
	if(period == null) period = 0;
	var t = new kha_TimeTask();
	t.active = true;
	t.task = task;
	t.id = ++kha_Scheduler.currentTimeTaskId;
	t.groupId = groupId;
	t.start = kha_Scheduler.current + start;
	t.period = 0;
	if(period != 0) t.period = period;
	t.duration = 0;
	if(duration != 0) t.duration = t.start + duration;
	t.next = t.start;
	kha_Scheduler.insertSorted(kha_Scheduler.timeTasks,t);
	return t.id;
};
kha_Scheduler.addTimeTaskToGroup = function(groupId,task,start,period,duration) {
	if(duration == null) duration = 0;
	if(period == null) period = 0;
	return kha_Scheduler.addBreakableTimeTaskToGroup(groupId,function() {
		task();
		return true;
	},start,period,duration);
};
kha_Scheduler.addBreakableTimeTask = function(task,start,period,duration) {
	if(duration == null) duration = 0;
	if(period == null) period = 0;
	return kha_Scheduler.addBreakableTimeTaskToGroup(0,task,start,period,duration);
};
kha_Scheduler.addTimeTask = function(task,start,period,duration) {
	if(duration == null) duration = 0;
	if(period == null) period = 0;
	return kha_Scheduler.addTimeTaskToGroup(0,task,start,period,duration);
};
kha_Scheduler.getTimeTask = function(id) {
	var _g = 0;
	var _g1 = kha_Scheduler.timeTasks;
	while(_g < _g1.length) {
		var timeTask = _g1[_g];
		++_g;
		if(timeTask.id == id) return timeTask;
	}
	return null;
};
kha_Scheduler.pauseTimeTask = function(id,paused) {
	var timeTask = kha_Scheduler.getTimeTask(id);
	if(timeTask != null) timeTask.paused = paused;
};
kha_Scheduler.pauseTimeTasks = function(groupId,paused) {
	var _g = 0;
	var _g1 = kha_Scheduler.timeTasks;
	while(_g < _g1.length) {
		var timeTask = _g1[_g];
		++_g;
		if(timeTask.groupId == groupId) timeTask.paused = paused;
	}
};
kha_Scheduler.removeTimeTask = function(id) {
	var timeTask = kha_Scheduler.getTimeTask(id);
	if(timeTask != null) {
		timeTask.active = false;
		HxOverrides.remove(kha_Scheduler.timeTasks,timeTask);
	}
};
kha_Scheduler.removeTimeTasks = function(groupId) {
	var _g = 0;
	var _g1 = kha_Scheduler.timeTasks;
	while(_g < _g1.length) {
		var timeTask = _g1[_g];
		++_g;
		if(timeTask.groupId == groupId) {
			timeTask.active = true;
			kha_Scheduler.toDeleteTime.push(timeTask);
		}
	}
	while(kha_Scheduler.toDeleteTime.length > 0) {
		var x = kha_Scheduler.toDeleteTime.pop();
		HxOverrides.remove(kha_Scheduler.timeTasks,x);
	}
};
kha_Scheduler.numTasksInSchedule = function() {
	return kha_Scheduler.timeTasks.length + kha_Scheduler.frameTasks.length;
};
kha_Scheduler.insertSorted = function(list,task) {
	var _g1 = 0;
	var _g = list.length;
	while(_g1 < _g) {
		var i = _g1++;
		if(list[i].next > task.next) {
			list.splice(i,0,task);
			return;
		}
	}
	list.push(task);
};
kha_Scheduler.sortFrameTasks = function() {
	if(kha_Scheduler.frame_tasks_sorted) return;
	kha_Scheduler.frameTasks.sort(function(a,b) {
		if(a.priority > b.priority) return 1; else if(a.priority < b.priority) return -1; else return 0;
	});
	kha_Scheduler.frame_tasks_sorted = true;
};
var kha_Score = function(name,score) {
	this.name = name;
	this.score = score;
};
$hxClasses["kha.Score"] = kha_Score;
kha_Score.__name__ = ["kha","Score"];
kha_Score.prototype = {
	getName: function() {
		return this.name;
	}
	,getScore: function() {
		return this.score;
	}
	,increase: function(amount) {
		this.score += amount;
	}
	,__class__: kha_Score
};
var kha_ScreenCanvas = function() {
};
$hxClasses["kha.ScreenCanvas"] = kha_ScreenCanvas;
kha_ScreenCanvas.__name__ = ["kha","ScreenCanvas"];
kha_ScreenCanvas.__interfaces__ = [kha_Canvas];
kha_ScreenCanvas.get_the = function() {
	if(kha_ScreenCanvas.instance == null) kha_ScreenCanvas.instance = new kha_ScreenCanvas();
	return kha_ScreenCanvas.instance;
};
kha_ScreenCanvas.prototype = {
	get_width: function() {
		return kha_Sys.get_pixelWidth();
	}
	,get_height: function() {
		return kha_Sys.get_pixelHeight();
	}
	,get_g1: function() {
		return null;
	}
	,get_g2: function() {
		return null;
	}
	,get_g4: function() {
		return null;
	}
	,__class__: kha_ScreenCanvas
};
var kha_ScreenRotation = $hxClasses["kha.ScreenRotation"] = { __ename__ : ["kha","ScreenRotation"], __constructs__ : ["RotationNone","Rotation90","Rotation180","Rotation270"] };
kha_ScreenRotation.RotationNone = ["RotationNone",0];
kha_ScreenRotation.RotationNone.toString = $estr;
kha_ScreenRotation.RotationNone.__enum__ = kha_ScreenRotation;
kha_ScreenRotation.Rotation90 = ["Rotation90",1];
kha_ScreenRotation.Rotation90.toString = $estr;
kha_ScreenRotation.Rotation90.__enum__ = kha_ScreenRotation;
kha_ScreenRotation.Rotation180 = ["Rotation180",2];
kha_ScreenRotation.Rotation180.toString = $estr;
kha_ScreenRotation.Rotation180.__enum__ = kha_ScreenRotation;
kha_ScreenRotation.Rotation270 = ["Rotation270",3];
kha_ScreenRotation.Rotation270.toString = $estr;
kha_ScreenRotation.Rotation270.__enum__ = kha_ScreenRotation;
var kha_Sound = function() {
};
$hxClasses["kha.Sound"] = kha_Sound;
kha_Sound.__name__ = ["kha","Sound"];
kha_Sound.__interfaces__ = [kha_Resource];
kha_Sound.prototype = {
	unload: function() {
	}
	,__class__: kha_Sound
};
var kha_SoundChannel = function() {
};
$hxClasses["kha.SoundChannel"] = kha_SoundChannel;
kha_SoundChannel.__name__ = ["kha","SoundChannel"];
kha_SoundChannel.prototype = {
	play: function() {
		this.wasStopped = false;
	}
	,pause: function() {
	}
	,stop: function() {
		this.wasStopped = true;
	}
	,getLength: function() {
		return 0;
	}
	,getCurrentPos: function() {
		return 0;
	}
	,getVolume: function() {
		return 1;
	}
	,setVolume: function(volume) {
	}
	,setPan: function(pan) {
	}
	,getPan: function() {
		return 0;
	}
	,isFinished: function() {
		return this.getCurrentPos() >= this.getLength() || this.wasStopped;
	}
	,__class__: kha_SoundChannel
};
var kha_GamepadStates = function() {
	this.axes = [];
	this.buttons = [];
};
$hxClasses["kha.GamepadStates"] = kha_GamepadStates;
kha_GamepadStates.__name__ = ["kha","GamepadStates"];
kha_GamepadStates.prototype = {
	__class__: kha_GamepadStates
};
var kha_Starter = function(backbufferFormat) {
	haxe_Log.trace = js_Boot.__trace;
	kha_Starter.keyboard = new kha_input_Keyboard();
	kha_Starter.mouse = new kha_input_Mouse(this);
	kha_Starter.surface = new kha_input_Surface();
	kha_Starter.gamepads = [];
	kha_Starter.gamepadStates = [];
	var _g1 = 0;
	var _g = kha_Starter.maxGamepads;
	while(_g1 < _g) {
		var i = _g1++;
		kha_Starter.gamepads[i] = new kha_input_Gamepad(i);
		kha_Starter.gamepadStates[i] = new kha_GamepadStates();
	}
	kha_Starter.pressedKeys = [];
	var _g2 = 0;
	while(_g2 < 256) {
		var i1 = _g2++;
		kha_Starter.pressedKeys.push(false);
	}
	var _g3 = 0;
	while(_g3 < 256) {
		var i2 = _g3++;
		kha_Starter.pressedKeys.push(null);
	}
	kha_Starter.buttonspressed = [];
	var _g4 = 0;
	while(_g4 < 10) {
		var i3 = _g4++;
		kha_Starter.buttonspressed.push(false);
	}
	kha_CanvasImage.init();
	kha_Loader.init(new kha_js_Loader());
	kha_Sys.initPerformanceTimer();
	kha_Scheduler.init();
	this.canvas = window.document.getElementById("khanvas");
	kha_EnvironmentVariables.instance = new kha_js_EnvironmentVariables();
};
$hxClasses["kha.Starter"] = kha_Starter;
kha_Starter.__name__ = ["kha","Starter"];
kha_Starter.checkGamepadButton = function(pad,num,button) {
	if(kha_Starter.buttonspressed[num]) {
		if(pad.buttons[num] < 0.5) {
			kha_Game.the.buttonUp(button);
			kha_Starter.buttonspressed[num] = false;
		}
	} else if(pad.buttons[num] > 0.5) {
		kha_Game.the.buttonDown(button);
		kha_Starter.buttonspressed[num] = true;
	}
};
kha_Starter.checkGamepad = function(pad) {
	var _g1 = 0;
	var _g = pad.axes.length;
	while(_g1 < _g) {
		var i = _g1++;
		if(pad.axes[i] != null) {
			if(kha_Starter.gamepadStates[pad.index].axes[i] != pad.axes[i]) {
				kha_Starter.gamepadStates[pad.index].axes[i] = pad.axes[i];
				kha_Starter.gamepads[pad.index].sendAxisEvent(i,pad.axes[i]);
			}
		}
	}
	var _g11 = 0;
	var _g2 = pad.buttons.length;
	while(_g11 < _g2) {
		var i1 = _g11++;
		if(pad.buttons[i1] != null) {
			if(kha_Starter.gamepadStates[pad.index].buttons[i1] != pad.buttons[i1].value) {
				kha_Starter.gamepadStates[pad.index].buttons[i1] = pad.buttons[i1].value;
				kha_Starter.gamepads[pad.index].sendButtonEvent(i1,pad.buttons[i1].value);
			}
		}
	}
};
kha_Starter.unload = function(_) {
	kha_Game.the.onPause();
	kha_Game.the.onBackground();
	kha_Game.the.onShutdown();
};
kha_Starter.setMouseXY = function(event) {
	var rect = kha_Sys.khanvas.getBoundingClientRect();
	var borderWidth = kha_Sys.khanvas.clientLeft;
	var borderHeight = kha_Sys.khanvas.clientTop;
	kha_Starter.mouseX = (event.clientX - rect.left - borderWidth) * kha_Sys.khanvas.width / (rect.width - 2 * borderWidth) | 0;
	kha_Starter.mouseY = (event.clientY - rect.top - borderHeight) * kha_Sys.khanvas.height / (rect.height - 2 * borderHeight) | 0;
};
kha_Starter.mouseDown = function(event) {
	window.document.addEventListener("mouseup",kha_Starter.mouseUp);
	kha_Starter.setMouseXY(event);
	if(event.button == 0) {
		if(event.ctrlKey) {
			kha_Starter.leftMouseCtrlDown = true;
			kha_Game.the.rightMouseDown(kha_Starter.mouseX,kha_Starter.mouseY);
			kha_Starter.mouse.sendDownEvent(1,kha_Starter.mouseX,kha_Starter.mouseY);
		} else {
			kha_Starter.leftMouseCtrlDown = false;
			kha_Game.the.mouseDown(kha_Starter.mouseX,kha_Starter.mouseY);
			kha_Starter.mouse.sendDownEvent(0,kha_Starter.mouseX,kha_Starter.mouseY);
		}
	} else {
		kha_Game.the.rightMouseDown(kha_Starter.mouseX,kha_Starter.mouseY);
		kha_Starter.mouse.sendDownEvent(1,kha_Starter.mouseX,kha_Starter.mouseY);
	}
};
kha_Starter.mouseUp = function(event) {
	window.document.removeEventListener("mouseup",kha_Starter.mouseUp);
	kha_Starter.setMouseXY(event);
	if(event.button == 0) {
		if(kha_Starter.leftMouseCtrlDown) {
			kha_Game.the.rightMouseUp(kha_Starter.mouseX,kha_Starter.mouseY);
			kha_Starter.mouse.sendUpEvent(1,kha_Starter.mouseX,kha_Starter.mouseY);
		} else {
			kha_Game.the.mouseUp(kha_Starter.mouseX,kha_Starter.mouseY);
			kha_Starter.mouse.sendUpEvent(0,kha_Starter.mouseX,kha_Starter.mouseY);
		}
		kha_Starter.leftMouseCtrlDown = false;
	} else {
		kha_Game.the.rightMouseUp(kha_Starter.mouseX,kha_Starter.mouseY);
		kha_Starter.mouse.sendUpEvent(1,kha_Starter.mouseX,kha_Starter.mouseY);
	}
};
kha_Starter.mouseMove = function(event) {
	var lastMouseX = kha_Starter.mouseX;
	var lastMouseY = kha_Starter.mouseY;
	kha_Starter.setMouseXY(event);
	var movementX = event.movementX || event.mozMovementX || event.webkitMovementX || kha_Starter.mouseX - lastMouseX;
	var movementY = event.movementY || event.mozMovementY || event.webkitMovementY || kha_Starter.mouseY - lastMouseY;
	kha_Game.the.mouseMove(kha_Starter.mouseX,kha_Starter.mouseY);
	kha_Starter.mouse.sendMoveEvent(kha_Starter.mouseX,kha_Starter.mouseY,movementX,movementY);
};
kha_Starter.setTouchXY = function(touch) {
	var rect = kha_Sys.khanvas.getBoundingClientRect();
	var borderWidth = kha_Sys.khanvas.clientLeft;
	var borderHeight = kha_Sys.khanvas.clientTop;
	kha_Starter.touchX = (touch.clientX - rect.left - borderWidth) * kha_Sys.khanvas.width / (rect.width - 2 * borderWidth) | 0;
	kha_Starter.touchY = (touch.clientY - rect.top - borderHeight) * kha_Sys.khanvas.height / (rect.height - 2 * borderHeight) | 0;
};
kha_Starter.touchDown = function(event) {
	var _g = 0;
	var _g1 = event.changedTouches;
	while(_g < _g1.length) {
		var touch = _g1[_g];
		++_g;
		kha_Starter.setTouchXY(touch);
		kha_Game.the.mouseDown(kha_Starter.touchX,kha_Starter.touchY);
		kha_Starter.mouse.sendDownEvent(0,kha_Starter.touchX,kha_Starter.touchY);
		kha_Starter.surface.sendTouchStartEvent(touch.identifier,kha_Starter.touchX,kha_Starter.touchY);
	}
};
kha_Starter.touchUp = function(event) {
	var _g = 0;
	var _g1 = event.changedTouches;
	while(_g < _g1.length) {
		var touch = _g1[_g];
		++_g;
		kha_Starter.setTouchXY(touch);
		kha_Game.the.mouseUp(kha_Starter.touchX,kha_Starter.touchY);
		kha_Starter.mouse.sendUpEvent(0,kha_Starter.touchX,kha_Starter.touchY);
		kha_Starter.surface.sendTouchEndEvent(touch.identifier,kha_Starter.touchX,kha_Starter.touchY);
	}
};
kha_Starter.touchMove = function(event) {
	var index = 0;
	var _g = 0;
	var _g1 = event.changedTouches;
	while(_g < _g1.length) {
		var touch = _g1[_g];
		++_g;
		kha_Starter.setTouchXY(touch);
		if(index == 0) {
			var movementX = kha_Starter.touchX - kha_Starter.lastFirstTouchX;
			var movementY = kha_Starter.touchY - kha_Starter.lastFirstTouchY;
			kha_Starter.lastFirstTouchX = kha_Starter.touchX;
			kha_Starter.lastFirstTouchY = kha_Starter.touchY;
			kha_Game.the.mouseMove(kha_Starter.touchX,kha_Starter.touchY);
			kha_Starter.mouse.sendMoveEvent(kha_Starter.touchX,kha_Starter.touchY,movementX,movementY);
		}
		kha_Starter.surface.sendMoveEvent(touch.identifier,kha_Starter.touchX,kha_Starter.touchY);
		index++;
	}
};
kha_Starter.keycodeToChar = function(key,keycode,shift) {
	if(key != null) {
		if(key.length == 1) return key;
		switch(key) {
		case "Add":
			return "+";
		case "Subtract":
			return "-";
		case "Multiply":
			return "*";
		case "Divide":
			return "/";
		}
	}
	switch(keycode) {
	case 187:
		if(shift) return "*"; else return "+";
		break;
	case 188:
		if(shift) return ";"; else return ",";
		break;
	case 189:
		if(shift) return "_"; else return "-";
		break;
	case 190:
		if(shift) return ":"; else return ".";
		break;
	case 191:
		if(shift) return "'"; else return "#";
		break;
	case 226:
		if(shift) return ">"; else return "<";
		break;
	case 106:
		return "*";
	case 107:
		return "+";
	case 109:
		return "-";
	case 111:
		return "/";
	case 49:
		if(shift) return "!"; else return "1";
		break;
	case 50:
		if(shift) return "\""; else return "2";
		break;
	case 51:
		if(shift) return "§"; else return "3";
		break;
	case 52:
		if(shift) return "$"; else return "4";
		break;
	case 53:
		if(shift) return "%"; else return "5";
		break;
	case 54:
		if(shift) return "&"; else return "6";
		break;
	case 55:
		if(shift) return "/"; else return "7";
		break;
	case 56:
		if(shift) return "("; else return "8";
		break;
	case 57:
		if(shift) return ")"; else return "9";
		break;
	case 48:
		if(shift) return "="; else return "0";
		break;
	case 219:
		if(shift) return "?"; else return "ß";
		break;
	case 212:
		if(shift) return "`"; else return "´";
		break;
	}
	if(keycode >= 96 && keycode <= 105) return String.fromCharCode(-48 + keycode);
	if(keycode >= 65 && keycode <= 90) {
		if(shift) return String.fromCharCode(keycode); else return String.fromCharCode(keycode - 65 + 97);
	}
	return String.fromCharCode(keycode);
};
kha_Starter.keyDown = function(event) {
	event.stopPropagation();
	if(kha_Starter.pressedKeys[event.keyCode]) {
		event.preventDefault();
		return;
	}
	kha_Starter.pressedKeys[event.keyCode] = true;
	var _g = event.keyCode;
	switch(_g) {
	case 8:
		kha_Game.the.keyDown(kha_Key.BACKSPACE,"");
		kha_Starter.keyboard.sendDownEvent(kha_Key.BACKSPACE,"");
		event.preventDefault();
		break;
	case 9:
		kha_Game.the.keyDown(kha_Key.TAB,"");
		kha_Starter.keyboard.sendDownEvent(kha_Key.TAB,"");
		event.preventDefault();
		break;
	case 13:
		kha_Game.the.keyDown(kha_Key.ENTER,"");
		kha_Starter.keyboard.sendDownEvent(kha_Key.ENTER,"");
		event.preventDefault();
		break;
	case 16:
		kha_Game.the.keyDown(kha_Key.SHIFT,"");
		kha_Starter.keyboard.sendDownEvent(kha_Key.SHIFT,"");
		event.preventDefault();
		break;
	case 17:
		kha_Game.the.keyDown(kha_Key.CTRL,"");
		kha_Starter.keyboard.sendDownEvent(kha_Key.CTRL,"");
		event.preventDefault();
		break;
	case 18:
		kha_Game.the.keyDown(kha_Key.ALT,"");
		kha_Starter.keyboard.sendDownEvent(kha_Key.ALT,"");
		event.preventDefault();
		break;
	case 27:
		kha_Game.the.keyDown(kha_Key.ESC,"");
		kha_Starter.keyboard.sendDownEvent(kha_Key.ESC,"");
		event.preventDefault();
		break;
	case 32:
		kha_Game.the.keyDown(kha_Key.CHAR," ");
		kha_Starter.keyboard.sendDownEvent(kha_Key.CHAR," ");
		event.preventDefault();
		break;
	case 46:
		kha_Game.the.keyDown(kha_Key.DEL,"");
		kha_Starter.keyboard.sendDownEvent(kha_Key.DEL,"");
		event.preventDefault();
		break;
	case 38:
		kha_Game.the.buttonDown(kha_Button.UP);
		kha_Starter.keyboard.sendDownEvent(kha_Key.UP,"");
		event.preventDefault();
		break;
	case 40:
		kha_Game.the.buttonDown(kha_Button.DOWN);
		kha_Starter.keyboard.sendDownEvent(kha_Key.DOWN,"");
		event.preventDefault();
		break;
	case 37:
		kha_Game.the.buttonDown(kha_Button.LEFT);
		kha_Starter.keyboard.sendDownEvent(kha_Key.LEFT,"");
		event.preventDefault();
		break;
	case 39:
		kha_Game.the.buttonDown(kha_Button.RIGHT);
		kha_Starter.keyboard.sendDownEvent(kha_Key.RIGHT,"");
		event.preventDefault();
		break;
	default:
		if(!event.altKey) {
			var $char = kha_Starter.keycodeToChar(event.key,event.keyCode,event.shiftKey);
			kha_Game.the.keyDown(kha_Key.CHAR,$char);
			kha_Starter.keyboard.sendDownEvent(kha_Key.CHAR,$char);
		}
	}
};
kha_Starter.keyUp = function(event) {
	event.preventDefault();
	event.stopPropagation();
	kha_Starter.pressedKeys[event.keyCode] = false;
	var _g = event.keyCode;
	switch(_g) {
	case 8:
		kha_Game.the.keyUp(kha_Key.BACKSPACE,"");
		kha_Starter.keyboard.sendUpEvent(kha_Key.BACKSPACE,"");
		break;
	case 9:
		kha_Game.the.keyUp(kha_Key.TAB,"");
		kha_Starter.keyboard.sendUpEvent(kha_Key.TAB,"");
		break;
	case 13:
		kha_Game.the.keyUp(kha_Key.ENTER,"");
		kha_Starter.keyboard.sendUpEvent(kha_Key.ENTER,"");
		break;
	case 16:
		kha_Game.the.keyUp(kha_Key.SHIFT,"");
		kha_Starter.keyboard.sendUpEvent(kha_Key.SHIFT,"");
		break;
	case 17:
		kha_Game.the.keyUp(kha_Key.CTRL,"");
		kha_Starter.keyboard.sendUpEvent(kha_Key.CTRL,"");
		break;
	case 18:
		kha_Game.the.keyUp(kha_Key.ALT,"");
		kha_Starter.keyboard.sendUpEvent(kha_Key.ALT,"");
		break;
	case 27:
		kha_Game.the.keyUp(kha_Key.ESC,"");
		kha_Starter.keyboard.sendUpEvent(kha_Key.ESC,"");
		break;
	case 32:
		kha_Game.the.keyUp(kha_Key.CHAR," ");
		kha_Starter.keyboard.sendUpEvent(kha_Key.CHAR," ");
		break;
	case 46:
		kha_Game.the.keyUp(kha_Key.DEL,"");
		kha_Starter.keyboard.sendUpEvent(kha_Key.DEL,"");
		break;
	case 38:
		kha_Game.the.buttonUp(kha_Button.UP);
		kha_Starter.keyboard.sendUpEvent(kha_Key.UP,"");
		break;
	case 40:
		kha_Game.the.buttonUp(kha_Button.DOWN);
		kha_Starter.keyboard.sendUpEvent(kha_Key.DOWN,"");
		break;
	case 37:
		kha_Game.the.buttonUp(kha_Button.LEFT);
		kha_Starter.keyboard.sendUpEvent(kha_Key.LEFT,"");
		break;
	case 39:
		kha_Game.the.buttonUp(kha_Button.RIGHT);
		kha_Starter.keyboard.sendUpEvent(kha_Key.RIGHT,"");
		break;
	default:
		if(!event.altKey) {
			var $char = kha_Starter.keycodeToChar(event.key,event.keyCode,event.shiftKey);
			kha_Game.the.keyUp(kha_Key.CHAR,$char);
			kha_Starter.keyboard.sendUpEvent(kha_Key.CHAR,$char);
		}
	}
};
kha_Starter.prototype = {
	start: function(game) {
		this.gameToStart = game;
		kha_Configuration.setScreen(new kha_EmptyScreen(kha__$Color_Color_$Impl_$.fromBytes(0,0,0)));
		kha_Loader.the.loadProject($bind(this,this.loadFinished));
	}
	,loadFinished: function() {
		var _g = this;
		kha_Loader.the.initProject();
		this.gameToStart.width = kha_Loader.the.width;
		this.gameToStart.height = kha_Loader.the.height;
		var gl = false;
		try {
			kha_Sys.gl = this.canvas.getContext("experimental-webgl",{ alpha : false, antialias : kha_Loader.the.antiAliasingSamples > 1});
			if(kha_Sys.gl != null) {
				kha_Sys.gl.pixelStorei(kha_Sys.gl.UNPACK_PREMULTIPLY_ALPHA_WEBGL,true);
				kha_Sys.gl.getExtension("OES_texture_float");
				gl = true;
			}
		} catch( e ) {
			if (e instanceof js__$Boot_HaxeError) e = e.val;
			haxe_Log.trace(e,{ fileName : "Starter.hx", lineNumber : 144, className : "kha.Starter", methodName : "loadFinished"});
		}
		kha_Sys.init(this.canvas);
		var widthTransform = this.canvas.width / kha_Loader.the.width;
		var heightTransform = this.canvas.height / kha_Loader.the.height;
		var transform = Math.min(widthTransform,heightTransform);
		if(gl) {
			var g4;
			if(gl) g4 = new kha_js_graphics4_Graphics(); else g4 = null;
			kha_Starter.frame = new kha_Framebuffer(null,null,g4);
			kha_Starter.frame.init(new kha_graphics2_Graphics1(kha_Starter.frame),new kha_js_graphics4_Graphics2(kha_Starter.frame),g4);
		} else {
			var g2 = new kha_js_CanvasGraphics(this.canvas.getContext("2d"),Math.round(kha_Loader.the.width * transform),Math.round(kha_Loader.the.height * transform));
			kha_Starter.frame = new kha_Framebuffer(null,g2,null);
			kha_Starter.frame.init(new kha_graphics2_Graphics1(kha_Starter.frame),g2,null);
		}
		if(kha_audio2_Audio._init()) {
			kha_Sys._hasWebAudio = true;
			kha_audio2_Audio1._init();
		} else {
			kha_Sys._hasWebAudio = false;
			kha_js_AudioElementAudio._compile();
			kha_audio2_Audio1 = kha_js_AudioElementAudio;
		}
		kha_Scheduler.start();
		var $window = window;
		var requestAnimationFrame = $window.requestAnimationFrame;
		if(requestAnimationFrame == null) requestAnimationFrame = $window.mozRequestAnimationFrame;
		if(requestAnimationFrame == null) requestAnimationFrame = $window.webkitRequestAnimationFrame;
		if(requestAnimationFrame == null) requestAnimationFrame = $window.msRequestAnimationFrame;
		var animate;
		var animate1 = null;
		animate1 = function(timestamp) {
			var window1 = window;
			if(requestAnimationFrame == null) window1.setTimeout(animate1,16.6666666666666679); else requestAnimationFrame(animate1);
			var sysGamepads = (navigator.getGamepads && navigator.getGamepads()) || (navigator.webkitGetGamepads && navigator.webkitGetGamepads());
			if(sysGamepads != null) {
				var _g1 = 0;
				var _g2 = sysGamepads.length;
				while(_g1 < _g2) {
					var i = _g1++;
					var pad = sysGamepads[i];
					if(pad != null) {
						kha_Starter.checkGamepadButton(pad,0,kha_Button.BUTTON_1);
						kha_Starter.checkGamepadButton(pad,1,kha_Button.BUTTON_2);
						kha_Starter.checkGamepadButton(pad,12,kha_Button.UP);
						kha_Starter.checkGamepadButton(pad,13,kha_Button.DOWN);
						kha_Starter.checkGamepadButton(pad,14,kha_Button.LEFT);
						kha_Starter.checkGamepadButton(pad,15,kha_Button.RIGHT);
						kha_Starter.checkGamepad(pad);
					}
				}
			}
			kha_Scheduler.executeFrame();
			if(_g.canvas.getContext) {
				var displayWidth = _g.canvas.clientWidth;
				var displayHeight = _g.canvas.clientHeight;
				if(_g.canvas.width != displayWidth || _g.canvas.height != displayHeight) {
					_g.canvas.width = displayWidth;
					_g.canvas.height = displayHeight;
				}
				kha_Configuration.theScreen.render(kha_Starter.frame);
				if(kha_Sys.gl != null) {
					kha_Sys.gl.clearColor(1,1,1,1);
					kha_Sys.gl.colorMask(false,false,false,true);
					kha_Sys.gl.clear(kha_Sys.gl.COLOR_BUFFER_BIT);
					kha_Sys.gl.colorMask(true,true,true,true);
				}
			}
		};
		animate = animate1;
		if(requestAnimationFrame == null) $window.setTimeout(animate,16.6666666666666679); else requestAnimationFrame(animate);
		if(this.canvas.getAttribute("tabindex") == null) this.canvas.setAttribute("tabindex","0");
		this.canvas.focus();
		this.canvas.oncontextmenu = function(event) {
			event.stopPropagation();
			event.preventDefault();
		};
		this.canvas.onmousedown = kha_Starter.mouseDown;
		this.canvas.onmousemove = kha_Starter.mouseMove;
		this.canvas.onkeydown = kha_Starter.keyDown;
		this.canvas.onkeyup = kha_Starter.keyUp;
		this.canvas.addEventListener("touchstart",kha_Starter.touchDown,false);
		this.canvas.addEventListener("touchend",kha_Starter.touchUp,false);
		this.canvas.addEventListener("touchmove",kha_Starter.touchMove,false);
		window.addEventListener("unload",kha_Starter.unload);
		kha_Configuration.setScreen(this.gameToStart);
		this.gameToStart.loadFinished();
	}
	,lockMouse: function() {
		if(this.canvas.requestPointerLock) this.canvas.requestPointerLock(); else if(this.canvas.mozRequestPointerLock) this.canvas.mozRequestPointerLock(); else if(this.canvas.webkitRequestPointerLock) this.canvas.webkitRequestPointerLock();
	}
	,unlockMouse: function() {
		if(document.exitPointerLock) document.exitPointerLock(); else if(document.mozExitPointerLock) document.mozExitPointerLock(); else if(document.webkitExitPointerLock) document.webkitExitPointerLock();
	}
	,canLockMouse: function() {
		return 'pointerLockElement' in document ||
        'mozPointerLockElement' in document ||
        'webkitPointerLockElement' in document;
	}
	,isMouseLocked: function() {
		return document.pointerLockElement === this.canvas ||
  			document.mozPointerLockElement === this.canvas ||
  			document.webkitPointerLockElement === this.canvas;
	}
	,notifyOfMouseLockChange: function(func,error) {
		window.document.addEventListener("pointerlockchange",func,false);
		window.document.addEventListener("mozpointerlockchange",func,false);
		window.document.addEventListener("webkitpointerlockchange",func,false);
		window.document.addEventListener("pointerlockerror",error,false);
		window.document.addEventListener("mozpointerlockerror",error,false);
		window.document.addEventListener("webkitpointerlockerror",error,false);
	}
	,removeFromMouseLockChange: function(func,error) {
		window.document.removeEventListener("pointerlockchange",func,false);
		window.document.removeEventListener("mozpointerlockchange",func,false);
		window.document.removeEventListener("webkitpointerlockchange",func,false);
		window.document.removeEventListener("pointerlockerror",error,false);
		window.document.removeEventListener("mozpointerlockerror",error,false);
		window.document.removeEventListener("webkitpointerlockerror",error,false);
	}
	,__class__: kha_Starter
};
var kha_StorageFile = function() { };
$hxClasses["kha.StorageFile"] = kha_StorageFile;
kha_StorageFile.__name__ = ["kha","StorageFile"];
kha_StorageFile.prototype = {
	read: function() {
		return null;
	}
	,write: function(data) {
	}
	,append: function(data) {
	}
	,canAppend: function() {
		return false;
	}
	,maxSize: function() {
		return -1;
	}
	,writeString: function(data) {
		var bytes = haxe_io_Bytes.ofString(data);
		this.write(new kha_Blob(bytes));
	}
	,appendString: function(data) {
		var bytes = haxe_io_Bytes.ofString(data);
		this.append(new kha_Blob(bytes));
	}
	,readString: function() {
		var blob = this.read();
		if(blob == null) return null; else return blob.toString();
	}
	,writeObject: function(object) {
		this.writeString(haxe_Serializer.run(object));
	}
	,readObject: function() {
		var s = this.readString();
		if(s == null) return null;
		try {
			return haxe_Unserializer.run(s);
		} catch( e ) {
			if (e instanceof js__$Boot_HaxeError) e = e.val;
			return null;
		}
	}
	,__class__: kha_StorageFile
};
var kha_Sys = function() { };
$hxClasses["kha.Sys"] = kha_Sys;
kha_Sys.__name__ = ["kha","Sys"];
kha_Sys.initPerformanceTimer = function() {
	if(window.performance != null) kha_Sys.performance = window.performance; else kha_Sys.performance = window.Date;
};
kha_Sys.init = function(canvas) {
	kha_Sys.khanvas = canvas;
	kha_Sys.theMouse = new kha_js_Mouse();
};
kha_Sys.getTime = function() {
	return kha_Sys.performance.now() / 1000;
};
kha_Sys.get_mouse = function() {
	return kha_Sys.theMouse;
};
kha_Sys.get_pixelWidth = function() {
	return kha_Sys.khanvas.width;
};
kha_Sys.get_pixelHeight = function() {
	return kha_Sys.khanvas.height;
};
kha_Sys.vsynced = function() {
	return true;
};
kha_Sys.refreshRate = function() {
	return 60;
};
kha_Sys.systemId = function() {
	return "HTML5";
};
kha_Sys.requestShutdown = function() {
	window.close();
};
var kha_Video = function() {
};
$hxClasses["kha.Video"] = kha_Video;
kha_Video.__name__ = ["kha","Video"];
kha_Video.__interfaces__ = [kha_Resource];
kha_Video.prototype = {
	width: function() {
		return 100;
	}
	,height: function() {
		return 100;
	}
	,play: function(loop) {
		if(loop == null) loop = false;
	}
	,pause: function() {
	}
	,stop: function() {
	}
	,getLength: function() {
		return 0;
	}
	,getCurrentPos: function() {
		return 0;
	}
	,getVolume: function() {
		return 1;
	}
	,setVolume: function(volume) {
	}
	,isFinished: function() {
		return this.getCurrentPos() >= this.getLength();
	}
	,unload: function() {
	}
	,__class__: kha_Video
};
var kha_WebGLImage = function(width,height,format,renderTarget) {
	this.myWidth = width;
	this.myHeight = height;
	this.format = format;
	this.renderTarget = renderTarget;
	this.image = null;
	this.video = null;
	if(renderTarget) this.createTexture();
};
$hxClasses["kha.WebGLImage"] = kha_WebGLImage;
kha_WebGLImage.__name__ = ["kha","WebGLImage"];
kha_WebGLImage.init = function() {
	var canvas = window.document.createElement("canvas");
	if(canvas != null) {
		kha_WebGLImage.context = canvas.getContext("2d");
		canvas.width = 2048;
		canvas.height = 2048;
		kha_WebGLImage.context.globalCompositeOperation = "copy";
	}
};
kha_WebGLImage.upperPowerOfTwo = function(v) {
	v--;
	v |= v >>> 1;
	v |= v >>> 2;
	v |= v >>> 4;
	v |= v >>> 8;
	v |= v >>> 16;
	v++;
	return v;
};
kha_WebGLImage.__super__ = kha_Image;
kha_WebGLImage.prototype = $extend(kha_Image.prototype,{
	get_g1: function() {
		if(this.graphics1 == null) this.graphics1 = new kha_graphics2_Graphics1(this);
		return this.graphics1;
	}
	,get_g2: function() {
		if(this.graphics2 == null) this.graphics2 = new kha_js_graphics4_Graphics2(this);
		return this.graphics2;
	}
	,get_g4: function() {
		if(this.graphics4 == null) this.graphics4 = new kha_js_graphics4_Graphics(this);
		return this.graphics4;
	}
	,get_width: function() {
		return this.myWidth;
	}
	,get_height: function() {
		return this.myHeight;
	}
	,get_realWidth: function() {
		return this.myWidth;
	}
	,get_realHeight: function() {
		return this.myHeight;
	}
	,isOpaque: function(x,y) {
		if(this.data == null) {
			if(kha_WebGLImage.context == null) return true; else this.createImageData();
		}
		return this.data.data[y * Std["int"](this.image.width) * 4 + x * 4 + 3] != 0;
	}
	,at: function(x,y) {
		if(this.data == null) {
			if(kha_WebGLImage.context == null) return kha__$Color_Color_$Impl_$.Black; else this.createImageData();
		}
		var value = this.data.data[y * Std["int"](this.image.width) * 4 + x * 4];
		return kha__$Color_Color_$Impl_$._new(value);
	}
	,createImageData: function() {
		kha_WebGLImage.context.strokeStyle = "rgba(0,0,0,0)";
		kha_WebGLImage.context.fillStyle = "rgba(0,0,0,0)";
		kha_WebGLImage.context.fillRect(0,0,this.image.width,this.image.height);
		kha_WebGLImage.context.drawImage(this.image,0,0,this.image.width,this.image.height,0,0,this.image.width,this.image.height);
		this.data = kha_WebGLImage.context.getImageData(0,0,this.image.width,this.image.height);
	}
	,createTexture: function() {
		if(kha_Sys.gl == null) return;
		this.texture = kha_Sys.gl.createTexture();
		kha_Sys.gl.bindTexture(kha_Sys.gl.TEXTURE_2D,this.texture);
		kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_MAG_FILTER,kha_Sys.gl.LINEAR);
		kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_MIN_FILTER,kha_Sys.gl.LINEAR);
		kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_WRAP_S,kha_Sys.gl.CLAMP_TO_EDGE);
		kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_WRAP_T,kha_Sys.gl.CLAMP_TO_EDGE);
		if(this.renderTarget) {
			this.frameBuffer = kha_Sys.gl.createFramebuffer();
			kha_Sys.gl.bindFramebuffer(kha_Sys.gl.FRAMEBUFFER,this.frameBuffer);
			kha_Sys.gl.texImage2D(kha_Sys.gl.TEXTURE_2D,0,kha_Sys.gl.RGBA,this.get_realWidth(),this.get_realHeight(),0,kha_Sys.gl.RGBA,this.format == kha_graphics4_TextureFormat.RGBA128?kha_Sys.gl.FLOAT:kha_Sys.gl.UNSIGNED_BYTE,null);
			kha_Sys.gl.framebufferTexture2D(kha_Sys.gl.FRAMEBUFFER,kha_Sys.gl.COLOR_ATTACHMENT0,kha_Sys.gl.TEXTURE_2D,this.texture,0);
			this.renderBuffer = kha_Sys.gl.createRenderbuffer();
			kha_Sys.gl.bindRenderbuffer(kha_Sys.gl.RENDERBUFFER,this.renderBuffer);
			kha_Sys.gl.renderbufferStorage(kha_Sys.gl.RENDERBUFFER,kha_Sys.gl.DEPTH_COMPONENT16,this.get_realWidth(),this.get_realHeight());
			kha_Sys.gl.framebufferRenderbuffer(kha_Sys.gl.FRAMEBUFFER,kha_Sys.gl.DEPTH_ATTACHMENT,kha_Sys.gl.RENDERBUFFER,this.renderBuffer);
			kha_Sys.gl.bindRenderbuffer(kha_Sys.gl.RENDERBUFFER,null);
			kha_Sys.gl.bindFramebuffer(kha_Sys.gl.FRAMEBUFFER,null);
		} else if(this.video != null) kha_Sys.gl.texImage2D(kha_Sys.gl.TEXTURE_2D,0,kha_Sys.gl.RGBA,kha_Sys.gl.RGBA,kha_Sys.gl.UNSIGNED_BYTE,this.video); else kha_Sys.gl.texImage2D(kha_Sys.gl.TEXTURE_2D,0,kha_Sys.gl.RGBA,kha_Sys.gl.RGBA,this.format == kha_graphics4_TextureFormat.RGBA128?kha_Sys.gl.FLOAT:kha_Sys.gl.UNSIGNED_BYTE,this.image);
		kha_Sys.gl.bindTexture(kha_Sys.gl.TEXTURE_2D,null);
	}
	,set: function(stage) {
		kha_Sys.gl.activeTexture(kha_Sys.gl.TEXTURE0 + stage);
		kha_Sys.gl.bindTexture(kha_Sys.gl.TEXTURE_2D,this.texture);
		if(this.video != null) kha_Sys.gl.texImage2D(kha_Sys.gl.TEXTURE_2D,0,kha_Sys.gl.RGBA,kha_Sys.gl.RGBA,kha_Sys.gl.UNSIGNED_BYTE,this.video);
	}
	,lock: function(level) {
		if(level == null) level = 0;
		this.bytes = haxe_io_Bytes.alloc(this.format == kha_graphics4_TextureFormat.RGBA32?4 * this.get_width() * this.get_height():this.format == kha_graphics4_TextureFormat.RGBA128?16 * this.get_width() * this.get_height():this.get_width() * this.get_height());
		return this.bytes;
	}
	,unlock: function() {
		if(kha_Sys.gl != null) {
			this.texture = kha_Sys.gl.createTexture();
			kha_Sys.gl.bindTexture(kha_Sys.gl.TEXTURE_2D,this.texture);
			kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_MAG_FILTER,kha_Sys.gl.LINEAR);
			kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_MIN_FILTER,kha_Sys.gl.LINEAR);
			kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_WRAP_S,kha_Sys.gl.CLAMP_TO_EDGE);
			kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_WRAP_T,kha_Sys.gl.CLAMP_TO_EDGE);
			var _g = this.format;
			switch(_g[1]) {
			case 1:
				kha_Sys.gl.texImage2D(kha_Sys.gl.TEXTURE_2D,0,kha_Sys.gl.LUMINANCE,this.get_width(),this.get_height(),0,kha_Sys.gl.LUMINANCE,kha_Sys.gl.UNSIGNED_BYTE,new Uint8Array(this.bytes.b.bufferValue));
				if(kha_Sys.gl.getError() == 1282) {
					var rgbaBytes = haxe_io_Bytes.alloc(this.get_width() * this.get_height() * 4);
					var _g2 = 0;
					var _g1 = this.get_height();
					while(_g2 < _g1) {
						var y = _g2++;
						var _g4 = 0;
						var _g3 = this.get_width();
						while(_g4 < _g3) {
							var x = _g4++;
							var value = this.bytes.get(y * this.get_width() + x);
							rgbaBytes.set(y * this.get_width() * 4 + x * 4,value);
							rgbaBytes.set(y * this.get_width() * 4 + x * 4 + 1,value);
							rgbaBytes.set(y * this.get_width() * 4 + x * 4 + 2,value);
							rgbaBytes.set(y * this.get_width() * 4 + x * 4 + 3,255);
						}
					}
					kha_Sys.gl.texImage2D(kha_Sys.gl.TEXTURE_2D,0,kha_Sys.gl.RGBA,this.get_width(),this.get_height(),0,kha_Sys.gl.RGBA,kha_Sys.gl.UNSIGNED_BYTE,new Uint8Array(rgbaBytes.b.bufferValue));
				}
				break;
			case 0:
				kha_Sys.gl.texImage2D(kha_Sys.gl.TEXTURE_2D,0,kha_Sys.gl.RGBA,this.get_width(),this.get_height(),0,kha_Sys.gl.RGBA,kha_Sys.gl.UNSIGNED_BYTE,new Uint8Array(this.bytes.b.bufferValue));
				break;
			case 2:
				kha_Sys.gl.texImage2D(kha_Sys.gl.TEXTURE_2D,0,kha_Sys.gl.RGBA,this.get_width(),this.get_height(),0,kha_Sys.gl.RGBA,kha_Sys.gl.FLOAT,new Uint8Array(this.bytes.b.bufferValue));
				break;
			}
			kha_Sys.gl.bindTexture(kha_Sys.gl.TEXTURE_2D,null);
			this.bytes = null;
		}
	}
	,unload: function() {
	}
	,__class__: kha_WebGLImage
});
var kha_arrays__$Float32Array_Float32Array_$Impl_$ = {};
$hxClasses["kha.arrays._Float32Array.Float32Array_Impl_"] = kha_arrays__$Float32Array_Float32Array_$Impl_$;
kha_arrays__$Float32Array_Float32Array_$Impl_$.__name__ = ["kha","arrays","_Float32Array","Float32Array_Impl_"];
kha_arrays__$Float32Array_Float32Array_$Impl_$._new = function(elements) {
	return new Float32Array(elements);
};
kha_arrays__$Float32Array_Float32Array_$Impl_$.get_length = function(this1) {
	return this1.length;
};
kha_arrays__$Float32Array_Float32Array_$Impl_$.set = function(this1,index,value) {
	return this1[index] = value;
};
kha_arrays__$Float32Array_Float32Array_$Impl_$.get = function(this1,index) {
	return this1[index];
};
kha_arrays__$Float32Array_Float32Array_$Impl_$.data = function(this1) {
	return this1;
};
var kha_audio1_MusicChannel = function() { };
$hxClasses["kha.audio1.MusicChannel"] = kha_audio1_MusicChannel;
kha_audio1_MusicChannel.__name__ = ["kha","audio1","MusicChannel"];
kha_audio1_MusicChannel.prototype = {
	__class__: kha_audio1_MusicChannel
};
var kha_audio1_SoundChannel = function() { };
$hxClasses["kha.audio1.SoundChannel"] = kha_audio1_SoundChannel;
kha_audio1_SoundChannel.__name__ = ["kha","audio1","SoundChannel"];
kha_audio1_SoundChannel.prototype = {
	__class__: kha_audio1_SoundChannel
};
var kha_audio2_Audio = function() { };
$hxClasses["kha.audio2.Audio"] = kha_audio2_Audio;
kha_audio2_Audio.__name__ = ["kha","audio2","Audio"];
kha_audio2_Audio.initContext = function() {
	try {
		kha_audio2_Audio._context = new AudioContext();
		return;
	} catch( e ) {
		if (e instanceof js__$Boot_HaxeError) e = e.val;
	}
	try {
		this._context = new webkitAudioContext();
		return;
	} catch( e1 ) {
		if (e1 instanceof js__$Boot_HaxeError) e1 = e1.val;
	}
};
kha_audio2_Audio._init = function() {
	kha_audio2_Audio.initContext();
	if(kha_audio2_Audio._context == null) return false;
	var bufferSize = 2048;
	kha_audio2_Audio.buffer = new kha_audio2_Buffer(bufferSize * 4,2,kha_audio2_Audio._context.sampleRate | 0);
	kha_audio2_Audio.processingNode = kha_audio2_Audio._context.createScriptProcessor(bufferSize,0,2);
	kha_audio2_Audio.processingNode.onaudioprocess = function(e) {
		var output1 = e.outputBuffer.getChannelData(0);
		var output2 = e.outputBuffer.getChannelData(1);
		if(kha_audio2_Audio.audioCallback != null) {
			kha_audio2_Audio.audioCallback(e.outputBuffer.length * 2,kha_audio2_Audio.buffer);
			var _g1 = 0;
			var _g = e.outputBuffer.length;
			while(_g1 < _g) {
				var i = _g1++;
				output1[i] = kha_audio2_Audio.buffer.data[kha_audio2_Audio.buffer.readLocation];
				kha_audio2_Audio.buffer.readLocation += 1;
				output2[i] = kha_audio2_Audio.buffer.data[kha_audio2_Audio.buffer.readLocation];
				kha_audio2_Audio.buffer.readLocation += 1;
				if(kha_audio2_Audio.buffer.readLocation >= kha_audio2_Audio.buffer.size) kha_audio2_Audio.buffer.readLocation = 0;
			}
		} else {
			var _g11 = 0;
			var _g2 = e.outputBuffer.length;
			while(_g11 < _g2) {
				var i1 = _g11++;
				output1[i1] = 0;
				output2[i1] = 0;
			}
		}
	};
	kha_audio2_Audio.processingNode.connect(kha_audio2_Audio._context.destination);
	return true;
};
kha_audio2_Audio.playMusic = function(music,loop) {
	if(loop == null) loop = false;
	var channel = new kha_js_AEMusicChannel((js_Boot.__cast(music , kha_js_WebAudioMusic)).aemusic,loop);
	channel.play();
	return channel;
};
var kha_audio2_Audio1 = function() { };
$hxClasses["kha.audio2.Audio1"] = kha_audio2_Audio1;
kha_audio2_Audio1.__name__ = ["kha","audio2","Audio1"];
kha_audio2_Audio1._init = function() {
	var this1;
	this1 = new Array(16);
	kha_audio2_Audio1.soundChannels = this1;
	var this2;
	this2 = new Array(16);
	kha_audio2_Audio1.musicChannels = this2;
	var this3;
	this3 = new Array(16);
	kha_audio2_Audio1.internalSoundChannels = this3;
	var this4;
	this4 = new Array(16);
	kha_audio2_Audio1.internalMusicChannels = this4;
	var this5;
	this5 = new Array(512);
	kha_audio2_Audio1.sampleCache1 = this5;
	var this6;
	this6 = new Array(512);
	kha_audio2_Audio1.sampleCache2 = this6;
	kha_audio2_Audio.audioCallback = kha_audio2_Audio1._mix;
};
kha_audio2_Audio1._mix = function(samples,buffer) {
	if(kha_audio2_Audio1.sampleCache1.length < samples) {
		var this1;
		this1 = new Array(samples);
		kha_audio2_Audio1.sampleCache1 = this1;
		var this2;
		this2 = new Array(samples);
		kha_audio2_Audio1.sampleCache2 = this2;
	}
	var _g = 0;
	while(_g < samples) {
		var i = _g++;
		kha_audio2_Audio1.sampleCache2[i] = 0;
	}
	var _g1 = 0;
	while(_g1 < 16) {
		var i1 = _g1++;
		kha_audio2_Audio1.internalSoundChannels[i1] = kha_audio2_Audio1.soundChannels[i1];
	}
	var _g2 = 0;
	while(_g2 < 16) {
		var i2 = _g2++;
		kha_audio2_Audio1.internalMusicChannels[i2] = kha_audio2_Audio1.musicChannels[i2];
	}
	var _g3 = 0;
	var _g11 = kha_audio2_Audio1.internalSoundChannels;
	while(_g3 < _g11.length) {
		var channel = _g11[_g3];
		++_g3;
		if(channel == null || channel.get_finished()) continue;
		channel.nextSamples(kha_audio2_Audio1.sampleCache1,samples,buffer.samplesPerSecond);
		var _g21 = 0;
		while(_g21 < samples) {
			var i3 = _g21++;
			var _g31 = i3;
			var val = kha_audio2_Audio1.sampleCache2[_g31] + kha_audio2_Audio1.sampleCache1[i3] * channel.get_volume();
			kha_audio2_Audio1.sampleCache2[_g31] = val;
		}
	}
	var _g4 = 0;
	var _g12 = kha_audio2_Audio1.internalMusicChannels;
	while(_g4 < _g12.length) {
		var channel1 = _g12[_g4];
		++_g4;
		if(channel1 == null || channel1.get_finished()) continue;
		channel1.nextSamples(kha_audio2_Audio1.sampleCache1,samples,buffer.samplesPerSecond);
		var _g22 = 0;
		while(_g22 < samples) {
			var i4 = _g22++;
			var _g32 = i4;
			var val1 = kha_audio2_Audio1.sampleCache2[_g32] + kha_audio2_Audio1.sampleCache1[i4] * channel1.get_volume();
			kha_audio2_Audio1.sampleCache2[_g32] = val1;
		}
	}
	var _g5 = 0;
	while(_g5 < samples) {
		var i5 = _g5++;
		var val2 = Math.max(Math.min(kha_audio2_Audio1.sampleCache2[i5],1.0),-1.0);
		buffer.data[buffer.writeLocation] = val2;
		buffer.writeLocation += 1;
		if(buffer.writeLocation >= buffer.size) buffer.writeLocation = 0;
	}
};
kha_audio2_Audio1.playSound = function(sound) {
	var channel = null;
	var _g = 0;
	while(_g < 16) {
		var i = _g++;
		if(kha_audio2_Audio1.soundChannels[i] == null || kha_audio2_Audio1.soundChannels[i].get_finished()) {
			channel = new kha_audio2_SoundChannel();
			channel.data = sound.data;
			kha_audio2_Audio1.soundChannels[i] = channel;
			break;
		}
	}
	return channel;
};
kha_audio2_Audio1.playMusic = function(music,loop) {
	if(loop == null) loop = false;
	var hardwareChannel = kha_audio2_Audio.playMusic(music,loop);
	if(hardwareChannel != null) return hardwareChannel;
	if(music.data == null) return null;
	var channel = null;
	var _g = 0;
	while(_g < 16) {
		var i = _g++;
		if(kha_audio2_Audio1.musicChannels[i] == null || kha_audio2_Audio1.musicChannels[i].get_finished()) {
			channel = new kha_audio2_MusicChannel(music.data,loop);
			kha_audio2_Audio1.musicChannels[i] = channel;
			break;
		}
	}
	return channel;
};
var kha_audio2_Buffer = function(size,channels,samplesPerSecond) {
	this.size = size;
	var this1;
	this1 = new Array(size);
	this.data = this1;
	this.channels = channels;
	this.samplesPerSecond = samplesPerSecond;
	this.readLocation = 0;
	this.writeLocation = 0;
};
$hxClasses["kha.audio2.Buffer"] = kha_audio2_Buffer;
kha_audio2_Buffer.__name__ = ["kha","audio2","Buffer"];
kha_audio2_Buffer.prototype = {
	__class__: kha_audio2_Buffer
};
var kha_audio2_MusicChannel = function(data,loop) {
	this.paused = false;
	this.atend = false;
	this.myVolume = 1;
	this.loop = loop;
	this.reader = kha_audio2_ogg_vorbis_Reader.openFromBytes(data);
};
$hxClasses["kha.audio2.MusicChannel"] = kha_audio2_MusicChannel;
kha_audio2_MusicChannel.__name__ = ["kha","audio2","MusicChannel"];
kha_audio2_MusicChannel.__interfaces__ = [kha_audio1_MusicChannel];
kha_audio2_MusicChannel.prototype = {
	nextSamples: function(samples,length,sampleRate) {
		if(this.paused) {
			var _g = 0;
			while(_g < length) {
				var i = _g++;
				samples[i] = 0;
			}
			return;
		}
		var count = this.reader.read(samples,length / 2 | 0,2,sampleRate,true) * 2;
		if(count < length) {
			if(this.loop) this.reader.set_currentMillisecond(0); else this.atend = true;
			var _g1 = count;
			while(_g1 < length) {
				var i1 = _g1++;
				samples[i1] = 0;
			}
		}
	}
	,play: function() {
		this.paused = false;
	}
	,pause: function() {
		this.paused = true;
	}
	,stop: function() {
		this.atend = true;
	}
	,get_length: function() {
		return Std["int"](this.reader.get_totalMillisecond());
	}
	,get_position: function() {
		return Std["int"](this.reader.get_currentMillisecond());
	}
	,get_volume: function() {
		return this.myVolume;
	}
	,set_volume: function(value) {
		return this.myVolume = value;
	}
	,get_finished: function() {
		return this.atend;
	}
	,__class__: kha_audio2_MusicChannel
};
var kha_audio2_SoundChannel = function() {
	this.paused = false;
	this.myVolume = 1;
	this.myPosition = 0;
};
$hxClasses["kha.audio2.SoundChannel"] = kha_audio2_SoundChannel;
kha_audio2_SoundChannel.__name__ = ["kha","audio2","SoundChannel"];
kha_audio2_SoundChannel.__interfaces__ = [kha_audio1_SoundChannel];
kha_audio2_SoundChannel.prototype = {
	nextSamples: function(samples,length,sampleRate) {
		if(this.paused) {
			var _g = 0;
			while(_g < length) {
				var i = _g++;
				samples[i] = 0;
			}
			return;
		}
		var _g1 = 0;
		while(_g1 < length) {
			var i1 = _g1++;
			if(this.myPosition < this.data.length) samples[i1] = this.data[this.myPosition]; else samples[i1] = 0;
			++this.myPosition;
		}
	}
	,play: function() {
		this.paused = false;
	}
	,pause: function() {
		this.paused = true;
	}
	,stop: function() {
		this.myPosition = this.data.length;
	}
	,get_length: function() {
		return this.data.length / 44.1 / 2 | 0;
	}
	,get_position: function() {
		return this.myPosition / 44.1 / 2 | 0;
	}
	,get_volume: function() {
		return this.myVolume;
	}
	,set_volume: function(value) {
		return this.myVolume = value;
	}
	,get_finished: function() {
		return this.myPosition >= this.data.length;
	}
	,__class__: kha_audio2_SoundChannel
};
var kha_audio2_ogg_tools_Crc32 = function() { };
$hxClasses["kha.audio2.ogg.tools.Crc32"] = kha_audio2_ogg_tools_Crc32;
kha_audio2_ogg_tools_Crc32.__name__ = ["kha","audio2","ogg","tools","Crc32"];
kha_audio2_ogg_tools_Crc32.init = function() {
	if(kha_audio2_ogg_tools_Crc32.table != null) return;
	var this1;
	this1 = new Array(256);
	kha_audio2_ogg_tools_Crc32.table = this1;
	var _g = 0;
	while(_g < 256) {
		var i = _g++;
		var s = i << 24;
		var _g1 = 0;
		while(_g1 < 8) {
			var j = _g1++;
			var b;
			if(_$UInt_UInt_$Impl_$.gte(s,1 << 31)) b = 79764919; else b = 0;
			s = s << 1 ^ b;
		}
		kha_audio2_ogg_tools_Crc32.table[i] = s;
	}
};
kha_audio2_ogg_tools_Crc32.update = function(crc,$byte) {
	return crc << 8 ^ kha_audio2_ogg_tools_Crc32.table[$byte ^ crc >>> 24];
};
var kha_audio2_ogg_tools_MathTools = function() { };
$hxClasses["kha.audio2.ogg.tools.MathTools"] = kha_audio2_ogg_tools_MathTools;
kha_audio2_ogg_tools_MathTools.__name__ = ["kha","audio2","ogg","tools","MathTools"];
kha_audio2_ogg_tools_MathTools.ilog = function(n) {
	var log2_4 = [0,1,2,2,3,3,3,3,4,4,4,4,4,4,4,4];
	if(n < 16384) {
		if(n < 16) return log2_4[n]; else if(n < 512) return 5 + log2_4[n >> 5]; else return 10 + log2_4[n >> 10];
	} else if(n < 16777216) {
		if(n < 524288) return 15 + log2_4[n >> 15]; else return 20 + log2_4[n >> 20];
	} else if(n < 536870912) return 25 + log2_4[n >> 25]; else if(n < -2147483648) return 30 + log2_4[n >> 30]; else return 0;
};
var kha_audio2_ogg_tools_Mdct = function() { };
$hxClasses["kha.audio2.ogg.tools.Mdct"] = kha_audio2_ogg_tools_Mdct;
kha_audio2_ogg_tools_Mdct.__name__ = ["kha","audio2","ogg","tools","Mdct"];
kha_audio2_ogg_tools_Mdct.inverseTransform = function(buffer,n,a,b,c,bitReverse) {
	var n2 = n >> 1;
	var n4 = n >> 2;
	var n8 = n >> 3;
	var buf2;
	var this1;
	this1 = new Array(n2);
	buf2 = this1;
	var dOffset = n2 - 2;
	var aaOffset = 0;
	var eOffset = 0;
	var eStopOffset = n2;
	while(eOffset != eStopOffset) {
		buf2[dOffset + 1] = buffer[eOffset] * a[aaOffset] - buffer[eOffset + 2] * a[aaOffset + 1];
		buf2[dOffset] = buffer[eOffset] * a[aaOffset + 1] + buffer[eOffset + 2] * a[aaOffset];
		dOffset -= 2;
		aaOffset += 2;
		eOffset += 4;
	}
	eOffset = n2 - 3;
	while(dOffset >= 0) {
		buf2[dOffset + 1] = -buffer[eOffset + 2] * a[aaOffset] - -buffer[eOffset] * a[aaOffset + 1];
		buf2[dOffset] = -buffer[eOffset + 2] * a[aaOffset + 1] + -buffer[eOffset] * a[aaOffset];
		dOffset -= 2;
		aaOffset += 2;
		eOffset -= 4;
	}
	var u = buffer;
	var v = buf2;
	var aaOffset1 = n2 - 8;
	var eOffset0 = n4;
	var eOffset1 = 0;
	var dOffset0 = n4;
	var dOffset1 = 0;
	while(aaOffset1 >= 0) {
		var v41_21 = v[eOffset0 + 1] - v[eOffset1 + 1];
		var v40_20 = v[eOffset0] - v[eOffset1];
		u[dOffset0 + 1] = v[eOffset0 + 1] + v[eOffset1 + 1];
		u[dOffset0] = v[eOffset0] + v[eOffset1];
		u[dOffset1 + 1] = v41_21 * a[aaOffset1 + 4] - v40_20 * a[aaOffset1 + 5];
		u[dOffset1] = v40_20 * a[aaOffset1 + 4] + v41_21 * a[aaOffset1 + 5];
		v41_21 = v[eOffset0 + 3] - v[eOffset1 + 3];
		v40_20 = v[eOffset0 + 2] - v[eOffset1 + 2];
		u[dOffset0 + 3] = v[eOffset0 + 3] + v[eOffset1 + 3];
		u[dOffset0 + 2] = v[eOffset0 + 2] + v[eOffset1 + 2];
		u[dOffset1 + 3] = v41_21 * a[aaOffset1] - v40_20 * a[aaOffset1 + 1];
		u[dOffset1 + 2] = v40_20 * a[aaOffset1] + v41_21 * a[aaOffset1 + 1];
		aaOffset1 -= 8;
		dOffset0 += 4;
		dOffset1 += 4;
		eOffset0 += 4;
		eOffset1 += 4;
	}
	var ld = kha_audio2_ogg_tools_MathTools.ilog(n) - 1;
	kha_audio2_ogg_tools_Mdct.step3Iter0Loop(n >> 4,u,n2 - 1 - n4 * 0,-(n >> 3),a);
	kha_audio2_ogg_tools_Mdct.step3Iter0Loop(n >> 4,u,n2 - 1 - n4,-(n >> 3),a);
	kha_audio2_ogg_tools_Mdct.step3InnerRLoop(n >> 5,u,n2 - 1 - n8 * 0,-(n >> 4),a,16);
	kha_audio2_ogg_tools_Mdct.step3InnerRLoop(n >> 5,u,n2 - 1 - n8,-(n >> 4),a,16);
	kha_audio2_ogg_tools_Mdct.step3InnerRLoop(n >> 5,u,n2 - 1 - n8 * 2,-(n >> 4),a,16);
	kha_audio2_ogg_tools_Mdct.step3InnerRLoop(n >> 5,u,n2 - 1 - n8 * 3,-(n >> 4),a,16);
	var _g1 = 2;
	var _g = ld - 3 >> 1;
	while(_g1 < _g) {
		var l = _g1++;
		var k0 = n >> l + 2;
		var k0_2 = k0 >> 1;
		var lim = 1 << l + 1;
		var _g2 = 0;
		while(_g2 < lim) {
			var i = _g2++;
			kha_audio2_ogg_tools_Mdct.step3InnerRLoop(n >> l + 4,u,n2 - 1 - k0 * i,-k0_2,a,1 << l + 3);
		}
	}
	var _g11 = ld - 3 >> 1;
	var _g3 = ld - 6;
	while(_g11 < _g3) {
		var l1 = _g11++;
		var k01 = n >> l1 + 2;
		var k1 = 1 << l1 + 3;
		var k0_21 = k01 >> 1;
		var rlim = n >> l1 + 6;
		var lim1 = 1 << l1 + 1;
		var aOffset = 0;
		var i_off = n2 - 1;
		var r = rlim + 1;
		while(--r > 0) {
			kha_audio2_ogg_tools_Mdct.step3InnerSLoop(lim1,u,i_off,-k0_21,a,aOffset,k1,k01);
			aOffset += k1 * 4;
			i_off -= 8;
		}
	}
	kha_audio2_ogg_tools_Mdct.step3InnerSLoopLd654(n >> 5,u,n2 - 1,a,n);
	var brOffset = 0;
	var dOffset01 = n4 - 4;
	var dOffset11 = n2 - 4;
	while(dOffset01 >= 0) {
		var k4 = bitReverse[brOffset];
		v[dOffset11 + 3] = u[k4];
		v[dOffset11 + 2] = u[k4 + 1];
		v[dOffset01 + 3] = u[k4 + 2];
		v[dOffset01 + 2] = u[k4 + 3];
		k4 = bitReverse[brOffset + 1];
		v[dOffset11 + 1] = u[k4];
		v[dOffset11] = u[k4 + 1];
		v[dOffset01 + 1] = u[k4 + 2];
		v[dOffset01] = u[k4 + 3];
		dOffset01 -= 4;
		dOffset11 -= 4;
		brOffset += 2;
	}
	var cOffset = 0;
	var dOffset2 = 0;
	var eOffset2 = n2 - 4;
	while(dOffset2 < eOffset2) {
		var a02 = v[dOffset2] - v[eOffset2 + 2];
		var a11 = v[dOffset2 + 1] + v[eOffset2 + 3];
		var b0 = c[cOffset + 1] * a02 + c[cOffset] * a11;
		var b1 = c[cOffset + 1] * a11 - c[cOffset] * a02;
		var b2 = v[dOffset2] + v[eOffset2 + 2];
		var b3 = v[dOffset2 + 1] - v[eOffset2 + 3];
		v[dOffset2] = b2 + b0;
		v[dOffset2 + 1] = b3 + b1;
		v[eOffset2 + 2] = b2 - b0;
		v[eOffset2 + 3] = b1 - b3;
		a02 = v[dOffset2 + 2] - v[eOffset2];
		a11 = v[dOffset2 + 3] + v[eOffset2 + 1];
		b0 = c[cOffset + 3] * a02 + c[cOffset + 2] * a11;
		b1 = c[cOffset + 3] * a11 - c[cOffset + 2] * a02;
		b2 = v[dOffset2 + 2] + v[eOffset2];
		b3 = v[dOffset2 + 3] - v[eOffset2 + 1];
		v[dOffset2 + 2] = b2 + b0;
		v[dOffset2 + 3] = b3 + b1;
		v[eOffset2] = b2 - b0;
		v[eOffset2 + 1] = b1 - b3;
		cOffset += 4;
		dOffset2 += 4;
		eOffset2 -= 4;
	}
	var bOffset = n2 - 8;
	var eOffset3 = n2 - 8;
	var dOffset02 = 0;
	var dOffset12 = n2 - 4;
	var dOffset21 = n2;
	var dOffset3 = n - 4;
	while(eOffset3 >= 0) {
		var p3 = buf2[eOffset3 + 6] * b[bOffset + 7] - buf2[eOffset3 + 7] * b[bOffset + 6];
		var p2 = -buf2[eOffset3 + 6] * b[bOffset + 6] - buf2[eOffset3 + 7] * b[bOffset + 7];
		buffer[dOffset02] = p3;
		buffer[dOffset12 + 3] = -p3;
		buffer[dOffset21] = p2;
		buffer[dOffset3 + 3] = p2;
		var p1 = buf2[eOffset3 + 4] * b[bOffset + 5] - buf2[eOffset3 + 5] * b[bOffset + 4];
		var p0 = -buf2[eOffset3 + 4] * b[bOffset + 4] - buf2[eOffset3 + 5] * b[bOffset + 5];
		buffer[dOffset02 + 1] = p1;
		buffer[dOffset12 + 2] = -p1;
		buffer[dOffset21 + 1] = p0;
		buffer[dOffset3 + 2] = p0;
		p3 = buf2[eOffset3 + 2] * b[bOffset + 3] - buf2[eOffset3 + 3] * b[bOffset + 2];
		p2 = -buf2[eOffset3 + 2] * b[bOffset + 2] - buf2[eOffset3 + 3] * b[bOffset + 3];
		buffer[dOffset02 + 2] = p3;
		buffer[dOffset12 + 1] = -p3;
		buffer[dOffset21 + 2] = p2;
		buffer[dOffset3 + 1] = p2;
		p1 = buf2[eOffset3] * b[bOffset + 1] - buf2[eOffset3 + 1] * b[bOffset];
		p0 = -buf2[eOffset3] * b[bOffset] - buf2[eOffset3 + 1] * b[bOffset + 1];
		buffer[dOffset02 + 3] = p1;
		buffer[dOffset12] = -p1;
		buffer[dOffset21 + 3] = p0;
		buffer[dOffset3] = p0;
		bOffset -= 8;
		eOffset3 -= 8;
		dOffset02 += 4;
		dOffset21 += 4;
		dOffset12 -= 4;
		dOffset3 -= 4;
	}
};
kha_audio2_ogg_tools_Mdct.step3Iter0Loop = function(n,e,i_off,k_off,a) {
	var eeOffset0 = i_off;
	var eeOffset2 = i_off + k_off;
	var aOffset = 0;
	var i = (n >> 2) + 1;
	while(--i > 0) {
		var k00_20 = e[eeOffset0] - e[eeOffset2];
		var k01_21 = e[eeOffset0 + -1] - e[eeOffset2 + -1];
		var _g = eeOffset0;
		e[_g] = e[_g] + e[eeOffset2];
		var _g1 = eeOffset0 + -1;
		e[_g1] = e[_g1] + e[eeOffset2 + -1];
		e[eeOffset2] = k00_20 * a[aOffset] - k01_21 * a[aOffset + 1];
		e[eeOffset2 + -1] = k01_21 * a[aOffset] + k00_20 * a[aOffset + 1];
		aOffset += 8;
		k00_20 = e[eeOffset0 + -2] - e[eeOffset2 + -2];
		k01_21 = e[eeOffset0 + -3] - e[eeOffset2 + -3];
		var _g2 = eeOffset0 + -2;
		e[_g2] = e[_g2] + e[eeOffset2 + -2];
		var _g3 = eeOffset0 + -3;
		e[_g3] = e[_g3] + e[eeOffset2 + -3];
		e[eeOffset2 + -2] = k00_20 * a[aOffset] - k01_21 * a[aOffset + 1];
		e[eeOffset2 + -3] = k01_21 * a[aOffset] + k00_20 * a[aOffset + 1];
		aOffset += 8;
		k00_20 = e[eeOffset0 + -4] - e[eeOffset2 + -4];
		k01_21 = e[eeOffset0 + -5] - e[eeOffset2 + -5];
		var _g4 = eeOffset0 + -4;
		e[_g4] = e[_g4] + e[eeOffset2 + -4];
		var _g5 = eeOffset0 + -5;
		e[_g5] = e[_g5] + e[eeOffset2 + -5];
		e[eeOffset2 + -4] = k00_20 * a[aOffset] - k01_21 * a[aOffset + 1];
		e[eeOffset2 + -5] = k01_21 * a[aOffset] + k00_20 * a[aOffset + 1];
		aOffset += 8;
		k00_20 = e[eeOffset0 + -6] - e[eeOffset2 + -6];
		k01_21 = e[eeOffset0 + -7] - e[eeOffset2 + -7];
		var _g6 = eeOffset0 + -6;
		e[_g6] = e[_g6] + e[eeOffset2 + -6];
		var _g7 = eeOffset0 + -7;
		e[_g7] = e[_g7] + e[eeOffset2 + -7];
		e[eeOffset2 + -6] = k00_20 * a[aOffset] - k01_21 * a[aOffset + 1];
		e[eeOffset2 + -7] = k01_21 * a[aOffset] + k00_20 * a[aOffset + 1];
		aOffset += 8;
		eeOffset0 -= 8;
		eeOffset2 -= 8;
	}
};
kha_audio2_ogg_tools_Mdct.step3InnerRLoop = function(lim,e,d0,k_off,a,k1) {
	var aOffset = 0;
	var eOffset0 = d0;
	var eOffset2 = d0 + k_off;
	var i = (lim >> 2) + 1;
	while(--i > 0) {
		var k00_20 = e[eOffset0] - e[eOffset2];
		var k01_21 = e[eOffset0 + -1] - e[eOffset2 + -1];
		var _g = eOffset0;
		e[_g] = e[_g] + e[eOffset2];
		var _g1 = eOffset0 + -1;
		e[_g1] = e[_g1] + e[eOffset2 + -1];
		e[eOffset2] = k00_20 * a[aOffset] - k01_21 * a[aOffset + 1];
		e[eOffset2 + -1] = k01_21 * a[aOffset] + k00_20 * a[aOffset + 1];
		aOffset += k1;
		k00_20 = e[eOffset0 + -2] - e[eOffset2 + -2];
		k01_21 = e[eOffset0 + -3] - e[eOffset2 + -3];
		var _g2 = eOffset0 + -2;
		e[_g2] = e[_g2] + e[eOffset2 + -2];
		var _g3 = eOffset0 + -3;
		e[_g3] = e[_g3] + e[eOffset2 + -3];
		e[eOffset2 + -2] = k00_20 * a[aOffset] - k01_21 * a[aOffset + 1];
		e[eOffset2 + -3] = k01_21 * a[aOffset] + k00_20 * a[aOffset + 1];
		aOffset += k1;
		k00_20 = e[eOffset0 + -4] - e[eOffset2 + -4];
		k01_21 = e[eOffset0 + -5] - e[eOffset2 + -5];
		var _g4 = eOffset0 + -4;
		e[_g4] = e[_g4] + e[eOffset2 + -4];
		var _g5 = eOffset0 + -5;
		e[_g5] = e[_g5] + e[eOffset2 + -5];
		e[eOffset2 + -4] = k00_20 * a[aOffset] - k01_21 * a[aOffset + 1];
		e[eOffset2 + -5] = k01_21 * a[aOffset] + k00_20 * a[aOffset + 1];
		aOffset += k1;
		k00_20 = e[eOffset0 + -6] - e[eOffset2 + -6];
		k01_21 = e[eOffset0 + -7] - e[eOffset2 + -7];
		var _g6 = eOffset0 + -6;
		e[_g6] = e[_g6] + e[eOffset2 + -6];
		var _g7 = eOffset0 + -7;
		e[_g7] = e[_g7] + e[eOffset2 + -7];
		e[eOffset2 + -6] = k00_20 * a[aOffset] - k01_21 * a[aOffset + 1];
		e[eOffset2 + -7] = k01_21 * a[aOffset] + k00_20 * a[aOffset + 1];
		eOffset0 -= 8;
		eOffset2 -= 8;
		aOffset += k1;
	}
};
kha_audio2_ogg_tools_Mdct.step3InnerSLoop = function(n,e,i_off,k_off,a,aOffset0,aOffset1,k0) {
	var A0 = a[aOffset0];
	var A1 = a[aOffset0 + 1];
	var A2 = a[aOffset0 + aOffset1];
	var A3 = a[aOffset0 + aOffset1 + 1];
	var A4 = a[aOffset0 + aOffset1 * 2];
	var A5 = a[aOffset0 + aOffset1 * 2 + 1];
	var A6 = a[aOffset0 + aOffset1 * 3];
	var A7 = a[aOffset0 + aOffset1 * 3 + 1];
	var eeOffset0 = i_off;
	var eeOffset2 = i_off + k_off;
	var i = n + 1;
	while(--i > 0) {
		var k00 = e[eeOffset0] - e[eeOffset2];
		var k11 = e[eeOffset0 + -1] - e[eeOffset2 + -1];
		e[eeOffset0] = e[eeOffset0] + e[eeOffset2];
		e[eeOffset0 + -1] = e[eeOffset0 + -1] + e[eeOffset2 + -1];
		e[eeOffset2] = k00 * A0 - k11 * A1;
		e[eeOffset2 + -1] = k11 * A0 + k00 * A1;
		k00 = e[eeOffset0 + -2] - e[eeOffset2 + -2];
		k11 = e[eeOffset0 + -3] - e[eeOffset2 + -3];
		e[eeOffset0 + -2] = e[eeOffset0 + -2] + e[eeOffset2 + -2];
		e[eeOffset0 + -3] = e[eeOffset0 + -3] + e[eeOffset2 + -3];
		e[eeOffset2 + -2] = k00 * A2 - k11 * A3;
		e[eeOffset2 + -3] = k11 * A2 + k00 * A3;
		k00 = e[eeOffset0 + -4] - e[eeOffset2 + -4];
		k11 = e[eeOffset0 + -5] - e[eeOffset2 + -5];
		e[eeOffset0 + -4] = e[eeOffset0 + -4] + e[eeOffset2 + -4];
		e[eeOffset0 + -5] = e[eeOffset0 + -5] + e[eeOffset2 + -5];
		e[eeOffset2 + -4] = k00 * A4 - k11 * A5;
		e[eeOffset2 + -5] = k11 * A4 + k00 * A5;
		k00 = e[eeOffset0 + -6] - e[eeOffset2 + -6];
		k11 = e[eeOffset0 + -7] - e[eeOffset2 + -7];
		e[eeOffset0 + -6] = e[eeOffset0 + -6] + e[eeOffset2 + -6];
		e[eeOffset0 + -7] = e[eeOffset0 + -7] + e[eeOffset2 + -7];
		e[eeOffset2 + -6] = k00 * A6 - k11 * A7;
		e[eeOffset2 + -7] = k11 * A6 + k00 * A7;
		eeOffset0 -= k0;
		eeOffset2 -= k0;
	}
};
kha_audio2_ogg_tools_Mdct.iter54 = function(e,zOffset) {
	var t0 = e[zOffset];
	var t1 = e[zOffset + -4];
	var k00 = t0 - t1;
	var y0 = t0 + t1;
	t0 = e[zOffset + -2];
	t1 = e[zOffset + -6];
	var y2 = t0 + t1;
	var k22 = t0 - t1;
	e[zOffset] = y0 + y2;
	e[zOffset + -2] = y0 - y2;
	var k33 = e[zOffset + -3] - e[zOffset + -7];
	e[zOffset + -4] = k00 + k33;
	e[zOffset + -6] = k00 - k33;
	t0 = e[zOffset + -1];
	t1 = e[zOffset + -5];
	var k11 = t0 - t1;
	var y1 = t0 + t1;
	var y3 = e[zOffset + -3] + e[zOffset + -7];
	e[zOffset + -1] = y1 + y3;
	e[zOffset + -3] = y1 - y3;
	e[zOffset + -5] = k11 - k22;
	e[zOffset + -7] = k11 + k22;
};
kha_audio2_ogg_tools_Mdct.step3InnerSLoopLd654 = function(n,e,i_off,a,baseN) {
	var A2 = a[baseN >> 3];
	var zOffset = i_off;
	var baseOffset = i_off - 16 * n;
	while(zOffset > baseOffset) {
		var t0 = e[zOffset];
		var t1 = e[zOffset + -8];
		e[zOffset + -8] = t0 - t1;
		e[zOffset] = t0 + t1;
		t0 = e[zOffset + -1];
		t1 = e[zOffset + -9];
		e[zOffset + -9] = t0 - t1;
		e[zOffset + -1] = t0 + t1;
		t0 = e[zOffset + -2];
		t1 = e[zOffset + -10];
		var k00 = t0 - t1;
		e[zOffset + -2] = t0 + t1;
		t0 = e[zOffset + -3];
		t1 = e[zOffset + -11];
		var k11 = t0 - t1;
		e[zOffset + -3] = t0 + t1;
		e[zOffset + -10] = (k00 + k11) * A2;
		e[zOffset + -11] = (k11 - k00) * A2;
		t0 = e[zOffset + -4];
		t1 = e[zOffset + -12];
		k00 = t1 - t0;
		e[zOffset + -4] = t0 + t1;
		t0 = e[zOffset + -5];
		t1 = e[zOffset + -13];
		k11 = t0 - t1;
		e[zOffset + -5] = t0 + t1;
		e[zOffset + -12] = k11;
		e[zOffset + -13] = k00;
		t0 = e[zOffset + -6];
		t1 = e[zOffset + -14];
		k00 = t1 - t0;
		e[zOffset + -6] = t0 + t1;
		t0 = e[zOffset + -7];
		t1 = e[zOffset + -15];
		k11 = t0 - t1;
		e[zOffset + -7] = t0 + t1;
		e[zOffset + -14] = (k00 + k11) * A2;
		e[zOffset + -15] = (k00 - k11) * A2;
		kha_audio2_ogg_tools_Mdct.iter54(e,zOffset);
		kha_audio2_ogg_tools_Mdct.iter54(e,zOffset - 8);
		zOffset -= 16;
	}
};
var kha_audio2_ogg_vorbis_Reader = function(input,seekFunc,inputLength) {
	this.seekFunc = seekFunc;
	this.inputLength = inputLength;
	this.decoder = kha_audio2_ogg_vorbis_VorbisDecoder.start(input);
	this.decoder.setupSampleNumber(seekFunc,inputLength);
	this.loopStart = this.get_header().comment.get_loopStart();
	this.loopLength = this.get_header().comment.get_loopLength();
};
$hxClasses["kha.audio2.ogg.vorbis.Reader"] = kha_audio2_ogg_vorbis_Reader;
kha_audio2_ogg_vorbis_Reader.__name__ = ["kha","audio2","ogg","vorbis","Reader"];
kha_audio2_ogg_vorbis_Reader.openFromBytes = function(bytes) {
	var input = new haxe_io_BytesInput(bytes);
	return new kha_audio2_ogg_vorbis_Reader(input,(function(f,a1) {
		return function(a2) {
			f(a1,a2);
		};
	})(kha_audio2_ogg_vorbis_Reader.seekBytes,input),bytes.length);
};
kha_audio2_ogg_vorbis_Reader.seekBytes = function(bytes,pos) {
	bytes.set_position(pos);
};
kha_audio2_ogg_vorbis_Reader.readAll = function(bytes,output,useFloat) {
	if(useFloat == null) useFloat = false;
	var input = new haxe_io_BytesInput(bytes);
	var decoder = kha_audio2_ogg_vorbis_VorbisDecoder.start(input);
	decoder.setupSampleNumber((function(f,a1) {
		return function(a2) {
			f(a1,a2);
		};
	})(kha_audio2_ogg_vorbis_Reader.seekBytes,input),bytes.length);
	var header = decoder.header;
	var count = 0;
	var bufferSize = 4096;
	var buffer;
	var this1;
	this1 = new Array(bufferSize * header.channel);
	buffer = this1;
	while(true) {
		var n = decoder.read(buffer,bufferSize,header.channel,header.sampleRate,useFloat);
		var _g1 = 0;
		var _g = n * header.channel;
		while(_g1 < _g) {
			var i = _g1++;
			output.writeInt32(haxe_io_FPHelper.floatToI32(buffer[i]));
		}
		if(n == 0) break;
		count += n;
	}
	return decoder.header;
};
kha_audio2_ogg_vorbis_Reader.prototype = {
	get_header: function() {
		return this.decoder.header;
	}
	,get_totalSample: function() {
		return this.decoder.totalSample;
	}
	,get_totalMillisecond: function() {
		return this.sampleToMillisecond(this.decoder.totalSample);
	}
	,get_currentSample: function() {
		return this.decoder.currentSample;
	}
	,set_currentSample: function(value) {
		this.decoder.seek(this.seekFunc,this.inputLength,value);
		return this.decoder.currentSample;
	}
	,get_currentMillisecond: function() {
		return this.sampleToMillisecond(this.get_currentSample());
	}
	,set_currentMillisecond: function(value) {
		this.set_currentSample(this.millisecondToSample(value));
		return this.get_currentMillisecond();
	}
	,read: function(output,samples,channels,sampleRate,useFloat) {
		if(useFloat == null) useFloat = false;
		this.decoder.ensurePosition(this.seekFunc);
		if(samples == null) samples = this.decoder.totalSample;
		if(channels == null) channels = this.get_header().channel;
		if(sampleRate == null) sampleRate = this.get_header().sampleRate;
		return this.decoder.read(output,samples,channels,sampleRate,useFloat);
	}
	,clone: function() {
		var reader = Type.createEmptyInstance(kha_audio2_ogg_vorbis_Reader);
		reader.seekFunc = this.seekFunc;
		reader.inputLength = this.inputLength;
		reader.decoder = this.decoder.clone(this.seekFunc);
		reader.loopStart = this.loopStart;
		reader.loopLength = this.loopLength;
		return reader;
	}
	,sampleToMillisecond: function(samples) {
		return (function($this) {
			var $r;
			var b = $this.get_header().sampleRate;
			$r = _$UInt_UInt_$Impl_$.toFloat(samples) / _$UInt_UInt_$Impl_$.toFloat(b);
			return $r;
		}(this)) * 1000;
	}
	,millisecondToSample: function(millseconds) {
		return Math.floor((function($this) {
			var $r;
			var _g = millseconds / 1000;
			var _g1 = $this.get_header().sampleRate;
			$r = _$UInt_UInt_$Impl_$.toFloat(_g1) * _g;
			return $r;
		}(this)));
	}
	,__class__: kha_audio2_ogg_vorbis_Reader
};
var kha_audio2_ogg_vorbis_VorbisDecodeState = function(input) {
	this.nextSeg = 0;
	this.firstDecode = false;
	this.bytesInSeg = 0;
	this.validBits = 0;
	this.input = input;
	this.inputPosition = 0;
	this.page = new kha_audio2_ogg_vorbis_data_Page();
	kha_audio2_ogg_tools_Crc32.init();
};
$hxClasses["kha.audio2.ogg.vorbis.VorbisDecodeState"] = kha_audio2_ogg_vorbis_VorbisDecodeState;
kha_audio2_ogg_vorbis_VorbisDecodeState.__name__ = ["kha","audio2","ogg","vorbis","VorbisDecodeState"];
kha_audio2_ogg_vorbis_VorbisDecodeState.prototype = {
	setup: function(loc0,loc1) {
		var segmentCount;
		this.inputPosition += 1;
		segmentCount = this.input.readByte();
		this.segments = this.read(segmentCount);
		this.endSegWithKnownLoc = -2;
		if(loc0 != -1 || loc1 != -1) {
			var i = segmentCount - 1;
			while(i >= 0) {
				if(this.segments[i] < 255) break;
				if(i >= 0) {
					this.endSegWithKnownLoc = i;
					this.knownLocForPacket = loc0;
				}
				i--;
			}
		}
		if(this.firstDecode) {
			var i1 = 0;
			var len = 0;
			var p = new kha_audio2_ogg_vorbis_data_ProbedPage();
			var _g = 0;
			while(_g < segmentCount) {
				var i2 = _g++;
				len += this.segments[i2];
			}
			len += 27 + segmentCount;
			p.pageStart = this.firstAudioPageOffset;
			p.pageEnd = p.pageStart + len;
			p.firstDecodedSample = 0;
			p.lastDecodedSample = loc0;
			this.pFirst = p;
		}
		this.nextSeg = 0;
	}
	,clone: function(seekFunc) {
		var state = Type.createEmptyInstance(kha_audio2_ogg_vorbis_VorbisDecodeState);
		seekFunc(this.inputPosition);
		state.input = this.input;
		state.eof = this.eof;
		state.validBits = this.validBits;
		state.discardSamplesDeferred = this.discardSamplesDeferred;
		state.firstDecode = this.firstDecode;
		state.nextSeg = this.nextSeg;
		state.bytesInSeg = this.bytesInSeg;
		state.acc = state.acc;
		state.lastSeg = this.lastSeg;
		state.lastSegWhich = this.lastSegWhich;
		state.currentLoc = this.currentLoc;
		state.currentLocValid = this.currentLocValid;
		state.inputPosition = this.inputPosition;
		state.firstAudioPageOffset = this.firstAudioPageOffset;
		state.error = this.error;
		state.segments = this.segments;
		state.pFirst = this.pFirst;
		state.pLast = this.pLast;
		state.page = this.page.clone();
		return state;
	}
	,next: function() {
		if(this.lastSeg) return 0;
		if(this.nextSeg == -1) {
			this.lastSegWhich = this.segments.length - 1;
			try {
				this.page.start(this);
			} catch( e ) {
				if (e instanceof js__$Boot_HaxeError) e = e.val;
				if( js_Boot.__instanceof(e,kha_audio2_ogg_vorbis_data_ReaderError) ) {
					this.lastSeg = true;
					this.error = e;
					return 0;
				} else throw(e);
			}
			if((this.page.flag & 1) == 0) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.CONTINUED_PACKET_FLAG_INVALID,null,{ fileName : "VorbisDecodeState.hx", lineNumber : 171, className : "kha.audio2.ogg.vorbis.VorbisDecodeState", methodName : "next"}));
		}
		var len;
		var index = this.nextSeg++;
		len = this.segments[index];
		if(len < 255) {
			this.lastSeg = true;
			this.lastSegWhich = this.nextSeg - 1;
		}
		if(this.nextSeg >= this.segments.length) this.nextSeg = -1;
		this.bytesInSeg = len;
		return len;
	}
	,startPacket: function() {
		while(this.nextSeg == -1) {
			this.page.start(this);
			if((this.page.flag & 1) != 0) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.MISSING_CAPTURE_PATTERN,null,{ fileName : "VorbisDecodeState.hx", lineNumber : 193, className : "kha.audio2.ogg.vorbis.VorbisDecodeState", methodName : "startPacket"}));
		}
		this.lastSeg = false;
		this.validBits = 0;
		this.bytesInSeg = 0;
	}
	,maybeStartPacket: function() {
		if(this.nextSeg == -1) {
			var eof = false;
			var x;
			try {
				this.inputPosition += 1;
				x = this.input.readByte();
			} catch( e ) {
				if (e instanceof js__$Boot_HaxeError) e = e.val;
				if( js_Boot.__instanceof(e,haxe_io_Eof) ) {
					eof = true;
					x = 0;
				} else throw(e);
			}
			if(eof) return false;
			if(x != 79 || (function($this) {
				var $r;
				$this.inputPosition += 1;
				$r = $this.input.readByte();
				return $r;
			}(this)) != 103 || (function($this) {
				var $r;
				$this.inputPosition += 1;
				$r = $this.input.readByte();
				return $r;
			}(this)) != 103 || (function($this) {
				var $r;
				$this.inputPosition += 1;
				$r = $this.input.readByte();
				return $r;
			}(this)) != 83) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.MISSING_CAPTURE_PATTERN,null,{ fileName : "VorbisDecodeState.hx", lineNumber : 218, className : "kha.audio2.ogg.vorbis.VorbisDecodeState", methodName : "maybeStartPacket"}));
			this.page.startWithoutCapturePattern(this);
		}
		this.startPacket();
		return true;
	}
	,readBits: function(n) {
		if(this.validBits < 0) return 0; else if(this.validBits < n) {
			if(n > 24) return this.readBits(24) + (this.readBits(n - 24) << 24); else {
				if(this.validBits == 0) this.acc = 0;
				do if(this.bytesInSeg == 0 && (this.lastSeg || this.next() == 0)) {
					this.validBits = -1;
					break;
				} else {
					this.bytesInSeg--;
					var b;
					b = (function($this) {
						var $r;
						$this.inputPosition += 1;
						$r = $this.input.readByte();
						return $r;
					}(this)) << this.validBits;
					this.acc = this.acc + b;
					this.validBits += 8;
				} while(this.validBits < n);
				if(this.validBits < 0) return 0; else {
					var z = this.acc & (1 << n) - 1;
					this.acc = this.acc >>> n;
					this.validBits -= n;
					return z;
				}
			}
		} else {
			var z1 = this.acc & (1 << n) - 1;
			this.acc = this.acc >>> n;
			this.validBits -= n;
			return z1;
		}
	}
	,readPacketRaw: function() {
		if(this.bytesInSeg == 0 && (this.lastSeg || this.next() == 0)) return -1; else {
			this.bytesInSeg--;
			this.inputPosition += 1;
			return this.input.readByte();
		}
	}
	,readPacket: function() {
		var x;
		if(this.bytesInSeg == 0 && (this.lastSeg || this.next() == 0)) x = -1; else {
			this.bytesInSeg--;
			this.inputPosition += 1;
			x = this.input.readByte();
		}
		this.validBits = 0;
		return x;
	}
	,flushPacket: function() {
		while(this.bytesInSeg != 0 || !this.lastSeg && this.next() != 0) {
			this.bytesInSeg--;
			this.inputPosition += 1;
			this.input.readByte();
		}
	}
	,vorbisValidate: function() {
		var header = haxe_io_Bytes.alloc(6);
		var _g = 0;
		while(_g < 6) {
			var i = _g++;
			header.set(i,this.readPacket());
		}
		if(header.toString() != "vorbis") throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,"vorbis header",{ fileName : "VorbisDecodeState.hx", lineNumber : 300, className : "kha.audio2.ogg.vorbis.VorbisDecodeState", methodName : "vorbisValidate"}));
	}
	,firstPageValidate: function() {
		if(this.segments.length != 1) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_FIRST_PAGE,"segmentCount",{ fileName : "VorbisDecodeState.hx", lineNumber : 307, className : "kha.audio2.ogg.vorbis.VorbisDecodeState", methodName : "firstPageValidate"}));
		if(this.segments[0] != 30) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_FIRST_PAGE,"decodeState head",{ fileName : "VorbisDecodeState.hx", lineNumber : 310, className : "kha.audio2.ogg.vorbis.VorbisDecodeState", methodName : "firstPageValidate"}));
	}
	,startFirstDecode: function() {
		this.firstAudioPageOffset = this.inputPosition;
		this.firstDecode = true;
	}
	,capturePattern: function() {
		if((function($this) {
			var $r;
			$this.inputPosition += 1;
			$r = $this.input.readByte();
			return $r;
		}(this)) != 79 || (function($this) {
			var $r;
			$this.inputPosition += 1;
			$r = $this.input.readByte();
			return $r;
		}(this)) != 103 || (function($this) {
			var $r;
			$this.inputPosition += 1;
			$r = $this.input.readByte();
			return $r;
		}(this)) != 103 || (function($this) {
			var $r;
			$this.inputPosition += 1;
			$r = $this.input.readByte();
			return $r;
		}(this)) != 83) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.MISSING_CAPTURE_PATTERN,null,{ fileName : "VorbisDecodeState.hx", lineNumber : 323, className : "kha.audio2.ogg.vorbis.VorbisDecodeState", methodName : "capturePattern"}));
	}
	,skip: function(len) {
		this.read(len);
	}
	,prepHuffman: function() {
		if(this.validBits <= 24) {
			if(this.validBits == 0) this.acc = 0;
			do if(this.bytesInSeg == 0 && (this.lastSeg || this.next() == 0)) return; else {
				this.bytesInSeg--;
				var b;
				b = (function($this) {
					var $r;
					$this.inputPosition += 1;
					$r = $this.input.readByte();
					return $r;
				}(this)) << this.validBits;
				this.acc = this.acc + b;
				this.validBits += 8;
			} while(this.validBits <= 24);
		}
	}
	,decode: function(c) {
		var val = this.decodeRaw(c);
		if(c.sparse) val = c.sortedValues[val];
		return val;
	}
	,decodeRaw: function(c) {
		if(this.validBits < 10) this.prepHuffman();
		var i = c.fastHuffman[this.acc & 1023];
		if(i >= 0) {
			var l = c.codewordLengths[i];
			this.acc = this.acc >>> l;
			this.validBits -= l;
			if(this.validBits < 0) {
				this.validBits = 0;
				return -1;
			} else return i;
		} else return this.decodeScalarRaw(c);
	}
	,isLastByte: function() {
		return this.bytesInSeg == 0 && this.lastSeg;
	}
	,finishDecodePacket: function(previousLength,n,r) {
		var left = r.left.start;
		var currentLocValid = false;
		var n2 = n >> 1;
		if(this.firstDecode) {
			this.currentLoc = -n2;
			this.discardSamplesDeferred = n - r.right.end;
			currentLocValid = true;
			this.firstDecode = false;
		} else if(this.discardSamplesDeferred != 0) {
			r.left.start += this.discardSamplesDeferred;
			left = r.left.start;
			this.discardSamplesDeferred = 0;
		} else if(previousLength == 0 && currentLocValid) {
		}
		if(this.lastSegWhich == this.endSegWithKnownLoc) {
			if(currentLocValid && (this.page.flag & 4) != 0) {
				var currentEnd = this.knownLocForPacket - (n - r.right.end);
				if(currentEnd < this.currentLoc + r.right.end) {
					var len;
					if(currentEnd < this.currentLoc) len = 0; else len = currentEnd - this.currentLoc;
					len += r.left.start;
					this.currentLoc += len;
					return { len : len, left : left, right : r.right.start};
				}
			}
			this.currentLoc = this.knownLocForPacket - (n2 - r.left.start);
			currentLocValid = true;
		}
		if(currentLocValid) this.currentLoc += r.right.start - r.left.start;
		return { len : r.right.end, left : left, right : r.right.start};
	}
	,readInt32: function() {
		this.inputPosition += 4;
		return this.input.readInt32();
	}
	,readByte: function() {
		this.inputPosition += 1;
		return this.input.readByte();
	}
	,read: function(n) {
		this.inputPosition += n;
		var vec;
		var this1;
		this1 = new Array(n);
		vec = this1;
		var _g = 0;
		while(_g < n) {
			var i = _g++;
			var val = this.input.readByte();
			vec[i] = val;
		}
		return vec;
	}
	,readBytes: function(n) {
		this.inputPosition += n;
		return this.input.read(n);
	}
	,readString: function(n) {
		this.inputPosition += n;
		return this.input.readString(n);
	}
	,getSampleNumber: function(seekFunc,inputLength) {
		var restoreOffset = this.inputPosition;
		var previousSafe;
		if(_$UInt_UInt_$Impl_$.gte(inputLength,65536) && _$UInt_UInt_$Impl_$.gte(inputLength - 65536,this.firstAudioPageOffset)) previousSafe = inputLength - 65536; else previousSafe = this.firstAudioPageOffset;
		seekFunc(this.inputPosition = previousSafe);
		var end = 0;
		var last = false;
		{
			var _g = this.findPage(seekFunc,inputLength);
			switch(_g[1]) {
			case 0:
				var l = _g[3];
				var e = _g[2];
				end = e;
				last = l;
				break;
			case 1:
				throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.CANT_FIND_LAST_PAGE,null,{ fileName : "VorbisDecodeState.hx", lineNumber : 518, className : "kha.audio2.ogg.vorbis.VorbisDecodeState", methodName : "getSampleNumber"}));
				break;
			}
		}
		var lastPageLoc = this.inputPosition;
		try {
			while(!last) {
				seekFunc(this.inputPosition = end);
				{
					var _g1 = this.findPage(seekFunc,inputLength);
					switch(_g1[1]) {
					case 0:
						var l1 = _g1[3];
						var e1 = _g1[2];
						end = e1;
						last = l1;
						break;
					case 1:
						throw "__break__";
						break;
					}
				}
				previousSafe = lastPageLoc + 1;
				lastPageLoc = this.inputPosition;
			}
		} catch( e ) { if( e != "__break__" ) throw e; }
		seekFunc(this.inputPosition = lastPageLoc);
		var vorbisHeader = this.read(6);
		var lo;
		this.inputPosition += 4;
		lo = this.input.readInt32();
		var hi;
		this.inputPosition += 4;
		hi = this.input.readInt32();
		if(lo == -1 && hi == -1 || hi > 0) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.CANT_FIND_LAST_PAGE,null,{ fileName : "VorbisDecodeState.hx", lineNumber : 552, className : "kha.audio2.ogg.vorbis.VorbisDecodeState", methodName : "getSampleNumber"}));
		this.pLast = new kha_audio2_ogg_vorbis_data_ProbedPage();
		this.pLast.pageStart = lastPageLoc;
		this.pLast.pageEnd = end;
		this.pLast.lastDecodedSample = lo;
		this.pLast.firstDecodedSample = null;
		this.pLast.afterPreviousPageStart = previousSafe;
		seekFunc(this.inputPosition = restoreOffset);
		return lo;
	}
	,forcePageResync: function() {
		this.nextSeg = -1;
	}
	,setInputOffset: function(seekFunc,n) {
		seekFunc(this.inputPosition = n);
	}
	,findPage: function(seekFunc,inputLength) {
		try {
			while(true) {
				var n;
				this.inputPosition += 1;
				n = this.input.readByte();
				if(n == 79) {
					var retryLoc = this.inputPosition;
					if(retryLoc - 25 > inputLength) return kha_audio2_ogg_vorbis__$VorbisDecodeState_FindPageResult.NotFound;
					if((function($this) {
						var $r;
						$this.inputPosition += 1;
						$r = $this.input.readByte();
						return $r;
					}(this)) != 103 || (function($this) {
						var $r;
						$this.inputPosition += 1;
						$r = $this.input.readByte();
						return $r;
					}(this)) != 103 || (function($this) {
						var $r;
						$this.inputPosition += 1;
						$r = $this.input.readByte();
						return $r;
					}(this)) != 83) continue;
					var header;
					var this1;
					this1 = new Array(27);
					header = this1;
					header[0] = 79;
					header[1] = 103;
					header[2] = 103;
					header[3] = 83;
					var _g = 4;
					while(_g < 27) {
						var i = _g++;
						var val;
						this.inputPosition += 1;
						val = this.input.readByte();
						header[i] = val;
					}
					if(header[4] != 0) {
						seekFunc(this.inputPosition = retryLoc);
						continue;
					}
					var goal = header[22] + (header[23] << 8) + (header[24] << 16) + (header[25] << 24);
					var _g1 = 22;
					while(_g1 < 26) {
						var i1 = _g1++;
						header[i1] = 0;
					}
					var crc = 0;
					var _g2 = 0;
					while(_g2 < 27) {
						var i2 = _g2++;
						crc = crc << 8 ^ kha_audio2_ogg_tools_Crc32.table[header[i2] ^ crc >>> 24];
					}
					var len = 0;
					try {
						var _g11 = 0;
						var _g3 = header[26];
						while(_g11 < _g3) {
							var i3 = _g11++;
							var s;
							this.inputPosition += 1;
							s = this.input.readByte();
							crc = crc << 8 ^ kha_audio2_ogg_tools_Crc32.table[s ^ crc >>> 24];
							len += s;
						}
						var _g4 = 0;
						while(_g4 < len) {
							var i4 = _g4++;
							crc = kha_audio2_ogg_tools_Crc32.update(crc,(function($this) {
								var $r;
								$this.inputPosition += 1;
								$r = $this.input.readByte();
								return $r;
							}(this)));
						}
					} catch( e ) {
						if (e instanceof js__$Boot_HaxeError) e = e.val;
						if( js_Boot.__instanceof(e,haxe_io_Eof) ) {
							return kha_audio2_ogg_vorbis__$VorbisDecodeState_FindPageResult.NotFound;
						} else throw(e);
					}
					if(crc == goal) {
						var end = this.inputPosition;
						seekFunc(this.inputPosition = retryLoc - 1);
						return kha_audio2_ogg_vorbis__$VorbisDecodeState_FindPageResult.Found(end,(header[5] & 4) != 0);
					}
				}
			}
		} catch( e1 ) {
			if (e1 instanceof js__$Boot_HaxeError) e1 = e1.val;
			if( js_Boot.__instanceof(e1,haxe_io_Eof) ) {
				return kha_audio2_ogg_vorbis__$VorbisDecodeState_FindPageResult.NotFound;
			} else throw(e1);
		}
	}
	,analyzePage: function(seekFunc,h) {
		var z = new kha_audio2_ogg_vorbis_data_ProbedPage();
		var packetType;
		var this1;
		this1 = new Array(255);
		packetType = this1;
		z.pageStart = this.inputPosition;
		var pageHeader = this.read(27);
		var lacing = this.read(pageHeader[26]);
		var len = 0;
		var _g1 = 0;
		var _g = pageHeader[26];
		while(_g1 < _g) {
			var i1 = _g1++;
			len += lacing[i1];
		}
		z.pageEnd = z.pageStart + 27 + pageHeader[26] + len;
		z.lastDecodedSample = pageHeader[6] + (pageHeader[7] << 8) + (pageHeader[8] << 16) + (pageHeader[9] << 16);
		if((pageHeader[5] & 4) != 0) {
			z.firstDecodedSample = null;
			seekFunc(this.inputPosition = z.pageStart);
			return z;
		}
		var numPacket = 0;
		var packetStart = (pageHeader[5] & 1) == 0;
		var modeCount = h.modes.length;
		var _g11 = 0;
		var _g2 = pageHeader[26];
		while(_g11 < _g2) {
			var i2 = _g11++;
			if(packetStart) {
				if(lacing[i2] == 0) {
					seekFunc(this.inputPosition = z.pageStart);
					return null;
				}
				var n;
				this.inputPosition += 1;
				n = this.input.readByte();
				if((n & 1) != 0) {
					seekFunc(this.inputPosition = z.pageStart);
					return null;
				}
				n >>= 1;
				var b = kha_audio2_ogg_tools_MathTools.ilog(modeCount - 1);
				n &= (1 << b) - 1;
				if(n >= modeCount) {
					seekFunc(this.inputPosition = z.pageStart);
					return null;
				}
				var index = numPacket++;
				packetType[index] = h.modes[n].blockflag;
				this.read(lacing[i2] - 1);
			} else this.read(lacing[i2]);
			packetStart = lacing[i2] < 255;
		}
		var samples = 0;
		if(numPacket > 1) if(packetType[numPacket - 1]) samples += h.blocksize1; else samples += h.blocksize0;
		var i = numPacket - 2;
		while(i >= 1) {
			i--;
			if(packetType[i]) {
				if(packetType[i + 1]) samples += h.blocksize1 >> 1; else samples += (h.blocksize1 - h.blocksize0 >> 2) + (h.blocksize0 >> 1);
			} else samples += h.blocksize0 >> 1;
			i--;
		}
		z.firstDecodedSample = z.lastDecodedSample - samples;
		seekFunc(this.inputPosition = z.pageStart);
		return z;
	}
	,decodeScalarRaw: function(c) {
		this.prepHuffman();
		var codewordLengths = c.codewordLengths;
		var codewords = c.codewords;
		var sortedCodewords = c.sortedCodewords;
		if(c.entries > 8?sortedCodewords != null:codewords != null) {
			var code = kha_audio2_ogg_vorbis_VorbisTools.bitReverse(this.acc);
			var x = 0;
			var n = c.sortedEntries;
			while(n > 1) {
				var m = x + (n >> 1);
				if(_$UInt_UInt_$Impl_$.gte(code,sortedCodewords[m])) {
					x = m;
					n -= n >> 1;
				} else n >>= 1;
			}
			if(!c.sparse) x = c.sortedValues[x];
			var len = codewordLengths[x];
			if(this.validBits >= len) {
				this.acc = this.acc >>> len;
				this.validBits -= len;
				return x;
			}
			this.validBits = 0;
			return -1;
		}
		var _g1 = 0;
		var _g = c.entries;
		while(_g1 < _g) {
			var i = _g1++;
			var cl = codewordLengths[i];
			if(cl == 255) continue;
			if(codewords[i] == (this.acc & (1 << cl) - 1)) {
				if(this.validBits >= cl) {
					this.acc = this.acc >>> cl;
					this.validBits -= cl;
					return i;
				}
				this.validBits = 0;
				return -1;
			}
		}
		this.error = new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_STREAM,null,{ fileName : "VorbisDecodeState.hx", lineNumber : 846, className : "kha.audio2.ogg.vorbis.VorbisDecodeState", methodName : "decodeScalarRaw"});
		this.validBits = 0;
		return -1;
	}
	,__class__: kha_audio2_ogg_vorbis_VorbisDecodeState
};
var kha_audio2_ogg_vorbis__$VorbisDecodeState_FindPageResult = $hxClasses["kha.audio2.ogg.vorbis._VorbisDecodeState.FindPageResult"] = { __ename__ : ["kha","audio2","ogg","vorbis","_VorbisDecodeState","FindPageResult"], __constructs__ : ["Found","NotFound"] };
kha_audio2_ogg_vorbis__$VorbisDecodeState_FindPageResult.Found = function(end,last) { var $x = ["Found",0,end,last]; $x.__enum__ = kha_audio2_ogg_vorbis__$VorbisDecodeState_FindPageResult; $x.toString = $estr; return $x; };
kha_audio2_ogg_vorbis__$VorbisDecodeState_FindPageResult.NotFound = ["NotFound",1];
kha_audio2_ogg_vorbis__$VorbisDecodeState_FindPageResult.NotFound.toString = $estr;
kha_audio2_ogg_vorbis__$VorbisDecodeState_FindPageResult.NotFound.__enum__ = kha_audio2_ogg_vorbis__$VorbisDecodeState_FindPageResult;
var kha_audio2_ogg_vorbis_VorbisDecoder = function(header,decodeState) {
	this.header = header;
	this.decodeState = decodeState;
	this.totalSample = null;
	this.currentSample = 0;
	this.previousLength = 0;
	var this1;
	this1 = new Array(header.channel);
	this.channelBuffers = this1;
	var this2;
	this2 = new Array(header.channel);
	this.previousWindow = this2;
	var this3;
	this3 = new Array(header.channel);
	this.finalY = this3;
	var _g1 = 0;
	var _g = header.channel;
	while(_g1 < _g) {
		var i = _g1++;
		var val = kha_audio2_ogg_vorbis_VorbisTools.emptyFloatVector(header.blocksize1);
		this.channelBuffers[i] = val;
		var val1 = kha_audio2_ogg_vorbis_VorbisTools.emptyFloatVector(header.blocksize1 / 2 | 0);
		this.previousWindow[i] = val1;
		var val2 = [];
		this.finalY[i] = val2;
	}
	var this4;
	this4 = new Array(2);
	this.a = this4;
	var this5;
	this5 = new Array(2);
	this.b = this5;
	var this6;
	this6 = new Array(2);
	this.c = this6;
	var this7;
	this7 = new Array(2);
	this.window = this7;
	var this8;
	this8 = new Array(2);
	this.bitReverseData = this8;
	this.initBlocksize(0,header.blocksize0);
	this.initBlocksize(1,header.blocksize1);
};
$hxClasses["kha.audio2.ogg.vorbis.VorbisDecoder"] = kha_audio2_ogg_vorbis_VorbisDecoder;
kha_audio2_ogg_vorbis_VorbisDecoder.__name__ = ["kha","audio2","ogg","vorbis","VorbisDecoder"];
kha_audio2_ogg_vorbis_VorbisDecoder.start = function(input) {
	var decodeState = new kha_audio2_ogg_vorbis_VorbisDecodeState(input);
	var header = kha_audio2_ogg_vorbis_data_Header.read(decodeState);
	var decoder = new kha_audio2_ogg_vorbis_VorbisDecoder(header,decodeState);
	decodeState.startFirstDecode();
	decoder.pumpFirstFrame();
	return decoder;
};
kha_audio2_ogg_vorbis_VorbisDecoder.prototype = {
	read: function(output,samples,channels,sampleRate,useFloat) {
		if((function($this) {
			var $r;
			var a = Std["int"](_$UInt_UInt_$Impl_$.toFloat(sampleRate) % _$UInt_UInt_$Impl_$.toFloat($this.header.sampleRate));
			$r = a != 0;
			return $r;
		}(this))) throw new js__$Boot_HaxeError("Unsupported sampleRate : can't convert " + Std.string(_$UInt_UInt_$Impl_$.toFloat(this.header.sampleRate)) + " to " + sampleRate);
		if(channels % this.header.channel != 0) throw new js__$Boot_HaxeError("Unsupported channels : can't convert " + this.header.channel + " to " + channels);
		var sampleRepeat = Std["int"](_$UInt_UInt_$Impl_$.toFloat(sampleRate) / _$UInt_UInt_$Impl_$.toFloat(this.header.sampleRate));
		var channelRepeat = channels / this.header.channel | 0;
		var n = 0;
		var len = Math.floor(samples / sampleRepeat);
		if(this.totalSample != null && len > this.totalSample - this.currentSample) len = this.totalSample - this.currentSample;
		var index = 0;
		while(n < len) {
			var k = this.channelBufferEnd - this.channelBufferStart;
			if(k >= len - n) k = len - n;
			var _g1 = this.channelBufferStart;
			var _g = this.channelBufferStart + k;
			while(_g1 < _g) {
				var j = _g1++;
				var _g2 = 0;
				while(_g2 < sampleRepeat) {
					var sr = _g2++;
					var _g4 = 0;
					var _g3 = this.header.channel;
					while(_g4 < _g3) {
						var i = _g4++;
						var _g5 = 0;
						while(_g5 < channelRepeat) {
							var cr = _g5++;
							var value = this.channelBuffers[i][j];
							if(value > 1) value = 1; else if(value < -1) value = -1;
							if(useFloat) {
								output[index] = value;
								++index;
							} else {
							}
						}
					}
				}
			}
			n += k;
			this.channelBufferStart += k;
			if(n == len || this.getFrameFloat() == 0) break;
		}
		var _g6 = n;
		while(_g6 < len) {
			var j1 = _g6++;
			var _g11 = 0;
			while(_g11 < sampleRepeat) {
				var sr1 = _g11++;
				var _g31 = 0;
				var _g21 = this.header.channel;
				while(_g31 < _g21) {
					var i1 = _g31++;
					var _g41 = 0;
					while(_g41 < channelRepeat) {
						var cr1 = _g41++;
						if(useFloat) {
							output[index] = 0;
							++index;
						} else {
						}
					}
				}
			}
		}
		this.currentSample += len;
		return len * sampleRepeat;
	}
	,skipSamples: function(len) {
		var n = 0;
		if(this.totalSample != null && len > this.totalSample - this.currentSample) len = this.totalSample - this.currentSample;
		while(n < len) {
			var k = this.channelBufferEnd - this.channelBufferStart;
			if(k >= len - n) k = len - n;
			n += k;
			this.channelBufferStart += k;
			if(n == len || this.getFrameFloat() == 0) break;
		}
		this.currentSample += len;
		return len;
	}
	,setupSampleNumber: function(seekFunc,inputLength) {
		if(this.totalSample == null) this.totalSample = this.decodeState.getSampleNumber(seekFunc,inputLength);
	}
	,seek: function(seekFunc,inputLength,sampleNumber) {
		if(this.currentSample == sampleNumber) return;
		if(this.totalSample == null) {
			this.setupSampleNumber(seekFunc,inputLength);
			if(this.totalSample == 0) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.CANT_FIND_LAST_PAGE,null,{ fileName : "VorbisDecoder.hx", lineNumber : 187, className : "kha.audio2.ogg.vorbis.VorbisDecoder", methodName : "seek"}));
		}
		if(sampleNumber < 0) sampleNumber = 0;
		var p0 = this.decodeState.pFirst;
		var p1 = this.decodeState.pLast;
		if(sampleNumber >= p1.lastDecodedSample) sampleNumber = p1.lastDecodedSample - 1;
		if(sampleNumber < p0.lastDecodedSample) this.seekFrameFromPage(seekFunc,p0.pageStart,0,sampleNumber); else {
			var attempts = 0;
			while(p0.pageEnd < p1.pageStart) {
				var startOffset = p0.pageEnd;
				var endOffset = p1.afterPreviousPageStart;
				var startSample = p0.lastDecodedSample;
				var endSample = p1.lastDecodedSample;
				if(startSample == null || endSample == null) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.SEEK_FAILED,null,{ fileName : "VorbisDecoder.hx", lineNumber : 219, className : "kha.audio2.ogg.vorbis.VorbisDecoder", methodName : "seek"}));
				if(_$UInt_UInt_$Impl_$.gt(endOffset,startOffset + 4000)) endOffset = endOffset - 4000;
				var probe;
				var b = Math.floor(_$UInt_UInt_$Impl_$.toFloat(endOffset - startOffset) / _$UInt_UInt_$Impl_$.toFloat(endSample - startSample) * (sampleNumber - startSample));
				probe = startOffset + b;
				if(attempts >= 4) {
					var probe2 = startOffset + (endOffset - startOffset >>> 1);
					if(attempts >= 8) probe = probe2; else if(_$UInt_UInt_$Impl_$.gt(probe2,probe)) probe = probe + (probe2 - probe >>> 1); else probe = probe2 + (probe - probe2 >>> 1);
				}
				++attempts;
				seekFunc(this.decodeState.inputPosition = probe);
				{
					var _g = this.decodeState.findPage(seekFunc,inputLength);
					switch(_g[1]) {
					case 1:
						throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.SEEK_FAILED,null,{ fileName : "VorbisDecoder.hx", lineNumber : 249, className : "kha.audio2.ogg.vorbis.VorbisDecoder", methodName : "seek"}));
						break;
					case 0:
						break;
					}
				}
				var q = this.decodeState.analyzePage(seekFunc,this.header);
				if(q == null) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.SEEK_FAILED,null,{ fileName : "VorbisDecoder.hx", lineNumber : 255, className : "kha.audio2.ogg.vorbis.VorbisDecoder", methodName : "seek"}));
				q.afterPreviousPageStart = probe;
				if(q.pageStart == p1.pageStart) {
					p1 = q;
					continue;
				}
				if(sampleNumber < q.lastDecodedSample) p1 = q; else p0 = q;
			}
			if(p0.lastDecodedSample <= sampleNumber && sampleNumber < p1.lastDecodedSample) this.seekFrameFromPage(seekFunc,p1.pageStart,p0.lastDecodedSample,sampleNumber); else throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.SEEK_FAILED,null,{ fileName : "VorbisDecoder.hx", lineNumber : 275, className : "kha.audio2.ogg.vorbis.VorbisDecoder", methodName : "seek"}));
		}
	}
	,seekFrameFromPage: function(seekFunc,pageStart,firstSample,targetSample) {
		var frame = 0;
		var frameStart = firstSample;
		seekFunc(this.decodeState.inputPosition = pageStart);
		this.decodeState.nextSeg = -1;
		var leftEnd = 0;
		var leftStart = 0;
		var prevState = null;
		var lastState = null;
		while(true) {
			prevState = lastState;
			lastState = this.decodeState.clone(seekFunc);
			var initialResult = this.decodeInitial();
			if(initialResult == null) {
				lastState = prevState;
				break;
			}
			leftStart = initialResult.left.start;
			leftEnd = initialResult.left.end;
			var start;
			if(frame == 0) start = leftEnd; else start = leftStart;
			if(targetSample < frameStart + initialResult.right.start - start) break;
			this.decodeState.flushPacket();
			frameStart += initialResult.right.start - start;
			++frame;
		}
		this.decodeState = lastState;
		seekFunc(this.decodeState.inputPosition);
		this.previousLength = 0;
		this.pumpFirstFrame();
		this.currentSample = frameStart;
		this.skipSamples(targetSample - frameStart);
	}
	,clone: function(seekFunc) {
		var decoder = Type.createEmptyInstance(kha_audio2_ogg_vorbis_VorbisDecoder);
		decoder.currentSample = this.currentSample;
		decoder.totalSample = this.totalSample;
		decoder.previousLength = this.previousLength;
		decoder.channelBufferStart = this.channelBufferStart;
		decoder.channelBufferEnd = this.channelBufferEnd;
		decoder.a = this.a;
		decoder.b = this.b;
		decoder.c = this.c;
		decoder.window = this.window;
		decoder.bitReverseData = this.bitReverseData;
		decoder.header = this.header;
		decoder.decodeState = this.decodeState.clone(seekFunc);
		var this1;
		this1 = new Array(this.header.channel);
		decoder.channelBuffers = this1;
		var this2;
		this2 = new Array(this.header.channel);
		decoder.previousWindow = this2;
		var this3;
		this3 = new Array(this.header.channel);
		decoder.finalY = this3;
		var _g1 = 0;
		var _g = this.header.channel;
		while(_g1 < _g) {
			var i = _g1++;
			var val = kha_audio2_ogg_vorbis_VorbisTools.copyVector(this.channelBuffers[i]);
			decoder.channelBuffers[i] = val;
			var val1 = kha_audio2_ogg_vorbis_VorbisTools.copyVector(this.previousWindow[i]);
			decoder.previousWindow[i] = val1;
			var val2 = Lambda.array(this.finalY[i]);
			decoder.finalY[i] = val2;
		}
		return decoder;
	}
	,ensurePosition: function(seekFunc) {
		seekFunc(this.decodeState.inputPosition);
	}
	,getFrameFloat: function() {
		var result = this.decodePacket();
		if(result == null) {
			this.channelBufferStart = this.channelBufferEnd = 0;
			return 0;
		}
		var len = this.finishFrame(result);
		this.channelBufferStart = result.left;
		this.channelBufferEnd = result.left + len;
		return len;
	}
	,pumpFirstFrame: function() {
		this.finishFrame(this.decodePacket());
	}
	,finishFrame: function(r) {
		var len = r.len;
		var right = r.right;
		var left = r.left;
		if(this.previousLength != 0) {
			var n = this.previousLength;
			var w = this.getWindow(n);
			var _g1 = 0;
			var _g = this.header.channel;
			while(_g1 < _g) {
				var i = _g1++;
				var cb = this.channelBuffers[i];
				var pw = this.previousWindow[i];
				var _g2 = 0;
				while(_g2 < n) {
					var j = _g2++;
					cb[left + j] = cb[left + j] * w[j] + pw[j] * w[n - 1 - j];
				}
			}
		}
		var prev = this.previousLength;
		this.previousLength = len - right;
		var _g11 = 0;
		var _g3 = this.header.channel;
		while(_g11 < _g3) {
			var i1 = _g11++;
			var pw1 = this.previousWindow[i1];
			var cb1 = this.channelBuffers[i1];
			var _g31 = 0;
			var _g21 = len - right;
			while(_g31 < _g21) {
				var j1 = _g31++;
				pw1[j1] = cb1[right + j1];
			}
		}
		if(prev == 0) return 0;
		if(len < right) right = len;
		return right - left;
	}
	,getWindow: function(len) {
		len <<= 1;
		if(len == this.header.blocksize0) return this.window[0]; else if(len == this.header.blocksize1) return this.window[1]; else return null;
	}
	,initBlocksize: function(bs,n) {
		var n2 = n >> 1;
		var n4 = n >> 2;
		var n8 = n >> 3;
		var val;
		var this1;
		this1 = new Array(n2);
		val = this1;
		this.a[bs] = val;
		var val1;
		var this2;
		this2 = new Array(n2);
		val1 = this2;
		this.b[bs] = val1;
		var val2;
		var this3;
		this3 = new Array(n4);
		val2 = this3;
		this.c[bs] = val2;
		var val3;
		var this4;
		this4 = new Array(n2);
		val3 = this4;
		this.window[bs] = val3;
		var val4;
		var this5;
		this5 = new Array(n8);
		val4 = this5;
		this.bitReverseData[bs] = val4;
		kha_audio2_ogg_vorbis_VorbisTools.computeTwiddleFactors(n,this.a[bs],this.b[bs],this.c[bs]);
		kha_audio2_ogg_vorbis_VorbisTools.computeWindow(n,this.window[bs]);
		kha_audio2_ogg_vorbis_VorbisTools.computeBitReverse(n,this.bitReverseData[bs]);
	}
	,inverseMdct: function(buffer,n,blocktype) {
		var bt;
		if(blocktype) bt = 1; else bt = 0;
		kha_audio2_ogg_tools_Mdct.inverseTransform(buffer,n,this.a[bt],this.b[bt],this.c[bt],this.bitReverseData[bt]);
	}
	,decodePacket: function() {
		var result = this.decodeInitial();
		if(result == null) return null;
		var rest = this.decodePacketRest(result);
		return rest;
	}
	,decodeInitial: function() {
		this.channelBufferStart = this.channelBufferEnd = 0;
		do {
			if(!this.decodeState.maybeStartPacket()) return null;
			if(this.decodeState.readBits(1) != 0) {
				while(-1 != this.decodeState.readPacket()) {
				}
				continue;
			}
			break;
		} while(true);
		var i = this.decodeState.readBits(kha_audio2_ogg_tools_MathTools.ilog(this.header.modes.length - 1));
		if(i == -1 || i >= this.header.modes.length) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.SEEK_FAILED,null,{ fileName : "VorbisDecoder.hx", lineNumber : 519, className : "kha.audio2.ogg.vorbis.VorbisDecoder", methodName : "decodeInitial"}));
		var m = this.header.modes[i];
		var n;
		var prev;
		var next;
		if(m.blockflag) {
			n = this.header.blocksize1;
			prev = this.decodeState.readBits(1);
			next = this.decodeState.readBits(1);
		} else {
			prev = next = 0;
			n = this.header.blocksize0;
		}
		var windowCenter = n >> 1;
		return { mode : i, left : m.blockflag && prev == 0?{ start : n - this.header.blocksize0 >> 2, end : n + this.header.blocksize0 >> 2}:{ start : 0, end : windowCenter}, right : m.blockflag && next == 0?{ start : n * 3 - this.header.blocksize0 >> 2, end : n * 3 + this.header.blocksize0 >> 2}:{ start : windowCenter, end : n}};
	}
	,decodePacketRest: function(r) {
		var len = 0;
		var m = this.header.modes[r.mode];
		var zeroChannel;
		var this1;
		this1 = new Array(256);
		zeroChannel = this1;
		var reallyZeroChannel;
		var this2;
		this2 = new Array(256);
		reallyZeroChannel = this2;
		var n;
		if(m.blockflag) n = this.header.blocksize1; else n = this.header.blocksize0;
		var map = this.header.mapping[m.mapping];
		var n2 = n >> 1;
		var rangeList = [256,128,86,64];
		var codebooks = this.header.codebooks;
		var _g1 = 0;
		var _g = this.header.channel;
		while(_g1 < _g) {
			var i1 = _g1++;
			var s = map.chan[i1].mux;
			zeroChannel[i1] = false;
			var floor = this.header.floorConfig[map.submapFloor[s]];
			if(floor.type == 0) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_STREAM,null,{ fileName : "VorbisDecoder.hx", lineNumber : 581, className : "kha.audio2.ogg.vorbis.VorbisDecoder", methodName : "decodePacketRest"})); else {
				var g = floor.floor1;
				if(this.decodeState.readBits(1) != 0) {
					var fy = [];
					var step2Flag;
					var this3;
					this3 = new Array(256);
					step2Flag = this3;
					var range = rangeList[g.floor1Multiplier - 1];
					var offset = 2;
					fy = this.finalY[i1];
					fy[0] = this.decodeState.readBits(kha_audio2_ogg_tools_MathTools.ilog(range) - 1);
					fy[1] = this.decodeState.readBits(kha_audio2_ogg_tools_MathTools.ilog(range) - 1);
					var _g3 = 0;
					var _g2 = g.partitions;
					while(_g3 < _g2) {
						var j = _g3++;
						var pclass = g.partitionClassList[j];
						var cdim = g.classDimensions[pclass];
						var cbits = g.classSubclasses[pclass];
						var csub = (1 << cbits) - 1;
						var cval = 0;
						if(cbits != 0) {
							var c = codebooks[g.classMasterbooks[pclass]];
							cval = this.decodeState.decode(c);
						}
						var books = g.subclassBooks[pclass];
						var _g4 = 0;
						while(_g4 < cdim) {
							var k = _g4++;
							var book = books[cval & csub];
							cval >>= cbits;
							if(book >= 0) fy[offset++] = this.decodeState.decode(codebooks[book]); else fy[offset++] = 0;
						}
					}
					if(this.decodeState.validBits == -1) {
						zeroChannel[i1] = true;
						continue;
					}
					var val = step2Flag[1] = true;
					step2Flag[0] = val;
					var naighbors = g.neighbors;
					var xlist = g.xlist;
					var _g31 = 2;
					var _g21 = g.values;
					while(_g31 < _g21) {
						var j1 = _g31++;
						var low = naighbors[j1][0];
						var high = naighbors[j1][1];
						var lowroom = kha_audio2_ogg_vorbis_VorbisTools.predictPoint(xlist[j1],xlist[low],xlist[high],fy[low],fy[high]);
						var val1 = fy[j1];
						var highroom = range - lowroom;
						var room;
						if(highroom < lowroom) room = highroom * 2; else room = lowroom * 2;
						if(val1 != 0) {
							var val2 = step2Flag[high] = true;
							step2Flag[low] = val2;
							step2Flag[j1] = true;
							if(val1 >= room) {
								if(highroom > lowroom) fy[j1] = val1 - lowroom + lowroom; else fy[j1] = lowroom - val1 + highroom - 1;
							} else if((val1 & 1) != 0) fy[j1] = lowroom - (val1 + 1 >> 1); else fy[j1] = lowroom + (val1 >> 1);
						} else {
							step2Flag[j1] = false;
							fy[j1] = lowroom;
						}
					}
					var _g32 = 0;
					var _g22 = g.values;
					while(_g32 < _g22) {
						var j2 = _g32++;
						if(!step2Flag[j2]) fy[j2] = -1;
					}
				} else zeroChannel[i1] = true;
			}
		}
		var _g11 = 0;
		var _g5 = this.header.channel;
		while(_g11 < _g5) {
			var i2 = _g11++;
			reallyZeroChannel[i2] = zeroChannel[i2];
		}
		var _g12 = 0;
		var _g6 = map.couplingSteps;
		while(_g12 < _g6) {
			var i3 = _g12++;
			if(!zeroChannel[map.chan[i3].magnitude] || !zeroChannel[map.chan[i3].angle]) {
				var val3 = zeroChannel[map.chan[i3].angle] = false;
				zeroChannel[map.chan[i3].magnitude] = val3;
			}
		}
		var _g13 = 0;
		var _g7 = map.submaps;
		while(_g13 < _g7) {
			var i4 = _g13++;
			var residueBuffers;
			var this4;
			this4 = new Array(this.header.channel);
			residueBuffers = this4;
			var doNotDecode;
			var this5;
			this5 = new Array(256);
			doNotDecode = this5;
			var ch = 0;
			var _g33 = 0;
			var _g23 = this.header.channel;
			while(_g33 < _g23) {
				var j3 = _g33++;
				if(map.chan[j3].mux == i4) {
					if(zeroChannel[j3]) {
						doNotDecode[ch] = true;
						residueBuffers[ch] = null;
					} else {
						doNotDecode[ch] = false;
						residueBuffers[ch] = this.channelBuffers[j3];
					}
					++ch;
				}
			}
			var r1 = map.submapResidue[i4];
			var residue = this.header.residueConfig[r1];
			residue.decode(this.decodeState,this.header,residueBuffers,ch,n2,doNotDecode,this.channelBuffers);
		}
		var i = map.couplingSteps;
		var n21 = n >> 1;
		while(--i >= 0) {
			var m1 = this.channelBuffers[map.chan[i].magnitude];
			var a = this.channelBuffers[map.chan[i].angle];
			var _g8 = 0;
			while(_g8 < n21) {
				var j4 = _g8++;
				var a2;
				var m2;
				if(m1[j4] > 0) {
					if(a[j4] > 0) {
						m2 = m1[j4];
						a2 = m1[j4] - a[j4];
					} else {
						a2 = m1[j4];
						m2 = m1[j4] + a[j4];
					}
				} else if(a[j4] > 0) {
					m2 = m1[j4];
					a2 = m1[j4] + a[j4];
				} else {
					a2 = m1[j4];
					m2 = m1[j4] - a[j4];
				}
				m1[j4] = m2;
				a[j4] = a2;
			}
		}
		var _g14 = 0;
		var _g9 = this.header.channel;
		while(_g14 < _g9) {
			var i5 = _g14++;
			if(reallyZeroChannel[i5]) {
				var _g24 = 0;
				while(_g24 < n21) {
					var j5 = _g24++;
					this.channelBuffers[i5][j5] = 0;
				}
			} else map.doFloor(this.header.floorConfig,i5,n,this.channelBuffers[i5],this.finalY[i5],null);
		}
		var _g15 = 0;
		var _g10 = this.header.channel;
		while(_g15 < _g10) {
			var i6 = _g15++;
			this.inverseMdct(this.channelBuffers[i6],n,m.blockflag);
		}
		this.decodeState.flushPacket();
		return this.decodeState.finishDecodePacket(this.previousLength,n,r);
	}
	,__class__: kha_audio2_ogg_vorbis_VorbisDecoder
};
var kha_audio2_ogg_vorbis_VorbisTools = function() { };
$hxClasses["kha.audio2.ogg.vorbis.VorbisTools"] = kha_audio2_ogg_vorbis_VorbisTools;
kha_audio2_ogg_vorbis_VorbisTools.__name__ = ["kha","audio2","ogg","vorbis","VorbisTools"];
kha_audio2_ogg_vorbis_VorbisTools.assert = function(b,p) {
};
kha_audio2_ogg_vorbis_VorbisTools.neighbors = function(x,n) {
	var low = -1;
	var high = 65536;
	var plow = 0;
	var phigh = 0;
	var _g = 0;
	while(_g < n) {
		var i = _g++;
		if(x[i] > low && x[i] < x[n]) {
			plow = i;
			low = x[i];
		}
		if(x[i] < high && x[i] > x[n]) {
			phigh = i;
			high = x[i];
		}
	}
	return { low : plow, high : phigh};
};
kha_audio2_ogg_vorbis_VorbisTools.floatUnpack = function(x) {
	var mantissa = _$UInt_UInt_$Impl_$.toFloat(x & 2097151);
	var sign = x & -2147483648;
	var exp = (x & 2145386496) >>> 21;
	var res;
	if(sign != 0) res = -mantissa; else res = mantissa;
	return res * Math.pow(2,exp - 788);
};
kha_audio2_ogg_vorbis_VorbisTools.bitReverse = function(n) {
	n = (n & -1431655766) >>> 1 | (n & 1431655765) << 1;
	n = (n & -858993460) >>> 2 | (n & 858993459) << 2;
	n = (n & -252645136) >>> 4 | (n & 252645135) << 4;
	n = (n & -16711936) >>> 8 | (n & 16711935) << 8;
	return n >>> 16 | n << 16;
};
kha_audio2_ogg_vorbis_VorbisTools.pointCompare = function(a,b) {
	if(a.x < b.x) return -1; else if(a.x > b.x) return 1; else return 0;
};
kha_audio2_ogg_vorbis_VorbisTools.uintAsc = function(a,b) {
	if(_$UInt_UInt_$Impl_$.gt(b,a)) return -1; else if(a == b) return 0; else return 1;
};
kha_audio2_ogg_vorbis_VorbisTools.lookup1Values = function(entries,dim) {
	var r = Std["int"](Math.exp(Math.log(entries) / dim));
	if(Std["int"](Math.pow(r + 1,dim)) <= entries) r++;
	kha_audio2_ogg_vorbis_VorbisTools.assert(Math.pow(r + 1,dim) > entries,{ fileName : "VorbisTools.hx", lineNumber : 155, className : "kha.audio2.ogg.vorbis.VorbisTools", methodName : "lookup1Values"});
	kha_audio2_ogg_vorbis_VorbisTools.assert(Std["int"](Math.pow(r,dim)) <= entries,{ fileName : "VorbisTools.hx", lineNumber : 156, className : "kha.audio2.ogg.vorbis.VorbisTools", methodName : "lookup1Values"});
	return r;
};
kha_audio2_ogg_vorbis_VorbisTools.computeWindow = function(n,window) {
	var n2 = n >> 1;
	var _g = 0;
	while(_g < n2) {
		var i = _g++;
		var val = Math.sin(1.57079632679489656 * kha_audio2_ogg_vorbis_VorbisTools.square(Math.sin((i + 0.5) / n2 * 0.5 * 3.14159265358979323846264)));
		window[i] = val;
	}
};
kha_audio2_ogg_vorbis_VorbisTools.square = function(f) {
	return f * f;
};
kha_audio2_ogg_vorbis_VorbisTools.computeBitReverse = function(n,rev) {
	var ld = kha_audio2_ogg_tools_MathTools.ilog(n) - 1;
	var n8 = n >> 3;
	var _g = 0;
	while(_g < n8) {
		var i = _g++;
		var val;
		var a;
		var a1 = kha_audio2_ogg_vorbis_VorbisTools.bitReverse(i);
		a = a1 >>> 32 - ld + 3;
		val = a << 2;
		rev[i] = val;
	}
};
kha_audio2_ogg_vorbis_VorbisTools.computeTwiddleFactors = function(n,af,bf,cf) {
	var n4 = n >> 2;
	var n8 = n >> 3;
	var k2 = 0;
	var _g = 0;
	while(_g < n4) {
		var k = _g++;
		var val = Math.cos(4 * k * 3.14159265358979323846264 / n);
		af[k2] = val;
		var val1 = -Math.sin(4 * k * 3.14159265358979323846264 / n);
		af[k2 + 1] = val1;
		var val2 = Math.cos((k2 + 1) * 3.14159265358979323846264 / n / 2) * 0.5;
		bf[k2] = val2;
		var val3 = Math.sin((k2 + 1) * 3.14159265358979323846264 / n / 2) * 0.5;
		bf[k2 + 1] = val3;
		k2 += 2;
	}
	var k21 = 0;
	var _g1 = 0;
	while(_g1 < n8) {
		var k1 = _g1++;
		var val4 = Math.cos(2 * (k21 + 1) * 3.14159265358979323846264 / n);
		cf[k21] = val4;
		var val5 = -Math.sin(2 * (k21 + 1) * 3.14159265358979323846264 / n);
		cf[k21 + 1] = val5;
		k21 += 2;
	}
};
kha_audio2_ogg_vorbis_VorbisTools.drawLine = function(output,x0,y0,x1,y1,n) {
	if(kha_audio2_ogg_vorbis_VorbisTools.integerDivideTable == null) {
		var this1;
		this1 = new Array(32);
		kha_audio2_ogg_vorbis_VorbisTools.integerDivideTable = this1;
		var _g = 0;
		while(_g < 32) {
			var i = _g++;
			var val;
			var this2;
			this2 = new Array(64);
			val = this2;
			kha_audio2_ogg_vorbis_VorbisTools.integerDivideTable[i] = val;
			var _g1 = 1;
			while(_g1 < 64) {
				var j = _g1++;
				kha_audio2_ogg_vorbis_VorbisTools.integerDivideTable[i][j] = i / j | 0;
			}
		}
	}
	var dy = y1 - y0;
	var adx = x1 - x0;
	var ady;
	if(dy < 0) ady = -dy; else ady = dy;
	var base;
	var x = x0;
	var y = y0;
	var err = 0;
	var sy;
	if(adx < 64 && ady < 32) {
		if(dy < 0) {
			base = -kha_audio2_ogg_vorbis_VorbisTools.integerDivideTable[ady][adx];
			sy = base - 1;
		} else {
			base = kha_audio2_ogg_vorbis_VorbisTools.integerDivideTable[ady][adx];
			sy = base + 1;
		}
	} else {
		base = dy / adx | 0;
		if(dy < 0) sy = base - 1; else sy = base + 1;
	}
	ady -= (base < 0?-base:base) * adx;
	if(x1 > n) x1 = n;
	var _g2 = x;
	output[_g2] = output[_g2] * kha_audio2_ogg_vorbis_VorbisTools.INVERSE_DB_TABLE[y];
	var _g3 = x + 1;
	while(_g3 < x1) {
		var i1 = _g3++;
		err += ady;
		if(err >= adx) {
			err -= adx;
			y += sy;
		} else y += base;
		var _g11 = i1;
		output[_g11] = output[_g11] * kha_audio2_ogg_vorbis_VorbisTools.INVERSE_DB_TABLE[y];
	}
};
kha_audio2_ogg_vorbis_VorbisTools.predictPoint = function(x,x0,x1,y0,y1) {
	var dy = y1 - y0;
	var adx = x1 - x0;
	var err = Math.abs(dy) * (x - x0);
	var off = err / adx | 0;
	if(dy < 0) return y0 - off; else return y0 + off;
};
kha_audio2_ogg_vorbis_VorbisTools.emptyFloatVector = function(len) {
	var vec;
	var this1;
	this1 = new Array(len);
	vec = this1;
	return vec;
};
kha_audio2_ogg_vorbis_VorbisTools.copyVector = function(source) {
	var dest;
	var this1;
	this1 = new Array(source.length);
	dest = this1;
	var _g1 = 0;
	var _g = source.length;
	while(_g1 < _g) {
		var i = _g1++;
		dest[i] = source[i];
	}
	return dest;
};
var kha_audio2_ogg_vorbis_data_Codebook = function() {
};
$hxClasses["kha.audio2.ogg.vorbis.data.Codebook"] = kha_audio2_ogg_vorbis_data_Codebook;
kha_audio2_ogg_vorbis_data_Codebook.__name__ = ["kha","audio2","ogg","vorbis","data","Codebook"];
kha_audio2_ogg_vorbis_data_Codebook.read = function(decodeState) {
	var c = new kha_audio2_ogg_vorbis_data_Codebook();
	if(decodeState.readBits(8) != 66 || decodeState.readBits(8) != 67 || decodeState.readBits(8) != 86) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,null,{ fileName : "Codebook.hx", lineNumber : 40, className : "kha.audio2.ogg.vorbis.data.Codebook", methodName : "read"}));
	var x = decodeState.readBits(8);
	c.dimensions = (decodeState.readBits(8) << 8) + x;
	var x1 = decodeState.readBits(8);
	var y = decodeState.readBits(8);
	c.entries = (decodeState.readBits(8) << 16) + (y << 8) + x1;
	var ordered = decodeState.readBits(1);
	if(ordered != 0) c.sparse = false; else c.sparse = decodeState.readBits(1) != 0;
	var lengths;
	var this1;
	this1 = new Array(c.entries);
	lengths = this1;
	if(!c.sparse) c.codewordLengths = lengths;
	var total = 0;
	if(ordered != 0) {
		var currentEntry = 0;
		var currentLength = decodeState.readBits(5) + 1;
		while(currentEntry < c.entries) {
			var limit = c.entries - currentEntry;
			var n = decodeState.readBits(kha_audio2_ogg_tools_MathTools.ilog(limit));
			if(currentEntry + n > c.entries) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,"codebook entrys",{ fileName : "Codebook.hx", lineNumber : 67, className : "kha.audio2.ogg.vorbis.data.Codebook", methodName : "read"}));
			var _g = 0;
			while(_g < n) {
				var i = _g++;
				lengths[currentEntry + i] = currentLength;
			}
			currentEntry += n;
			currentLength++;
		}
	} else {
		var _g1 = 0;
		var _g2 = c.entries;
		while(_g1 < _g2) {
			var j = _g1++;
			var present;
			if(c.sparse) present = decodeState.readBits(1); else present = 1;
			if(present != 0) {
				var val = decodeState.readBits(5) + 1;
				lengths[j] = val;
				total++;
			} else lengths[j] = 255;
		}
	}
	if(c.sparse && total >= c.entries >> 2) {
		c.codewordLengths = lengths;
		c.sparse = false;
	}
	if(c.sparse) c.sortedEntries = total; else {
		var sortedCount = 0;
		var _g11 = 0;
		var _g3 = c.entries;
		while(_g11 < _g3) {
			var j1 = _g11++;
			var l = lengths[j1];
			if(l > 10 && l != 255) ++sortedCount;
		}
		c.sortedEntries = sortedCount;
	}
	var values = null;
	if(!c.sparse) {
		var this2;
		this2 = new Array(c.entries);
		c.codewords = this2;
	} else {
		if(c.sortedEntries != 0) {
			var this3;
			this3 = new Array(c.sortedEntries);
			c.codewordLengths = this3;
			var this4;
			this4 = new Array(c.entries);
			c.codewords = this4;
			var this5;
			this5 = new Array(c.entries);
			values = this5;
		}
		var size = c.entries + 64 * c.sortedEntries;
	}
	if(!c.computeCodewords(lengths,c.entries,values)) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,"compute codewords",{ fileName : "Codebook.hx", lineNumber : 120, className : "kha.audio2.ogg.vorbis.data.Codebook", methodName : "read"}));
	if(c.sortedEntries != 0) {
		c.sortedCodewords = [];
		var this6;
		this6 = new Array(c.sortedEntries);
		c.sortedValues = this6;
		c.computeSortedHuffman(lengths,values);
	}
	if(c.sparse) {
		values = null;
		c.codewords = null;
		lengths = null;
	}
	c.computeAcceleratedHuffman();
	c.lookupType = decodeState.readBits(4);
	if(c.lookupType > 2) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,"codebook lookup type",{ fileName : "Codebook.hx", lineNumber : 143, className : "kha.audio2.ogg.vorbis.data.Codebook", methodName : "read"}));
	if(c.lookupType > 0) {
		c.minimumValue = kha_audio2_ogg_vorbis_VorbisTools.floatUnpack(decodeState.readBits(32));
		c.deltaValue = kha_audio2_ogg_vorbis_VorbisTools.floatUnpack(decodeState.readBits(32));
		c.valueBits = decodeState.readBits(4) + 1;
		c.sequenceP = decodeState.readBits(1) != 0;
		if(c.lookupType == 1) c.lookupValues = kha_audio2_ogg_vorbis_VorbisTools.lookup1Values(c.entries,c.dimensions); else c.lookupValues = c.entries * c.dimensions;
		var mults;
		var this7;
		this7 = new Array(c.lookupValues);
		mults = this7;
		var _g12 = 0;
		var _g4 = c.lookupValues;
		while(_g12 < _g4) {
			var j2 = _g12++;
			var q = decodeState.readBits(c.valueBits);
			if(q == -1) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,"fail lookup",{ fileName : "Codebook.hx", lineNumber : 161, className : "kha.audio2.ogg.vorbis.data.Codebook", methodName : "read"}));
			mults[j2] = q;
		}
		var this8;
		this8 = new Array(c.lookupValues);
		c.multiplicands = this8;
		var _g13 = 0;
		var _g5 = c.lookupValues;
		while(_g13 < _g5) {
			var j3 = _g13++;
			c.multiplicands[j3] = mults[j3] * c.deltaValue + c.minimumValue;
		}
		if(c.lookupType == 2 && c.sequenceP) {
			var _g14 = 1;
			var _g6 = c.lookupValues;
			while(_g14 < _g6) {
				var j4 = _g14++;
				c.multiplicands[j4] = c.multiplicands[j4 - 1];
			}
			c.sequenceP = false;
		}
	}
	return c;
};
kha_audio2_ogg_vorbis_data_Codebook.prototype = {
	addEntry: function(huffCode,symbol,count,len,values) {
		if(!this.sparse) this.codewords[symbol] = huffCode; else {
			this.codewords[count] = huffCode;
			this.codewordLengths[count] = len;
			values[count] = symbol;
		}
	}
	,includeInSort: function(len) {
		if(this.sparse) return true; else if(len == 255) return false; else if(len > 10) return true; else return false;
	}
	,computeCodewords: function(len,n,values) {
		var available;
		var this1;
		this1 = new Array(32);
		available = this1;
		var _g = 0;
		while(_g < 32) {
			var x = _g++;
			available[x] = 0;
		}
		var k = 0;
		while(k < n) {
			if(len[k] < 255) break;
			k++;
		}
		if(k == n) return true;
		var m = 0;
		this.addEntry(0,k,m++,len[k],values);
		var i = 0;
		while(++i <= len[k]) available[i] = 1 << 32 - i;
		i = k;
		while(++i < n) {
			var z = len[i];
			if(z == 255) continue;
			while(z > 0 && available[z] == 0) --z;
			if(z == 0) return false;
			var res = available[z];
			available[z] = 0;
			this.addEntry(kha_audio2_ogg_vorbis_VorbisTools.bitReverse(res),i,m++,len[i],values);
			if(z != len[i]) {
				var y = len[i];
				while(y > z) {
					available[y] = res + (1 << 32 - y);
					y--;
				}
			}
		}
		return true;
	}
	,computeSortedHuffman: function(lengths,values) {
		if(!this.sparse) {
			var k = 0;
			var _g1 = 0;
			var _g = this.entries;
			while(_g1 < _g) {
				var i = _g1++;
				if(this.includeInSort(lengths[i])) this.sortedCodewords[k++] = kha_audio2_ogg_vorbis_VorbisTools.bitReverse(this.codewords[i]);
			}
			null;
		} else {
			var _g11 = 0;
			var _g2 = this.sortedEntries;
			while(_g11 < _g2) {
				var i1 = _g11++;
				this.sortedCodewords[i1] = kha_audio2_ogg_vorbis_VorbisTools.bitReverse(this.codewords[i1]);
			}
		}
		this.sortedCodewords[this.sortedEntries] = -1;
		this.sortedCodewords.sort(kha_audio2_ogg_vorbis_VorbisTools.uintAsc);
		var len;
		if(this.sparse) len = this.sortedEntries; else len = this.entries;
		var _g3 = 0;
		while(_g3 < len) {
			var i2 = _g3++;
			var huffLen;
			if(this.sparse) huffLen = lengths[values[i2]]; else huffLen = lengths[i2];
			if(this.sparse?true:huffLen == 255?false:huffLen > 10?true:false) {
				var code = kha_audio2_ogg_vorbis_VorbisTools.bitReverse(this.codewords[i2]);
				var x = 0;
				var n = this.sortedEntries;
				while(n > 1) {
					var m = x + (n >> 1);
					if(_$UInt_UInt_$Impl_$.gte(code,this.sortedCodewords[m])) {
						x = m;
						n -= n >> 1;
					} else n >>= 1;
				}
				if(this.sparse) {
					this.sortedValues[x] = values[i2];
					this.codewordLengths[x] = huffLen;
				} else this.sortedValues[x] = i2;
			}
		}
	}
	,computeAcceleratedHuffman: function() {
		var this1;
		this1 = new Array(1024);
		this.fastHuffman = this1;
		this.fastHuffman[0] = -1;
		var _g1 = 0;
		var _g = 1024;
		while(_g1 < _g) {
			var i = _g1++;
			this.fastHuffman[i] = -1;
		}
		var len;
		if(this.sparse) len = this.sortedEntries; else len = this.entries;
		var _g2 = 0;
		while(_g2 < len) {
			var i1 = _g2++;
			if(this.codewordLengths[i1] <= 10) {
				var z;
				if(this.sparse) z = kha_audio2_ogg_vorbis_VorbisTools.bitReverse(this.sortedCodewords[i1]); else z = this.codewords[i1];
				while(z < 1024) {
					this.fastHuffman[z] = i1;
					z += 1 << this.codewordLengths[i1];
				}
			}
		}
	}
	,codebookDecode: function(decodeState,output,offset,len) {
		var z = decodeState.decode(this);
		var lookupValues = this.lookupValues;
		var sequenceP = this.sequenceP;
		var multiplicands = this.multiplicands;
		var minimumValue = this.minimumValue;
		if(z < 0) return false;
		if(len > this.dimensions) len = this.dimensions;
		if(this.lookupType == 1) {
			var div = 1;
			var last = 0.0;
			var _g = 0;
			while(_g < len) {
				var i = _g++;
				var off = Std["int"](_$UInt_UInt_$Impl_$.toFloat(z / div | 0) % _$UInt_UInt_$Impl_$.toFloat(lookupValues));
				var val = multiplicands[off] + last;
				var _g1 = offset + i;
				output[_g1] = output[_g1] + val;
				if(sequenceP) last = val + minimumValue;
				div = div * lookupValues;
			}
			return true;
		}
		z *= this.dimensions;
		if(sequenceP) {
			var last1 = 0.0;
			var _g2 = 0;
			while(_g2 < len) {
				var i1 = _g2++;
				var val1 = multiplicands[z + i1] + last1;
				var _g11 = offset + i1;
				output[_g11] = output[_g11] + val1;
				last1 = val1 + minimumValue;
			}
		} else {
			var last2 = 0.0;
			var _g3 = 0;
			while(_g3 < len) {
				var i2 = _g3++;
				var _g12 = offset + i2;
				output[_g12] = output[_g12] + (multiplicands[z + i2] + last2);
			}
		}
		return true;
	}
	,codebookDecodeStep: function(decodeState,output,offset,len,step) {
		var z = decodeState.decode(this);
		var last = 0.0;
		if(z < 0) return false;
		if(len > this.dimensions) len = this.dimensions;
		var lookupValues = this.lookupValues;
		var sequenceP = this.sequenceP;
		var multiplicands = this.multiplicands;
		if(this.lookupType == 1) {
			var div = 1;
			var _g = 0;
			while(_g < len) {
				var i = _g++;
				var off = Std["int"](_$UInt_UInt_$Impl_$.toFloat(z / div | 0) % _$UInt_UInt_$Impl_$.toFloat(lookupValues));
				var val = multiplicands[off] + last;
				var _g1 = offset + i * step;
				output[_g1] = output[_g1] + val;
				if(sequenceP) last = val;
				div = div * lookupValues;
			}
			return true;
		}
		z *= this.dimensions;
		var _g2 = 0;
		while(_g2 < len) {
			var i1 = _g2++;
			var val1 = multiplicands[z + i1] + last;
			var _g11 = offset + i1 * step;
			output[_g11] = output[_g11] + val1;
			if(sequenceP) last = val1;
		}
		return true;
	}
	,decodeStart: function(decodeState) {
		return decodeState.decode(this);
	}
	,decodeDeinterleaveRepeat: function(decodeState,residueBuffers,ch,cInter,pInter,len,totalDecode) {
		var effective = this.dimensions;
		if(this.lookupType == 0) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_STREAM,null,{ fileName : "Codebook.hx", lineNumber : 488, className : "kha.audio2.ogg.vorbis.data.Codebook", methodName : "decodeDeinterleaveRepeat"}));
		var multiplicands = this.multiplicands;
		var sequenceP = this.sequenceP;
		var lookupValues = this.lookupValues;
		while(totalDecode > 0) {
			var last = 0.0;
			var z = decodeState.decode(this);
			if(z < 0) {
				if(decodeState.bytesInSeg == 0 && decodeState.lastSeg) return null;
				throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_STREAM,null,{ fileName : "Codebook.hx", lineNumber : 503, className : "kha.audio2.ogg.vorbis.data.Codebook", methodName : "decodeDeinterleaveRepeat"}));
			}
			if(cInter + pInter * ch + effective > len * ch) effective = len * ch - (pInter * ch - cInter);
			if(this.lookupType == 1) {
				var div = 1;
				if(sequenceP) {
					var _g = 0;
					while(_g < effective) {
						var i = _g++;
						var off = Std["int"](_$UInt_UInt_$Impl_$.toFloat(z / div | 0) % _$UInt_UInt_$Impl_$.toFloat(lookupValues));
						var val = multiplicands[off] + last;
						var _g1 = pInter;
						residueBuffers[cInter][_g1] = residueBuffers[cInter][_g1] + val;
						if(++cInter == ch) {
							cInter = 0;
							++pInter;
						}
						last = val;
						div = div * lookupValues;
					}
				} else {
					var _g2 = 0;
					while(_g2 < effective) {
						var i1 = _g2++;
						var off1 = Std["int"](_$UInt_UInt_$Impl_$.toFloat(z / div | 0) % _$UInt_UInt_$Impl_$.toFloat(lookupValues));
						var val1 = multiplicands[off1] + last;
						var _g11 = pInter;
						residueBuffers[cInter][_g11] = residueBuffers[cInter][_g11] + val1;
						if(++cInter == ch) {
							cInter = 0;
							++pInter;
						}
						div = div * lookupValues;
					}
				}
			} else {
				z *= this.dimensions;
				if(sequenceP) {
					var _g3 = 0;
					while(_g3 < effective) {
						var i2 = _g3++;
						var val2 = multiplicands[z + i2] + last;
						var _g12 = pInter;
						residueBuffers[cInter][_g12] = residueBuffers[cInter][_g12] + val2;
						if(++cInter == ch) {
							cInter = 0;
							++pInter;
						}
						last = val2;
					}
				} else {
					var _g4 = 0;
					while(_g4 < effective) {
						var i3 = _g4++;
						var val3 = multiplicands[z + i3] + last;
						var _g13 = pInter;
						residueBuffers[cInter][_g13] = residueBuffers[cInter][_g13] + val3;
						if(++cInter == ch) {
							cInter = 0;
							++pInter;
						}
					}
				}
			}
			totalDecode -= effective;
		}
		return { cInter : cInter, pInter : pInter};
	}
	,residueDecode: function(decodeState,target,offset,n,rtype) {
		if(rtype == 0) {
			var step = n / this.dimensions | 0;
			var _g = 0;
			while(_g < step) {
				var k = _g++;
				if(!this.codebookDecodeStep(decodeState,target,offset + k,n - offset - k,step)) return false;
			}
		} else {
			var k1 = 0;
			while(k1 < n) {
				if(!this.codebookDecode(decodeState,target,offset,n - k1)) return false;
				k1 += this.dimensions;
				offset += this.dimensions;
			}
		}
		return true;
	}
	,__class__: kha_audio2_ogg_vorbis_data_Codebook
};
var kha_audio2_ogg_vorbis_data_Comment = function() {
	this.data = new haxe_ds_StringMap();
};
$hxClasses["kha.audio2.ogg.vorbis.data.Comment"] = kha_audio2_ogg_vorbis_data_Comment;
kha_audio2_ogg_vorbis_data_Comment.__name__ = ["kha","audio2","ogg","vorbis","data","Comment"];
kha_audio2_ogg_vorbis_data_Comment.prototype = {
	get_title: function() {
		return this.getString("title");
	}
	,get_loopStart: function() {
		return Std.parseInt(this.getString("loopstart"));
	}
	,get_loopLength: function() {
		return Std.parseInt(this.getString("looplength"));
	}
	,get_version: function() {
		return this.getString("version");
	}
	,get_album: function() {
		return this.getString("album");
	}
	,get_organization: function() {
		return this.getString("organization");
	}
	,get_tracknumber: function() {
		return this.getString("tracknumber");
	}
	,get_performer: function() {
		return this.getString("performer");
	}
	,get_copyright: function() {
		return this.getString("copyright");
	}
	,get_license: function() {
		return this.getString("license");
	}
	,get_artist: function() {
		return this.getString("artist");
	}
	,get_description: function() {
		return this.getString("description");
	}
	,get_genre: function() {
		return this.getString("genre");
	}
	,get_date: function() {
		return this.getString("date");
	}
	,get_location: function() {
		return this.getString("location");
	}
	,get_contact: function() {
		return this.getString("contact");
	}
	,get_isrc: function() {
		return this.getString("isrc");
	}
	,get_artists: function() {
		return this.getArray("artist");
	}
	,add: function(key,value) {
		key = key.toLowerCase();
		if(this.data.exists(key)) this.data.get(key).push(value); else {
			var v = [value];
			this.data.set(key,v);
			v;
		}
	}
	,getString: function(key) {
		key = key.toLowerCase();
		if(this.data.exists(key)) return this.data.get(key)[0]; else return null;
	}
	,getArray: function(key) {
		key = key.toLowerCase();
		if(this.data.exists(key)) return this.data.get(key); else return null;
	}
	,__class__: kha_audio2_ogg_vorbis_data_Comment
};
var kha_audio2_ogg_vorbis_data_Floor = function() {
};
$hxClasses["kha.audio2.ogg.vorbis.data.Floor"] = kha_audio2_ogg_vorbis_data_Floor;
kha_audio2_ogg_vorbis_data_Floor.__name__ = ["kha","audio2","ogg","vorbis","data","Floor"];
kha_audio2_ogg_vorbis_data_Floor.read = function(decodeState,codebooks) {
	var floor = new kha_audio2_ogg_vorbis_data_Floor();
	floor.type = decodeState.readBits(16);
	if(floor.type > 1) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,null,{ fileName : "Floor.hx", lineNumber : 28, className : "kha.audio2.ogg.vorbis.data.Floor", methodName : "read"}));
	if(floor.type == 0) {
		var g = floor.floor0 = new kha_audio2_ogg_vorbis_data_Floor0();
		g.order = decodeState.readBits(8);
		g.rate = decodeState.readBits(16);
		g.barkMapSize = decodeState.readBits(16);
		g.amplitudeBits = decodeState.readBits(6);
		g.amplitudeOffset = decodeState.readBits(8);
		g.numberOfBooks = decodeState.readBits(4) + 1;
		var _g1 = 0;
		var _g = g.numberOfBooks;
		while(_g1 < _g) {
			var j = _g1++;
			var val = decodeState.readBits(8);
			g.bookList[j] = val;
		}
		throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.FEATURE_NOT_SUPPORTED,null,{ fileName : "Floor.hx", lineNumber : 41, className : "kha.audio2.ogg.vorbis.data.Floor", methodName : "read"}));
	} else {
		var p = [];
		var g1 = floor.floor1 = new kha_audio2_ogg_vorbis_data_Floor1();
		var maxClass = -1;
		g1.partitions = decodeState.readBits(5);
		var this1;
		this1 = new Array(g1.partitions);
		g1.partitionClassList = this1;
		var _g11 = 0;
		var _g2 = g1.partitions;
		while(_g11 < _g2) {
			var j1 = _g11++;
			var val1 = decodeState.readBits(4);
			g1.partitionClassList[j1] = val1;
			if(g1.partitionClassList[j1] > maxClass) maxClass = g1.partitionClassList[j1];
		}
		var this2;
		this2 = new Array(maxClass + 1);
		g1.classDimensions = this2;
		var this3;
		this3 = new Array(maxClass + 1);
		g1.classMasterbooks = this3;
		var this4;
		this4 = new Array(maxClass + 1);
		g1.classSubclasses = this4;
		var this5;
		this5 = new Array(maxClass + 1);
		g1.subclassBooks = this5;
		var _g12 = 0;
		var _g3 = maxClass + 1;
		while(_g12 < _g3) {
			var j2 = _g12++;
			var val2 = decodeState.readBits(3) + 1;
			g1.classDimensions[j2] = val2;
			var val3 = decodeState.readBits(2);
			g1.classSubclasses[j2] = val3;
			if(g1.classSubclasses[j2] != 0) {
				var val4 = decodeState.readBits(8);
				g1.classMasterbooks[j2] = val4;
				if(g1.classMasterbooks[j2] >= codebooks.length) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,null,{ fileName : "Floor.hx", lineNumber : 64, className : "kha.audio2.ogg.vorbis.data.Floor", methodName : "read"}));
			}
			var kl = 1 << g1.classSubclasses[j2];
			var val5;
			var this6;
			this6 = new Array(kl);
			val5 = this6;
			g1.subclassBooks[j2] = val5;
			var _g21 = 0;
			while(_g21 < kl) {
				var k = _g21++;
				var val6 = decodeState.readBits(8) - 1;
				g1.subclassBooks[j2][k] = val6;
				if(g1.subclassBooks[j2][k] >= codebooks.length) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,null,{ fileName : "Floor.hx", lineNumber : 73, className : "kha.audio2.ogg.vorbis.data.Floor", methodName : "read"}));
			}
		}
		g1.floor1Multiplier = decodeState.readBits(2) + 1;
		g1.rangebits = decodeState.readBits(4);
		var this7;
		this7 = new Array(250);
		g1.xlist = this7;
		g1.xlist[0] = 0;
		g1.xlist[1] = 1 << g1.rangebits;
		g1.values = 2;
		var _g13 = 0;
		var _g4 = g1.partitions;
		while(_g13 < _g4) {
			var j3 = _g13++;
			var c = g1.partitionClassList[j3];
			var _g31 = 0;
			var _g22 = g1.classDimensions[c];
			while(_g31 < _g22) {
				var k1 = _g31++;
				var val7 = decodeState.readBits(g1.rangebits);
				g1.xlist[g1.values] = val7;
				g1.values++;
			}
		}
		var _g14 = 0;
		var _g5 = g1.values;
		while(_g14 < _g5) {
			var j4 = _g14++;
			p.push(new kha_audio2_ogg_vorbis_data_IntPoint());
			p[j4].x = g1.xlist[j4];
			p[j4].y = j4;
		}
		p.sort(kha_audio2_ogg_vorbis_VorbisTools.pointCompare);
		var this8;
		this8 = new Array(g1.values);
		g1.sortedOrder = this8;
		var _g15 = 0;
		var _g6 = g1.values;
		while(_g15 < _g6) {
			var j5 = _g15++;
			g1.sortedOrder[j5] = p[j5].y;
		}
		var this9;
		this9 = new Array(g1.values);
		g1.neighbors = this9;
		var _g16 = 2;
		var _g7 = g1.values;
		while(_g16 < _g7) {
			var j6 = _g16++;
			var ne = kha_audio2_ogg_vorbis_VorbisTools.neighbors(g1.xlist,j6);
			var val8;
			var this10;
			this10 = new Array(g1.values);
			val8 = this10;
			g1.neighbors[j6] = val8;
			g1.neighbors[j6][0] = ne.low;
			g1.neighbors[j6][1] = ne.high;
		}
	}
	return floor;
};
kha_audio2_ogg_vorbis_data_Floor.prototype = {
	__class__: kha_audio2_ogg_vorbis_data_Floor
};
var kha_audio2_ogg_vorbis_data_Floor0 = function() {
};
$hxClasses["kha.audio2.ogg.vorbis.data.Floor0"] = kha_audio2_ogg_vorbis_data_Floor0;
kha_audio2_ogg_vorbis_data_Floor0.__name__ = ["kha","audio2","ogg","vorbis","data","Floor0"];
kha_audio2_ogg_vorbis_data_Floor0.prototype = {
	__class__: kha_audio2_ogg_vorbis_data_Floor0
};
var kha_audio2_ogg_vorbis_data_Floor1 = function() {
};
$hxClasses["kha.audio2.ogg.vorbis.data.Floor1"] = kha_audio2_ogg_vorbis_data_Floor1;
kha_audio2_ogg_vorbis_data_Floor1.__name__ = ["kha","audio2","ogg","vorbis","data","Floor1"];
kha_audio2_ogg_vorbis_data_Floor1.prototype = {
	__class__: kha_audio2_ogg_vorbis_data_Floor1
};
var kha_audio2_ogg_vorbis_data_Header = function() {
};
$hxClasses["kha.audio2.ogg.vorbis.data.Header"] = kha_audio2_ogg_vorbis_data_Header;
kha_audio2_ogg_vorbis_data_Header.__name__ = ["kha","audio2","ogg","vorbis","data","Header"];
kha_audio2_ogg_vorbis_data_Header.read = function(decodeState) {
	var page = decodeState.page;
	page.start(decodeState);
	if((page.flag & 2) == 0) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_FIRST_PAGE,"not firstPage",{ fileName : "Header.hx", lineNumber : 46, className : "kha.audio2.ogg.vorbis.data.Header", methodName : "read"}));
	if((page.flag & 4) != 0) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_FIRST_PAGE,"lastPage",{ fileName : "Header.hx", lineNumber : 49, className : "kha.audio2.ogg.vorbis.data.Header", methodName : "read"}));
	if((page.flag & 1) != 0) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_FIRST_PAGE,"continuedPacket",{ fileName : "Header.hx", lineNumber : 52, className : "kha.audio2.ogg.vorbis.data.Header", methodName : "read"}));
	decodeState.firstPageValidate();
	if((function($this) {
		var $r;
		decodeState.inputPosition += 1;
		$r = decodeState.input.readByte();
		return $r;
	}(this)) != 1) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_FIRST_PAGE,"decodeState head",{ fileName : "Header.hx", lineNumber : 57, className : "kha.audio2.ogg.vorbis.data.Header", methodName : "read"}));
	decodeState.vorbisValidate();
	var version;
	decodeState.inputPosition += 4;
	version = decodeState.input.readInt32();
	if(version != 0) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_FIRST_PAGE,"vorbis version : " + version,{ fileName : "Header.hx", lineNumber : 66, className : "kha.audio2.ogg.vorbis.data.Header", methodName : "read"}));
	var header = new kha_audio2_ogg_vorbis_data_Header();
	decodeState.inputPosition += 1;
	header.channel = decodeState.input.readByte();
	if(header.channel == 0) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_FIRST_PAGE,"no channel",{ fileName : "Header.hx", lineNumber : 73, className : "kha.audio2.ogg.vorbis.data.Header", methodName : "read"})); else if(header.channel > 16) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.TOO_MANY_CHANNELS,"too many channels",{ fileName : "Header.hx", lineNumber : 75, className : "kha.audio2.ogg.vorbis.data.Header", methodName : "read"}));
	decodeState.inputPosition += 4;
	header.sampleRate = decodeState.input.readInt32();
	if(header.sampleRate == 0) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_FIRST_PAGE,"no sampling rate",{ fileName : "Header.hx", lineNumber : 80, className : "kha.audio2.ogg.vorbis.data.Header", methodName : "read"}));
	decodeState.inputPosition += 4;
	header.maximumBitRate = decodeState.input.readInt32();
	decodeState.inputPosition += 4;
	header.nominalBitRate = decodeState.input.readInt32();
	decodeState.inputPosition += 4;
	header.minimumBitRate = decodeState.input.readInt32();
	var x;
	decodeState.inputPosition += 1;
	x = decodeState.input.readByte();
	var log0 = x & 15;
	var log1 = x >> 4;
	header.blocksize0 = 1 << log0;
	header.blocksize1 = 1 << log1;
	if(log0 < 6 || log0 > 13) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,null,{ fileName : "Header.hx", lineNumber : 93, className : "kha.audio2.ogg.vorbis.data.Header", methodName : "read"}));
	if(log1 < 6 || log1 > 13) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,null,{ fileName : "Header.hx", lineNumber : 96, className : "kha.audio2.ogg.vorbis.data.Header", methodName : "read"}));
	if(log0 > log1) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,null,{ fileName : "Header.hx", lineNumber : 99, className : "kha.audio2.ogg.vorbis.data.Header", methodName : "read"}));
	var x1;
	decodeState.inputPosition += 1;
	x1 = decodeState.input.readByte();
	if((x1 & 1) == 0) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_FIRST_PAGE,null,{ fileName : "Header.hx", lineNumber : 105, className : "kha.audio2.ogg.vorbis.data.Header", methodName : "read"}));
	decodeState.page.start(decodeState);
	decodeState.startPacket();
	var len = 0;
	var output = new haxe_io_BytesOutput();
	while((len = decodeState.next()) != 0) {
		output.write((function($this) {
			var $r;
			decodeState.inputPosition += len;
			$r = decodeState.input.read(len);
			return $r;
		}(this)));
		decodeState.bytesInSeg = 0;
	}
	var packetInput = new haxe_io_BytesInput(output.getBytes());
	packetInput.readByte();
	packetInput.read(6);
	var vendorLength = packetInput.readInt32();
	header.vendor = packetInput.readString(vendorLength);
	header.comment = new kha_audio2_ogg_vorbis_data_Comment();
	var commentCount = packetInput.readInt32();
	var _g = 0;
	while(_g < commentCount) {
		var i = _g++;
		var n = packetInput.readInt32();
		var str = packetInput.readString(n);
		var splitter = str.indexOf("=");
		if(splitter != -1) header.comment.add(str.substring(0,splitter),str.substring(splitter + 1));
	}
	var x2 = packetInput.readByte();
	if((x2 & 1) == 0) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,null,{ fileName : "Header.hx", lineNumber : 141, className : "kha.audio2.ogg.vorbis.data.Header", methodName : "read"}));
	decodeState.startPacket();
	if(decodeState.readPacket() != 5) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,"setup packet",{ fileName : "Header.hx", lineNumber : 149, className : "kha.audio2.ogg.vorbis.data.Header", methodName : "read"}));
	decodeState.vorbisValidate();
	var codebookCount = decodeState.readBits(8) + 1;
	var this1;
	this1 = new Array(codebookCount);
	header.codebooks = this1;
	var _g1 = 0;
	while(_g1 < codebookCount) {
		var i1 = _g1++;
		var val = kha_audio2_ogg_vorbis_data_Codebook.read(decodeState);
		header.codebooks[i1] = val;
	}
	x1 = decodeState.readBits(6) + 1;
	var _g2 = 0;
	while(_g2 < x1) {
		var i2 = _g2++;
		if(decodeState.readBits(16) != 0) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,null,{ fileName : "Header.hx", lineNumber : 165, className : "kha.audio2.ogg.vorbis.data.Header", methodName : "read"}));
	}
	var floorCount = decodeState.readBits(6) + 1;
	var this2;
	this2 = new Array(floorCount);
	header.floorConfig = this2;
	var _g3 = 0;
	while(_g3 < floorCount) {
		var i3 = _g3++;
		var val1 = kha_audio2_ogg_vorbis_data_Floor.read(decodeState,header.codebooks);
		header.floorConfig[i3] = val1;
	}
	var residueCount = decodeState.readBits(6) + 1;
	var this3;
	this3 = new Array(residueCount);
	header.residueConfig = this3;
	var _g4 = 0;
	while(_g4 < residueCount) {
		var i4 = _g4++;
		var val2 = kha_audio2_ogg_vorbis_data_Residue.read(decodeState,header.codebooks);
		header.residueConfig[i4] = val2;
	}
	var mappingCount = decodeState.readBits(6) + 1;
	var this4;
	this4 = new Array(mappingCount);
	header.mapping = this4;
	var _g5 = 0;
	while(_g5 < mappingCount) {
		var i5 = _g5++;
		var map = kha_audio2_ogg_vorbis_data_Mapping.read(decodeState,header.channel);
		header.mapping[i5] = map;
		var _g21 = 0;
		var _g11 = map.submaps;
		while(_g21 < _g11) {
			var j = _g21++;
			if(map.submapFloor[j] >= header.floorConfig.length) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,null,{ fileName : "Header.hx", lineNumber : 191, className : "kha.audio2.ogg.vorbis.data.Header", methodName : "read"}));
			if(map.submapResidue[j] >= header.residueConfig.length) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,null,{ fileName : "Header.hx", lineNumber : 194, className : "kha.audio2.ogg.vorbis.data.Header", methodName : "read"}));
		}
	}
	var modeCount = decodeState.readBits(6) + 1;
	var this5;
	this5 = new Array(modeCount);
	header.modes = this5;
	var _g6 = 0;
	while(_g6 < modeCount) {
		var i6 = _g6++;
		var mode = kha_audio2_ogg_vorbis_data_Mode.read(decodeState);
		header.modes[i6] = mode;
		if(mode.mapping >= header.mapping.length) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,null,{ fileName : "Header.hx", lineNumber : 205, className : "kha.audio2.ogg.vorbis.data.Header", methodName : "read"}));
	}
	while(decodeState.bytesInSeg != 0 || !decodeState.lastSeg && decodeState.next() != 0) {
		decodeState.bytesInSeg--;
		decodeState.inputPosition += 1;
		decodeState.input.readByte();
	}
	return header;
};
kha_audio2_ogg_vorbis_data_Header.prototype = {
	__class__: kha_audio2_ogg_vorbis_data_Header
};
var kha_audio2_ogg_vorbis_data_IntPoint = function() {
};
$hxClasses["kha.audio2.ogg.vorbis.data.IntPoint"] = kha_audio2_ogg_vorbis_data_IntPoint;
kha_audio2_ogg_vorbis_data_IntPoint.__name__ = ["kha","audio2","ogg","vorbis","data","IntPoint"];
kha_audio2_ogg_vorbis_data_IntPoint.prototype = {
	__class__: kha_audio2_ogg_vorbis_data_IntPoint
};
var kha_audio2_ogg_vorbis_data_Mapping = function() {
};
$hxClasses["kha.audio2.ogg.vorbis.data.Mapping"] = kha_audio2_ogg_vorbis_data_Mapping;
kha_audio2_ogg_vorbis_data_Mapping.__name__ = ["kha","audio2","ogg","vorbis","data","Mapping"];
kha_audio2_ogg_vorbis_data_Mapping.read = function(decodeState,channels) {
	var m = new kha_audio2_ogg_vorbis_data_Mapping();
	var mappingType = decodeState.readBits(16);
	if(mappingType != 0) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,"mapping type " + mappingType,{ fileName : "Mapping.hx", lineNumber : 22, className : "kha.audio2.ogg.vorbis.data.Mapping", methodName : "read"}));
	var this1;
	this1 = new Array(channels);
	m.chan = this1;
	var _g = 0;
	while(_g < channels) {
		var j = _g++;
		var val = new kha_audio2_ogg_vorbis_data_MappingChannel();
		m.chan[j] = val;
	}
	if(decodeState.readBits(1) != 0) m.submaps = decodeState.readBits(4) + 1; else m.submaps = 1;
	if(decodeState.readBits(1) != 0) {
		m.couplingSteps = decodeState.readBits(8) + 1;
		var _g1 = 0;
		var _g2 = m.couplingSteps;
		while(_g1 < _g2) {
			var k = _g1++;
			m.chan[k].magnitude = decodeState.readBits(kha_audio2_ogg_tools_MathTools.ilog(channels - 1));
			m.chan[k].angle = decodeState.readBits(kha_audio2_ogg_tools_MathTools.ilog(channels - 1));
			if(m.chan[k].magnitude >= channels) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,null,{ fileName : "Mapping.hx", lineNumber : 46, className : "kha.audio2.ogg.vorbis.data.Mapping", methodName : "read"}));
			if(m.chan[k].angle >= channels) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,null,{ fileName : "Mapping.hx", lineNumber : 49, className : "kha.audio2.ogg.vorbis.data.Mapping", methodName : "read"}));
			if(m.chan[k].magnitude == m.chan[k].angle) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,null,{ fileName : "Mapping.hx", lineNumber : 52, className : "kha.audio2.ogg.vorbis.data.Mapping", methodName : "read"}));
		}
	} else m.couplingSteps = 0;
	if(decodeState.readBits(2) != 0) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,null,{ fileName : "Mapping.hx", lineNumber : 61, className : "kha.audio2.ogg.vorbis.data.Mapping", methodName : "read"}));
	if(m.submaps > 1) {
		var _g3 = 0;
		while(_g3 < channels) {
			var j1 = _g3++;
			m.chan[j1].mux = decodeState.readBits(4);
			if(m.chan[j1].mux >= m.submaps) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,null,{ fileName : "Mapping.hx", lineNumber : 67, className : "kha.audio2.ogg.vorbis.data.Mapping", methodName : "read"}));
		}
	} else {
		var _g4 = 0;
		while(_g4 < channels) {
			var j2 = _g4++;
			m.chan[j2].mux = 0;
		}
	}
	var this2;
	this2 = new Array(m.submaps);
	m.submapFloor = this2;
	var this3;
	this3 = new Array(m.submaps);
	m.submapResidue = this3;
	var _g11 = 0;
	var _g5 = m.submaps;
	while(_g11 < _g5) {
		var j3 = _g11++;
		decodeState.readBits(8);
		var val1 = decodeState.readBits(8);
		m.submapFloor[j3] = val1;
		var val2 = decodeState.readBits(8);
		m.submapResidue[j3] = val2;
	}
	return m;
};
kha_audio2_ogg_vorbis_data_Mapping.prototype = {
	doFloor: function(floors,i,n,target,finalY,step2Flag) {
		var n2 = n >> 1;
		var s = this.chan[i].mux;
		var floor;
		var floor1 = floors[this.submapFloor[s]];
		if(floor1.type == 0) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_STREAM,null,{ fileName : "Mapping.hx", lineNumber : 94, className : "kha.audio2.ogg.vorbis.data.Mapping", methodName : "doFloor"})); else {
			var g = floor1.floor1;
			var lx = 0;
			var ly = finalY[0] * g.floor1Multiplier;
			var _g1 = 1;
			var _g = g.values;
			while(_g1 < _g) {
				var q = _g1++;
				var j = g.sortedOrder[q];
				if(finalY[j] >= 0) {
					var hy = finalY[j] * g.floor1Multiplier;
					var hx = g.xlist[j];
					kha_audio2_ogg_vorbis_VorbisTools.drawLine(target,lx,ly,hx,hy,n2);
					lx = hx;
					ly = hy;
				}
			}
			if(lx < n2) {
				var _g2 = lx;
				while(_g2 < n2) {
					var j1 = _g2++;
					var _g11 = j1;
					target[_g11] = target[_g11] * kha_audio2_ogg_vorbis_VorbisTools.INVERSE_DB_TABLE[ly];
				}
			}
		}
	}
	,__class__: kha_audio2_ogg_vorbis_data_Mapping
};
var kha_audio2_ogg_vorbis_data_MappingChannel = function() {
};
$hxClasses["kha.audio2.ogg.vorbis.data.MappingChannel"] = kha_audio2_ogg_vorbis_data_MappingChannel;
kha_audio2_ogg_vorbis_data_MappingChannel.__name__ = ["kha","audio2","ogg","vorbis","data","MappingChannel"];
kha_audio2_ogg_vorbis_data_MappingChannel.prototype = {
	__class__: kha_audio2_ogg_vorbis_data_MappingChannel
};
var kha_audio2_ogg_vorbis_data_Mode = function() {
};
$hxClasses["kha.audio2.ogg.vorbis.data.Mode"] = kha_audio2_ogg_vorbis_data_Mode;
kha_audio2_ogg_vorbis_data_Mode.__name__ = ["kha","audio2","ogg","vorbis","data","Mode"];
kha_audio2_ogg_vorbis_data_Mode.read = function(decodeState) {
	var m = new kha_audio2_ogg_vorbis_data_Mode();
	m.blockflag = decodeState.readBits(1) != 0;
	m.windowtype = decodeState.readBits(16);
	m.transformtype = decodeState.readBits(16);
	m.mapping = decodeState.readBits(8);
	if(m.windowtype != 0) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,null,{ fileName : "Mode.hx", lineNumber : 22, className : "kha.audio2.ogg.vorbis.data.Mode", methodName : "read"}));
	if(m.transformtype != 0) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,null,{ fileName : "Mode.hx", lineNumber : 25, className : "kha.audio2.ogg.vorbis.data.Mode", methodName : "read"}));
	return m;
};
kha_audio2_ogg_vorbis_data_Mode.prototype = {
	__class__: kha_audio2_ogg_vorbis_data_Mode
};
var kha_audio2_ogg_vorbis_data_Page = function() {
};
$hxClasses["kha.audio2.ogg.vorbis.data.Page"] = kha_audio2_ogg_vorbis_data_Page;
kha_audio2_ogg_vorbis_data_Page.__name__ = ["kha","audio2","ogg","vorbis","data","Page"];
kha_audio2_ogg_vorbis_data_Page.prototype = {
	clone: function() {
		var page = new kha_audio2_ogg_vorbis_data_Page();
		page.flag = this.flag;
		return page;
	}
	,start: function(decodeState) {
		if((function($this) {
			var $r;
			decodeState.inputPosition += 1;
			$r = decodeState.input.readByte();
			return $r;
		}(this)) != 79 || (function($this) {
			var $r;
			decodeState.inputPosition += 1;
			$r = decodeState.input.readByte();
			return $r;
		}(this)) != 103 || (function($this) {
			var $r;
			decodeState.inputPosition += 1;
			$r = decodeState.input.readByte();
			return $r;
		}(this)) != 103 || (function($this) {
			var $r;
			decodeState.inputPosition += 1;
			$r = decodeState.input.readByte();
			return $r;
		}(this)) != 83) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.MISSING_CAPTURE_PATTERN,null,{ fileName : "VorbisDecodeState.hx", lineNumber : 323, className : "kha.audio2.ogg.vorbis.VorbisDecodeState", methodName : "capturePattern"}));
		this.startWithoutCapturePattern(decodeState);
	}
	,startWithoutCapturePattern: function(decodeState) {
		var version;
		decodeState.inputPosition += 1;
		version = decodeState.input.readByte();
		if(version != 0) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_STREAM_STRUCTURE_VERSION,"" + version,{ fileName : "Page.hx", lineNumber : 34, className : "kha.audio2.ogg.vorbis.data.Page", methodName : "startWithoutCapturePattern"}));
		decodeState.inputPosition += 1;
		this.flag = decodeState.input.readByte();
		var loc0;
		decodeState.inputPosition += 4;
		loc0 = decodeState.input.readInt32();
		var loc1;
		decodeState.inputPosition += 4;
		loc1 = decodeState.input.readInt32();
		decodeState.inputPosition += 4;
		decodeState.input.readInt32();
		decodeState.inputPosition += 4;
		decodeState.input.readInt32();
		decodeState.inputPosition += 4;
		decodeState.input.readInt32();
		decodeState.setup(loc0,loc1);
	}
	,__class__: kha_audio2_ogg_vorbis_data_Page
};
var kha_audio2_ogg_vorbis_data_PageFlag = function() { };
$hxClasses["kha.audio2.ogg.vorbis.data.PageFlag"] = kha_audio2_ogg_vorbis_data_PageFlag;
kha_audio2_ogg_vorbis_data_PageFlag.__name__ = ["kha","audio2","ogg","vorbis","data","PageFlag"];
var kha_audio2_ogg_vorbis_data_ProbedPage = function() {
};
$hxClasses["kha.audio2.ogg.vorbis.data.ProbedPage"] = kha_audio2_ogg_vorbis_data_ProbedPage;
kha_audio2_ogg_vorbis_data_ProbedPage.__name__ = ["kha","audio2","ogg","vorbis","data","ProbedPage"];
kha_audio2_ogg_vorbis_data_ProbedPage.prototype = {
	__class__: kha_audio2_ogg_vorbis_data_ProbedPage
};
var kha_audio2_ogg_vorbis_data_ReaderError = function(type,message,posInfos) {
	if(message == null) message = "";
	this.type = type;
	this.message = message;
	this.posInfos = posInfos;
};
$hxClasses["kha.audio2.ogg.vorbis.data.ReaderError"] = kha_audio2_ogg_vorbis_data_ReaderError;
kha_audio2_ogg_vorbis_data_ReaderError.__name__ = ["kha","audio2","ogg","vorbis","data","ReaderError"];
kha_audio2_ogg_vorbis_data_ReaderError.prototype = {
	__class__: kha_audio2_ogg_vorbis_data_ReaderError
};
var kha_audio2_ogg_vorbis_data_ReaderErrorType = $hxClasses["kha.audio2.ogg.vorbis.data.ReaderErrorType"] = { __ename__ : ["kha","audio2","ogg","vorbis","data","ReaderErrorType"], __constructs__ : ["NEED_MORE_DATA","INVALID_API_MIXING","OUTOFMEM","FEATURE_NOT_SUPPORTED","TOO_MANY_CHANNELS","FILE_OPEN_FAILURE","SEEK_WITHOUT_LENGTH","UNEXPECTED_EOF","SEEK_INVALID","INVALID_SETUP","INVALID_STREAM","MISSING_CAPTURE_PATTERN","INVALID_STREAM_STRUCTURE_VERSION","CONTINUED_PACKET_FLAG_INVALID","INCORRECT_STREAM_SERIAL_NUMBER","INVALID_FIRST_PAGE","BAD_PACKET_TYPE","CANT_FIND_LAST_PAGE","SEEK_FAILED","OTHER"] };
kha_audio2_ogg_vorbis_data_ReaderErrorType.NEED_MORE_DATA = ["NEED_MORE_DATA",0];
kha_audio2_ogg_vorbis_data_ReaderErrorType.NEED_MORE_DATA.toString = $estr;
kha_audio2_ogg_vorbis_data_ReaderErrorType.NEED_MORE_DATA.__enum__ = kha_audio2_ogg_vorbis_data_ReaderErrorType;
kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_API_MIXING = ["INVALID_API_MIXING",1];
kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_API_MIXING.toString = $estr;
kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_API_MIXING.__enum__ = kha_audio2_ogg_vorbis_data_ReaderErrorType;
kha_audio2_ogg_vorbis_data_ReaderErrorType.OUTOFMEM = ["OUTOFMEM",2];
kha_audio2_ogg_vorbis_data_ReaderErrorType.OUTOFMEM.toString = $estr;
kha_audio2_ogg_vorbis_data_ReaderErrorType.OUTOFMEM.__enum__ = kha_audio2_ogg_vorbis_data_ReaderErrorType;
kha_audio2_ogg_vorbis_data_ReaderErrorType.FEATURE_NOT_SUPPORTED = ["FEATURE_NOT_SUPPORTED",3];
kha_audio2_ogg_vorbis_data_ReaderErrorType.FEATURE_NOT_SUPPORTED.toString = $estr;
kha_audio2_ogg_vorbis_data_ReaderErrorType.FEATURE_NOT_SUPPORTED.__enum__ = kha_audio2_ogg_vorbis_data_ReaderErrorType;
kha_audio2_ogg_vorbis_data_ReaderErrorType.TOO_MANY_CHANNELS = ["TOO_MANY_CHANNELS",4];
kha_audio2_ogg_vorbis_data_ReaderErrorType.TOO_MANY_CHANNELS.toString = $estr;
kha_audio2_ogg_vorbis_data_ReaderErrorType.TOO_MANY_CHANNELS.__enum__ = kha_audio2_ogg_vorbis_data_ReaderErrorType;
kha_audio2_ogg_vorbis_data_ReaderErrorType.FILE_OPEN_FAILURE = ["FILE_OPEN_FAILURE",5];
kha_audio2_ogg_vorbis_data_ReaderErrorType.FILE_OPEN_FAILURE.toString = $estr;
kha_audio2_ogg_vorbis_data_ReaderErrorType.FILE_OPEN_FAILURE.__enum__ = kha_audio2_ogg_vorbis_data_ReaderErrorType;
kha_audio2_ogg_vorbis_data_ReaderErrorType.SEEK_WITHOUT_LENGTH = ["SEEK_WITHOUT_LENGTH",6];
kha_audio2_ogg_vorbis_data_ReaderErrorType.SEEK_WITHOUT_LENGTH.toString = $estr;
kha_audio2_ogg_vorbis_data_ReaderErrorType.SEEK_WITHOUT_LENGTH.__enum__ = kha_audio2_ogg_vorbis_data_ReaderErrorType;
kha_audio2_ogg_vorbis_data_ReaderErrorType.UNEXPECTED_EOF = ["UNEXPECTED_EOF",7];
kha_audio2_ogg_vorbis_data_ReaderErrorType.UNEXPECTED_EOF.toString = $estr;
kha_audio2_ogg_vorbis_data_ReaderErrorType.UNEXPECTED_EOF.__enum__ = kha_audio2_ogg_vorbis_data_ReaderErrorType;
kha_audio2_ogg_vorbis_data_ReaderErrorType.SEEK_INVALID = ["SEEK_INVALID",8];
kha_audio2_ogg_vorbis_data_ReaderErrorType.SEEK_INVALID.toString = $estr;
kha_audio2_ogg_vorbis_data_ReaderErrorType.SEEK_INVALID.__enum__ = kha_audio2_ogg_vorbis_data_ReaderErrorType;
kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP = ["INVALID_SETUP",9];
kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP.toString = $estr;
kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP.__enum__ = kha_audio2_ogg_vorbis_data_ReaderErrorType;
kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_STREAM = ["INVALID_STREAM",10];
kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_STREAM.toString = $estr;
kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_STREAM.__enum__ = kha_audio2_ogg_vorbis_data_ReaderErrorType;
kha_audio2_ogg_vorbis_data_ReaderErrorType.MISSING_CAPTURE_PATTERN = ["MISSING_CAPTURE_PATTERN",11];
kha_audio2_ogg_vorbis_data_ReaderErrorType.MISSING_CAPTURE_PATTERN.toString = $estr;
kha_audio2_ogg_vorbis_data_ReaderErrorType.MISSING_CAPTURE_PATTERN.__enum__ = kha_audio2_ogg_vorbis_data_ReaderErrorType;
kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_STREAM_STRUCTURE_VERSION = ["INVALID_STREAM_STRUCTURE_VERSION",12];
kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_STREAM_STRUCTURE_VERSION.toString = $estr;
kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_STREAM_STRUCTURE_VERSION.__enum__ = kha_audio2_ogg_vorbis_data_ReaderErrorType;
kha_audio2_ogg_vorbis_data_ReaderErrorType.CONTINUED_PACKET_FLAG_INVALID = ["CONTINUED_PACKET_FLAG_INVALID",13];
kha_audio2_ogg_vorbis_data_ReaderErrorType.CONTINUED_PACKET_FLAG_INVALID.toString = $estr;
kha_audio2_ogg_vorbis_data_ReaderErrorType.CONTINUED_PACKET_FLAG_INVALID.__enum__ = kha_audio2_ogg_vorbis_data_ReaderErrorType;
kha_audio2_ogg_vorbis_data_ReaderErrorType.INCORRECT_STREAM_SERIAL_NUMBER = ["INCORRECT_STREAM_SERIAL_NUMBER",14];
kha_audio2_ogg_vorbis_data_ReaderErrorType.INCORRECT_STREAM_SERIAL_NUMBER.toString = $estr;
kha_audio2_ogg_vorbis_data_ReaderErrorType.INCORRECT_STREAM_SERIAL_NUMBER.__enum__ = kha_audio2_ogg_vorbis_data_ReaderErrorType;
kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_FIRST_PAGE = ["INVALID_FIRST_PAGE",15];
kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_FIRST_PAGE.toString = $estr;
kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_FIRST_PAGE.__enum__ = kha_audio2_ogg_vorbis_data_ReaderErrorType;
kha_audio2_ogg_vorbis_data_ReaderErrorType.BAD_PACKET_TYPE = ["BAD_PACKET_TYPE",16];
kha_audio2_ogg_vorbis_data_ReaderErrorType.BAD_PACKET_TYPE.toString = $estr;
kha_audio2_ogg_vorbis_data_ReaderErrorType.BAD_PACKET_TYPE.__enum__ = kha_audio2_ogg_vorbis_data_ReaderErrorType;
kha_audio2_ogg_vorbis_data_ReaderErrorType.CANT_FIND_LAST_PAGE = ["CANT_FIND_LAST_PAGE",17];
kha_audio2_ogg_vorbis_data_ReaderErrorType.CANT_FIND_LAST_PAGE.toString = $estr;
kha_audio2_ogg_vorbis_data_ReaderErrorType.CANT_FIND_LAST_PAGE.__enum__ = kha_audio2_ogg_vorbis_data_ReaderErrorType;
kha_audio2_ogg_vorbis_data_ReaderErrorType.SEEK_FAILED = ["SEEK_FAILED",18];
kha_audio2_ogg_vorbis_data_ReaderErrorType.SEEK_FAILED.toString = $estr;
kha_audio2_ogg_vorbis_data_ReaderErrorType.SEEK_FAILED.__enum__ = kha_audio2_ogg_vorbis_data_ReaderErrorType;
kha_audio2_ogg_vorbis_data_ReaderErrorType.OTHER = ["OTHER",19];
kha_audio2_ogg_vorbis_data_ReaderErrorType.OTHER.toString = $estr;
kha_audio2_ogg_vorbis_data_ReaderErrorType.OTHER.__enum__ = kha_audio2_ogg_vorbis_data_ReaderErrorType;
var kha_audio2_ogg_vorbis_data_Residue = function() {
};
$hxClasses["kha.audio2.ogg.vorbis.data.Residue"] = kha_audio2_ogg_vorbis_data_Residue;
kha_audio2_ogg_vorbis_data_Residue.__name__ = ["kha","audio2","ogg","vorbis","data","Residue"];
kha_audio2_ogg_vorbis_data_Residue.read = function(decodeState,codebooks) {
	var r = new kha_audio2_ogg_vorbis_data_Residue();
	r.type = decodeState.readBits(16);
	if(r.type > 2) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,null,{ fileName : "Residue.hx", lineNumber : 29, className : "kha.audio2.ogg.vorbis.data.Residue", methodName : "read"}));
	var residueCascade;
	var this1;
	this1 = new Array(64);
	residueCascade = this1;
	r.begin = decodeState.readBits(24);
	r.end = decodeState.readBits(24);
	r.partSize = decodeState.readBits(24) + 1;
	var classifications = r.classifications = decodeState.readBits(6) + 1;
	r.classbook = decodeState.readBits(8);
	var _g1 = 0;
	var _g = r.classifications;
	while(_g1 < _g) {
		var j = _g1++;
		var highBits = 0;
		var lowBits = decodeState.readBits(3);
		if(decodeState.readBits(1) != 0) highBits = decodeState.readBits(5);
		residueCascade[j] = highBits * 8 + lowBits;
	}
	var this2;
	this2 = new Array(r.classifications);
	r.residueBooks = this2;
	var _g11 = 0;
	var _g2 = r.classifications;
	while(_g11 < _g2) {
		var j1 = _g11++;
		var val;
		var this3;
		this3 = new Array(8);
		val = this3;
		r.residueBooks[j1] = val;
		var _g21 = 0;
		while(_g21 < 8) {
			var k = _g21++;
			if((residueCascade[j1] & 1 << k) != 0) {
				var val1 = decodeState.readBits(8);
				r.residueBooks[j1][k] = val1;
				if(r.residueBooks[j1][k] >= codebooks.length) throw new js__$Boot_HaxeError(new kha_audio2_ogg_vorbis_data_ReaderError(kha_audio2_ogg_vorbis_data_ReaderErrorType.INVALID_SETUP,null,{ fileName : "Residue.hx", lineNumber : 55, className : "kha.audio2.ogg.vorbis.data.Residue", methodName : "read"}));
			} else r.residueBooks[j1][k] = -1;
		}
	}
	var el = codebooks[r.classbook].entries;
	var classwords = codebooks[r.classbook].dimensions;
	var this4;
	this4 = new Array(el);
	r.classdata = this4;
	var _g3 = 0;
	while(_g3 < el) {
		var j2 = _g3++;
		var temp = j2;
		var k1 = classwords;
		var cd;
		var val2;
		var this5;
		this5 = new Array(classwords);
		val2 = this5;
		cd = r.classdata[j2] = val2;
		while(--k1 >= 0) {
			cd[k1] = temp % classifications;
			temp = temp / classifications | 0;
		}
	}
	return r;
};
kha_audio2_ogg_vorbis_data_Residue.prototype = {
	decode: function(decodeState,header,residueBuffers,ch,n,doNotDecode,channelBuffers) {
		var codebooks = header.codebooks;
		var classwords = codebooks[this.classbook].dimensions;
		var nRead = this.end - this.begin;
		var partSize = this.partSize;
		var partRead = Std["int"](_$UInt_UInt_$Impl_$.toFloat(nRead) / _$UInt_UInt_$Impl_$.toFloat(partSize));
		var classifications;
		var this1;
		this1 = new Array(header.channel * partRead + 1);
		classifications = this1;
		var _g = 0;
		while(_g < ch) {
			var i = _g++;
			if(!doNotDecode[i]) {
				var buffer = residueBuffers[i];
				var _g2 = 0;
				var _g1 = buffer.length;
				while(_g2 < _g1) {
					var j = _g2++;
					buffer[j] = 0;
				}
			}
		}
		if(this.type == 2 && ch != 1) {
			var _g3 = 0;
			while(_g3 < ch) {
				var j1 = _g3++;
				if(!doNotDecode[j1]) break; else if(j1 == ch - 1) return;
			}
			var _g4 = 0;
			while(_g4 < 8) {
				var pass = _g4++;
				var pcount = 0;
				var classSet = 0;
				if(ch == 2) while(pcount < partRead) {
					var z = this.begin + pcount * partSize;
					var cInter = z & 1;
					var pInter = z >>> 1;
					if(pass == 0) {
						var c = codebooks[this.classbook];
						var q = decodeState.decode(c);
						if(q == -1) return;
						var i1 = classwords;
						while(--i1 >= 0) {
							classifications[i1 + pcount] = q % this.classifications;
							q = q / this.classifications | 0;
						}
					}
					var _g11 = 0;
					while(_g11 < classwords) {
						var i2 = _g11++;
						if(pcount >= partRead) break;
						var z1 = this.begin + pcount * partSize;
						var c1 = classifications[pcount];
						var b = this.residueBooks[c1][pass];
						if(b >= 0) {
							var book = codebooks[b];
							var result = book.decodeDeinterleaveRepeat(decodeState,residueBuffers,ch,cInter,pInter,n,partSize);
							if(result == null) return; else {
								cInter = result.cInter;
								pInter = result.pInter;
							}
							null;
						} else {
							z1 = z1 + partSize;
							cInter = z1 & 1;
							pInter = z1 >>> 1;
						}
						++pcount;
					}
					null;
				} else if(ch == 1) while(pcount < partRead) {
					var z2 = this.begin + pcount * partSize;
					var cInter1 = 0;
					var pInter1 = z2;
					if(pass == 0) {
						var c2 = codebooks[this.classbook];
						var q1 = decodeState.decode(c2);
						if(q1 == -1) return;
						var i3 = classwords;
						while(--i3 >= 0) {
							classifications[i3 + pcount] = q1 % this.classifications;
							q1 = q1 / this.classifications | 0;
						}
					}
					var _g12 = 0;
					while(_g12 < classwords) {
						var i4 = _g12++;
						if(pcount >= partRead) break;
						var z3 = this.begin + pcount * partSize;
						var b1 = this.residueBooks[classifications[pcount]][pass];
						if(b1 >= 0) {
							var book1 = codebooks[b1];
							var result1 = book1.decodeDeinterleaveRepeat(decodeState,residueBuffers,ch,cInter1,pInter1,n,partSize);
							if(result1 == null) return; else {
								cInter1 = result1.cInter;
								pInter1 = result1.pInter;
							}
							null;
						} else {
							z3 = z3 + partSize;
							cInter1 = 0;
							pInter1 = z3;
						}
						++pcount;
					}
				} else while(pcount < partRead) {
					var z4 = this.begin + pcount * partSize;
					var cInter2 = Std["int"](_$UInt_UInt_$Impl_$.toFloat(z4) % _$UInt_UInt_$Impl_$.toFloat(ch));
					var pInter2 = Std["int"](_$UInt_UInt_$Impl_$.toFloat(z4) / _$UInt_UInt_$Impl_$.toFloat(ch));
					if(pass == 0) {
						var c3 = codebooks[this.classbook];
						var q2 = decodeState.decode(c3);
						if(q2 == -1) return;
						var i5 = classwords;
						while(--i5 >= 0) {
							classifications[i5 + pcount] = q2 % this.classifications;
							q2 = q2 / this.classifications | 0;
						}
					}
					var _g13 = 0;
					while(_g13 < classwords) {
						var i6 = _g13++;
						if(pcount >= partRead) break;
						var z5 = this.begin + pcount * partSize;
						var b2 = this.residueBooks[classifications[pcount]][pass];
						if(b2 >= 0) {
							var book2 = codebooks[b2];
							var result2 = book2.decodeDeinterleaveRepeat(decodeState,residueBuffers,ch,cInter2,pInter2,n,partSize);
							if(result2 == null) return; else {
								cInter2 = result2.cInter;
								pInter2 = result2.pInter;
							}
							null;
						} else {
							z5 = z5 + partSize;
							cInter2 = Std["int"](_$UInt_UInt_$Impl_$.toFloat(z5) % _$UInt_UInt_$Impl_$.toFloat(ch));
							pInter2 = Std["int"](_$UInt_UInt_$Impl_$.toFloat(z5) / _$UInt_UInt_$Impl_$.toFloat(ch));
						}
						++pcount;
					}
				}
			}
			return;
		}
		var _g5 = 0;
		while(_g5 < 8) {
			var pass1 = _g5++;
			var pcount1 = 0;
			var classSet1 = 0;
			while(pcount1 < partRead) {
				if(pass1 == 0) {
					var _g14 = 0;
					while(_g14 < ch) {
						var j2 = _g14++;
						if(!doNotDecode[j2]) {
							var c4 = codebooks[this.classbook];
							var temp = decodeState.decode(c4);
							if(temp == -1) return;
							var i7 = classwords;
							while(--i7 >= 0) {
								classifications[j2 * partRead + i7 + pcount1] = temp % this.classifications;
								temp = temp / this.classifications | 0;
							}
						}
					}
				}
				var _g15 = 0;
				while(_g15 < classwords) {
					var i8 = _g15++;
					if(pcount1 >= partRead) break;
					var _g21 = 0;
					while(_g21 < ch) {
						var j3 = _g21++;
						if(!doNotDecode[j3]) {
							var c5 = classifications[j3 * partRead + pcount1];
							var b3 = this.residueBooks[c5][pass1];
							if(b3 >= 0) {
								var target = residueBuffers[j3];
								var offset = this.begin + pcount1 * partSize;
								var n1 = partSize;
								var book3 = codebooks[b3];
								if(!book3.residueDecode(decodeState,target,offset,n1,this.type)) return;
							}
						}
					}
					++pcount1;
				}
			}
		}
	}
	,__class__: kha_audio2_ogg_vorbis_data_Residue
};
var kha_audio2_ogg_vorbis_data_Setting = function() { };
$hxClasses["kha.audio2.ogg.vorbis.data.Setting"] = kha_audio2_ogg_vorbis_data_Setting;
kha_audio2_ogg_vorbis_data_Setting.__name__ = ["kha","audio2","ogg","vorbis","data","Setting"];
var kha_graphics1_Graphics = function() { };
$hxClasses["kha.graphics1.Graphics"] = kha_graphics1_Graphics;
kha_graphics1_Graphics.__name__ = ["kha","graphics1","Graphics"];
kha_graphics1_Graphics.prototype = {
	__class__: kha_graphics1_Graphics
};
var kha_graphics2_Graphics = function() {
	this.transformations = [];
	this.transformations.push(new kha_math_FastMatrix3(1,0,0,0,1,0,0,0,1));
	this.opacities = [];
	this.opacities.push(1);
	this.prog = null;
};
$hxClasses["kha.graphics2.Graphics"] = kha_graphics2_Graphics;
kha_graphics2_Graphics.__name__ = ["kha","graphics2","Graphics"];
kha_graphics2_Graphics.prototype = {
	begin: function(clear,clearColor) {
		if(clear == null) clear = true;
	}
	,end: function() {
	}
	,flush: function() {
	}
	,clear: function(color) {
	}
	,drawImage: function(img,x,y) {
		this.drawSubImage(img,x,y,0,0,img.get_width(),img.get_height());
	}
	,drawSubImage: function(img,x,y,sx,sy,sw,sh) {
		this.drawScaledSubImage(img,sx,sy,sw,sh,x,y,sw,sh);
	}
	,drawScaledImage: function(img,dx,dy,dw,dh) {
		this.drawScaledSubImage(img,0,0,img.get_width(),img.get_height(),dx,dy,dw,dh);
	}
	,drawScaledSubImage: function(image,sx,sy,sw,sh,dx,dy,dw,dh) {
	}
	,drawRect: function(x,y,width,height,strength) {
		if(strength == null) strength = 1.0;
	}
	,fillRect: function(x,y,width,height) {
	}
	,drawString: function(text,x,y) {
	}
	,drawLine: function(x1,y1,x2,y2,strength) {
		if(strength == null) strength = 1.0;
	}
	,drawVideo: function(video,x,y,width,height) {
	}
	,fillTriangle: function(x1,y1,x2,y2,x3,y3) {
	}
	,get_color: function() {
		return kha__$Color_Color_$Impl_$.Black;
	}
	,set_color: function(color) {
		return kha__$Color_Color_$Impl_$.Black;
	}
	,get_font: function() {
		return null;
	}
	,set_font: function(font) {
		return null;
	}
	,pushTransformation: function(transformation) {
		this.setTransformation(transformation);
		this.transformations.push(transformation);
	}
	,popTransformation: function() {
		var ret = this.transformations.pop();
		this.setTransformation(this.transformations[this.transformations.length - 1]);
		return ret;
	}
	,get_transformation: function() {
		return this.transformations[this.transformations.length - 1];
	}
	,set_transformation: function(transformation) {
		this.setTransformation(transformation);
		return this.transformations[this.transformations.length - 1] = transformation;
	}
	,translation: function(tx,ty) {
		var _this__00 = 1;
		var _this__10 = 0;
		var _this__20 = tx;
		var _this__01 = 0;
		var _this__11 = 1;
		var _this__21 = ty;
		var _this__02 = 0;
		var _this__12 = 0;
		var _this__22 = 1;
		var m = this.transformations[this.transformations.length - 1];
		return new kha_math_FastMatrix3(_this__00 * m._00 + _this__10 * m._01 + _this__20 * m._02,_this__00 * m._10 + _this__10 * m._11 + _this__20 * m._12,_this__00 * m._20 + _this__10 * m._21 + _this__20 * m._22,_this__01 * m._00 + _this__11 * m._01 + _this__21 * m._02,_this__01 * m._10 + _this__11 * m._11 + _this__21 * m._12,_this__01 * m._20 + _this__11 * m._21 + _this__21 * m._22,_this__02 * m._00 + _this__12 * m._01 + _this__22 * m._02,_this__02 * m._10 + _this__12 * m._11 + _this__22 * m._12,_this__02 * m._20 + _this__12 * m._21 + _this__22 * m._22);
	}
	,translate: function(tx,ty) {
		this.set_transformation(this.translation(tx,ty));
	}
	,pushTranslation: function(tx,ty) {
		this.pushTransformation(this.translation(tx,ty));
	}
	,rotation: function(angle,centerx,centery) {
		var _this__00 = 1;
		var _this__10 = 0;
		var _this__20 = centerx;
		var _this__01 = 0;
		var _this__11 = 1;
		var _this__21 = centery;
		var _this__02 = 0;
		var _this__12 = 0;
		var _this__22 = 1;
		var m = new kha_math_FastMatrix3(Math.cos(angle),-Math.sin(angle),0,Math.sin(angle),Math.cos(angle),0,0,0,1);
		var _this__001 = _this__00 * m._00 + _this__10 * m._01 + _this__20 * m._02;
		var _this__101 = _this__00 * m._10 + _this__10 * m._11 + _this__20 * m._12;
		var _this__201 = _this__00 * m._20 + _this__10 * m._21 + _this__20 * m._22;
		var _this__011 = _this__01 * m._00 + _this__11 * m._01 + _this__21 * m._02;
		var _this__111 = _this__01 * m._10 + _this__11 * m._11 + _this__21 * m._12;
		var _this__211 = _this__01 * m._20 + _this__11 * m._21 + _this__21 * m._22;
		var _this__021 = _this__02 * m._00 + _this__12 * m._01 + _this__22 * m._02;
		var _this__121 = _this__02 * m._10 + _this__12 * m._11 + _this__22 * m._12;
		var _this__221 = _this__02 * m._20 + _this__12 * m._21 + _this__22 * m._22;
		var m__00 = 1;
		var m__10 = 0;
		var m__20 = -centerx;
		var m__01 = 0;
		var m__11 = 1;
		var m__21 = -centery;
		var m__02 = 0;
		var m__12 = 0;
		var m__22 = 1;
		var _this__002 = _this__001 * m__00 + _this__101 * m__01 + _this__201 * m__02;
		var _this__102 = _this__001 * m__10 + _this__101 * m__11 + _this__201 * m__12;
		var _this__202 = _this__001 * m__20 + _this__101 * m__21 + _this__201 * m__22;
		var _this__012 = _this__011 * m__00 + _this__111 * m__01 + _this__211 * m__02;
		var _this__112 = _this__011 * m__10 + _this__111 * m__11 + _this__211 * m__12;
		var _this__212 = _this__011 * m__20 + _this__111 * m__21 + _this__211 * m__22;
		var _this__022 = _this__021 * m__00 + _this__121 * m__01 + _this__221 * m__02;
		var _this__122 = _this__021 * m__10 + _this__121 * m__11 + _this__221 * m__12;
		var _this__222 = _this__021 * m__20 + _this__121 * m__21 + _this__221 * m__22;
		var m1 = this.transformations[this.transformations.length - 1];
		return new kha_math_FastMatrix3(_this__002 * m1._00 + _this__102 * m1._01 + _this__202 * m1._02,_this__002 * m1._10 + _this__102 * m1._11 + _this__202 * m1._12,_this__002 * m1._20 + _this__102 * m1._21 + _this__202 * m1._22,_this__012 * m1._00 + _this__112 * m1._01 + _this__212 * m1._02,_this__012 * m1._10 + _this__112 * m1._11 + _this__212 * m1._12,_this__012 * m1._20 + _this__112 * m1._21 + _this__212 * m1._22,_this__022 * m1._00 + _this__122 * m1._01 + _this__222 * m1._02,_this__022 * m1._10 + _this__122 * m1._11 + _this__222 * m1._12,_this__022 * m1._20 + _this__122 * m1._21 + _this__222 * m1._22);
	}
	,rotate: function(angle,centerx,centery) {
		this.set_transformation(this.rotation(angle,centerx,centery));
	}
	,pushRotation: function(angle,centerx,centery) {
		this.pushTransformation(this.rotation(angle,centerx,centery));
	}
	,pushOpacity: function(opacity) {
		this.setOpacity(opacity);
		this.opacities.push(opacity);
	}
	,popOpacity: function() {
		var ret = this.opacities.pop();
		this.setOpacity(this.get_opacity());
		return ret;
	}
	,get_opacity: function() {
		return this.opacities[this.opacities.length - 1];
	}
	,set_opacity: function(opacity) {
		this.setOpacity(opacity);
		return this.opacities[this.opacities.length - 1] = opacity;
	}
	,get_program: function() {
		return this.prog;
	}
	,set_program: function(program) {
		this.setProgram(program);
		return this.prog = program;
	}
	,setBlendingMode: function(source,destination) {
	}
	,setTransformation: function(transformation) {
	}
	,setOpacity: function(opacity) {
	}
	,setProgram: function(program) {
	}
	,__class__: kha_graphics2_Graphics
};
var kha_graphics2_Graphics1 = function(canvas) {
	this.canvas = canvas;
};
$hxClasses["kha.graphics2.Graphics1"] = kha_graphics2_Graphics1;
kha_graphics2_Graphics1.__name__ = ["kha","graphics2","Graphics1"];
kha_graphics2_Graphics1.__interfaces__ = [kha_graphics1_Graphics];
kha_graphics2_Graphics1.prototype = {
	begin: function() {
		if(this.texture == null) this.texture = kha_Image.createRenderTarget(this.canvas.get_width(),this.canvas.get_height());
		this.pixels = this.texture.lock();
	}
	,end: function() {
		this.texture.unlock();
		this.canvas.get_g2().begin();
		this.canvas.get_g2().drawImage(this.texture,0,0);
		this.canvas.get_g2().end();
	}
	,setPixel: function(x,y,color) {
		this.pixels.set(y * this.texture.get_realWidth() * 4 + x * 4,color);
	}
	,__class__: kha_graphics2_Graphics1
};
var kha_graphics2_GraphicsExtension = function() { };
$hxClasses["kha.graphics2.GraphicsExtension"] = kha_graphics2_GraphicsExtension;
kha_graphics2_GraphicsExtension.__name__ = ["kha","graphics2","GraphicsExtension"];
kha_graphics2_GraphicsExtension.drawCircle = function(g2,cx,cy,radius,strength,segments) {
	if(segments == null) segments = 0;
	if(strength == null) strength = 1;
	if(segments <= 0) segments = Math.floor(10 * Math.sqrt(radius));
	var theta = 2 * Math.PI / segments;
	var c = Math.cos(theta);
	var s = Math.sin(theta);
	var x = radius;
	var y = 0.0;
	var _g = 0;
	while(_g < segments) {
		var n = _g++;
		var px = x + cx;
		var py = y + cy;
		var t = x;
		x = c * x - s * y;
		y = c * y + s * t;
		g2.drawLine(px,py,x + cx,y + cy,strength);
	}
};
kha_graphics2_GraphicsExtension.fillCircle = function(g2,cx,cy,radius,segments) {
	if(segments == null) segments = 0;
	if(segments <= 0) segments = Math.floor(10 * Math.sqrt(radius));
	var theta = 2 * Math.PI / segments;
	var c = Math.cos(theta);
	var s = Math.sin(theta);
	var x = radius;
	var y = 0.0;
	var _g = 0;
	while(_g < segments) {
		var n = _g++;
		var px = x + cx;
		var py = y + cy;
		var t = x;
		x = c * x - s * y;
		y = c * y + s * t;
		g2.fillTriangle(px,py,x + cx,y + cy,cx,cy);
	}
};
kha_graphics2_GraphicsExtension.drawPolygon = function(g2,x,y,vertices,strength) {
	if(strength == null) strength = 1;
	var iterator = HxOverrides.iter(vertices);
	var v0 = iterator.next();
	var v1 = v0;
	while(iterator.hasNext()) {
		var v2 = iterator.next();
		g2.drawLine(v1.x + x,v1.y + y,v2.x + x,v2.y + y,strength);
		v1 = v2;
	}
	g2.drawLine(v1.x + x,v1.y + y,v0.x + x,v0.y + y,strength);
};
kha_graphics2_GraphicsExtension.fillPolygon = function(g2,x,y,vertices) {
	var iterator = HxOverrides.iter(vertices);
	var v0 = iterator.next();
	var v1 = v0;
	while(iterator.hasNext()) {
		var v2 = iterator.next();
		g2.fillTriangle(v1.x + x,v1.y + y,v2.x + x,v2.y + y,x,y);
		v1 = v2;
	}
	g2.fillTriangle(v1.x + x,v1.y + y,v0.x + x,v0.y + y,x,y);
};
var kha_graphics4_BlendingOperation = $hxClasses["kha.graphics4.BlendingOperation"] = { __ename__ : ["kha","graphics4","BlendingOperation"], __constructs__ : ["Undefined","BlendOne","BlendZero","SourceAlpha","DestinationAlpha","InverseSourceAlpha","InverseDestinationAlpha"] };
kha_graphics4_BlendingOperation.Undefined = ["Undefined",0];
kha_graphics4_BlendingOperation.Undefined.toString = $estr;
kha_graphics4_BlendingOperation.Undefined.__enum__ = kha_graphics4_BlendingOperation;
kha_graphics4_BlendingOperation.BlendOne = ["BlendOne",1];
kha_graphics4_BlendingOperation.BlendOne.toString = $estr;
kha_graphics4_BlendingOperation.BlendOne.__enum__ = kha_graphics4_BlendingOperation;
kha_graphics4_BlendingOperation.BlendZero = ["BlendZero",2];
kha_graphics4_BlendingOperation.BlendZero.toString = $estr;
kha_graphics4_BlendingOperation.BlendZero.__enum__ = kha_graphics4_BlendingOperation;
kha_graphics4_BlendingOperation.SourceAlpha = ["SourceAlpha",3];
kha_graphics4_BlendingOperation.SourceAlpha.toString = $estr;
kha_graphics4_BlendingOperation.SourceAlpha.__enum__ = kha_graphics4_BlendingOperation;
kha_graphics4_BlendingOperation.DestinationAlpha = ["DestinationAlpha",4];
kha_graphics4_BlendingOperation.DestinationAlpha.toString = $estr;
kha_graphics4_BlendingOperation.DestinationAlpha.__enum__ = kha_graphics4_BlendingOperation;
kha_graphics4_BlendingOperation.InverseSourceAlpha = ["InverseSourceAlpha",5];
kha_graphics4_BlendingOperation.InverseSourceAlpha.toString = $estr;
kha_graphics4_BlendingOperation.InverseSourceAlpha.__enum__ = kha_graphics4_BlendingOperation;
kha_graphics4_BlendingOperation.InverseDestinationAlpha = ["InverseDestinationAlpha",6];
kha_graphics4_BlendingOperation.InverseDestinationAlpha.toString = $estr;
kha_graphics4_BlendingOperation.InverseDestinationAlpha.__enum__ = kha_graphics4_BlendingOperation;
var kha_graphics4_CompareMode = $hxClasses["kha.graphics4.CompareMode"] = { __ename__ : ["kha","graphics4","CompareMode"], __constructs__ : ["Always","Never","Equal","NotEqual","Less","LessEqual","Greater","GreaterEqual"] };
kha_graphics4_CompareMode.Always = ["Always",0];
kha_graphics4_CompareMode.Always.toString = $estr;
kha_graphics4_CompareMode.Always.__enum__ = kha_graphics4_CompareMode;
kha_graphics4_CompareMode.Never = ["Never",1];
kha_graphics4_CompareMode.Never.toString = $estr;
kha_graphics4_CompareMode.Never.__enum__ = kha_graphics4_CompareMode;
kha_graphics4_CompareMode.Equal = ["Equal",2];
kha_graphics4_CompareMode.Equal.toString = $estr;
kha_graphics4_CompareMode.Equal.__enum__ = kha_graphics4_CompareMode;
kha_graphics4_CompareMode.NotEqual = ["NotEqual",3];
kha_graphics4_CompareMode.NotEqual.toString = $estr;
kha_graphics4_CompareMode.NotEqual.__enum__ = kha_graphics4_CompareMode;
kha_graphics4_CompareMode.Less = ["Less",4];
kha_graphics4_CompareMode.Less.toString = $estr;
kha_graphics4_CompareMode.Less.__enum__ = kha_graphics4_CompareMode;
kha_graphics4_CompareMode.LessEqual = ["LessEqual",5];
kha_graphics4_CompareMode.LessEqual.toString = $estr;
kha_graphics4_CompareMode.LessEqual.__enum__ = kha_graphics4_CompareMode;
kha_graphics4_CompareMode.Greater = ["Greater",6];
kha_graphics4_CompareMode.Greater.toString = $estr;
kha_graphics4_CompareMode.Greater.__enum__ = kha_graphics4_CompareMode;
kha_graphics4_CompareMode.GreaterEqual = ["GreaterEqual",7];
kha_graphics4_CompareMode.GreaterEqual.toString = $estr;
kha_graphics4_CompareMode.GreaterEqual.__enum__ = kha_graphics4_CompareMode;
var kha_graphics4_ConstantLocation = function() { };
$hxClasses["kha.graphics4.ConstantLocation"] = kha_graphics4_ConstantLocation;
kha_graphics4_ConstantLocation.__name__ = ["kha","graphics4","ConstantLocation"];
var kha_graphics4_CubeMap = function() { };
$hxClasses["kha.graphics4.CubeMap"] = kha_graphics4_CubeMap;
kha_graphics4_CubeMap.__name__ = ["kha","graphics4","CubeMap"];
kha_graphics4_CubeMap.prototype = {
	__class__: kha_graphics4_CubeMap
};
var kha_graphics4_CullMode = $hxClasses["kha.graphics4.CullMode"] = { __ename__ : ["kha","graphics4","CullMode"], __constructs__ : ["Clockwise","CounterClockwise","None"] };
kha_graphics4_CullMode.Clockwise = ["Clockwise",0];
kha_graphics4_CullMode.Clockwise.toString = $estr;
kha_graphics4_CullMode.Clockwise.__enum__ = kha_graphics4_CullMode;
kha_graphics4_CullMode.CounterClockwise = ["CounterClockwise",1];
kha_graphics4_CullMode.CounterClockwise.toString = $estr;
kha_graphics4_CullMode.CounterClockwise.__enum__ = kha_graphics4_CullMode;
kha_graphics4_CullMode.None = ["None",2];
kha_graphics4_CullMode.None.toString = $estr;
kha_graphics4_CullMode.None.__enum__ = kha_graphics4_CullMode;
var kha_graphics4_FragmentShader = function(source) {
	this.source = source.toString();
	this.type = kha_Sys.gl.FRAGMENT_SHADER;
	this.shader = null;
};
$hxClasses["kha.graphics4.FragmentShader"] = kha_graphics4_FragmentShader;
kha_graphics4_FragmentShader.__name__ = ["kha","graphics4","FragmentShader"];
kha_graphics4_FragmentShader.prototype = {
	__class__: kha_graphics4_FragmentShader
};
var kha_graphics4_Graphics = function() { };
$hxClasses["kha.graphics4.Graphics"] = kha_graphics4_Graphics;
kha_graphics4_Graphics.__name__ = ["kha","graphics4","Graphics"];
kha_graphics4_Graphics.prototype = {
	__class__: kha_graphics4_Graphics
};
var kha_graphics4_ImageShaderPainter = function(g4) {
	this.destinationBlend = kha_graphics4_BlendingOperation.Undefined;
	this.sourceBlend = kha_graphics4_BlendingOperation.Undefined;
	this.myProgram = null;
	this.bilinear = false;
	this.g = g4;
	this.bufferIndex = 0;
	this.initShaders();
	this.initBuffers();
	this.projectionLocation = this.shaderProgram.getConstantLocation("projectionMatrix");
	this.textureLocation = this.shaderProgram.getTextureUnit("tex");
};
$hxClasses["kha.graphics4.ImageShaderPainter"] = kha_graphics4_ImageShaderPainter;
kha_graphics4_ImageShaderPainter.__name__ = ["kha","graphics4","ImageShaderPainter"];
kha_graphics4_ImageShaderPainter.prototype = {
	get_program: function() {
		return this.myProgram;
	}
	,set_program: function(prog) {
		if(prog == null) {
			this.projectionLocation = this.shaderProgram.getConstantLocation("projectionMatrix");
			this.textureLocation = this.shaderProgram.getTextureUnit("tex");
		} else {
			this.projectionLocation = prog.getConstantLocation("projectionMatrix");
			this.textureLocation = prog.getTextureUnit("tex");
		}
		return this.myProgram = prog;
	}
	,setProjection: function(projectionMatrix) {
		this.projectionMatrix = projectionMatrix;
	}
	,initShaders: function() {
		var fragmentShader = new kha_graphics4_FragmentShader(kha_Loader.the.getShader("painter-image.frag"));
		var vertexShader = new kha_graphics4_VertexShader(kha_Loader.the.getShader("painter-image.vert"));
		this.shaderProgram = new kha_graphics4_Program();
		this.shaderProgram.setFragmentShader(fragmentShader);
		this.shaderProgram.setVertexShader(vertexShader);
		this.structure = new kha_graphics4_VertexStructure();
		this.structure.add("vertexPosition",kha_graphics4_VertexData.Float3);
		this.structure.add("texPosition",kha_graphics4_VertexData.Float2);
		this.structure.add("vertexColor",kha_graphics4_VertexData.Float4);
		this.shaderProgram.link(this.structure);
	}
	,initBuffers: function() {
		this.rectVertexBuffer = new kha_graphics4_VertexBuffer(kha_graphics4_ImageShaderPainter.bufferSize * 4,this.structure,kha_graphics4_Usage.DynamicUsage);
		this.rectVertices = this.rectVertexBuffer.lock();
		this.indexBuffer = new kha_graphics4_IndexBuffer(kha_graphics4_ImageShaderPainter.bufferSize * 3 * 2,kha_graphics4_Usage.StaticUsage);
		var indices = this.indexBuffer.lock();
		var _g1 = 0;
		var _g = kha_graphics4_ImageShaderPainter.bufferSize;
		while(_g1 < _g) {
			var i = _g1++;
			indices[i * 3 * 2] = i * 4;
			indices[i * 3 * 2 + 1] = i * 4 + 1;
			indices[i * 3 * 2 + 2] = i * 4 + 2;
			indices[i * 3 * 2 + 3] = i * 4;
			indices[i * 3 * 2 + 4] = i * 4 + 2;
			indices[i * 3 * 2 + 5] = i * 4 + 3;
		}
		this.indexBuffer.unlock();
	}
	,setRectVertices: function(bottomleftx,bottomlefty,topleftx,toplefty,toprightx,toprighty,bottomrightx,bottomrighty) {
		var baseIndex = this.bufferIndex * kha_graphics4_ImageShaderPainter.vertexSize * 4;
		this.rectVertices[baseIndex] = bottomleftx;
		this.rectVertices[baseIndex + 1] = bottomlefty;
		this.rectVertices[baseIndex + 2] = -5.0;
		this.rectVertices[baseIndex + 9] = topleftx;
		this.rectVertices[baseIndex + 10] = toplefty;
		this.rectVertices[baseIndex + 11] = -5.0;
		this.rectVertices[baseIndex + 18] = toprightx;
		this.rectVertices[baseIndex + 19] = toprighty;
		this.rectVertices[baseIndex + 20] = -5.0;
		this.rectVertices[baseIndex + 27] = bottomrightx;
		this.rectVertices[baseIndex + 28] = bottomrighty;
		this.rectVertices[baseIndex + 29] = -5.0;
	}
	,setRectTexCoords: function(left,top,right,bottom) {
		var baseIndex = this.bufferIndex * kha_graphics4_ImageShaderPainter.vertexSize * 4;
		this.rectVertices[baseIndex + 3] = left;
		this.rectVertices[baseIndex + 4] = bottom;
		this.rectVertices[baseIndex + 12] = left;
		this.rectVertices[baseIndex + 13] = top;
		this.rectVertices[baseIndex + 21] = right;
		this.rectVertices[baseIndex + 22] = top;
		this.rectVertices[baseIndex + 30] = right;
		this.rectVertices[baseIndex + 31] = bottom;
	}
	,setRectColor: function(r,g,b,a) {
		var baseIndex = this.bufferIndex * kha_graphics4_ImageShaderPainter.vertexSize * 4;
		this.rectVertices[baseIndex + 5] = r;
		this.rectVertices[baseIndex + 6] = g;
		this.rectVertices[baseIndex + 7] = b;
		this.rectVertices[baseIndex + 8] = a;
		this.rectVertices[baseIndex + 14] = r;
		this.rectVertices[baseIndex + 15] = g;
		this.rectVertices[baseIndex + 16] = b;
		this.rectVertices[baseIndex + 17] = a;
		this.rectVertices[baseIndex + 23] = r;
		this.rectVertices[baseIndex + 24] = g;
		this.rectVertices[baseIndex + 25] = b;
		this.rectVertices[baseIndex + 26] = a;
		this.rectVertices[baseIndex + 32] = r;
		this.rectVertices[baseIndex + 33] = g;
		this.rectVertices[baseIndex + 34] = b;
		this.rectVertices[baseIndex + 35] = a;
	}
	,drawBuffer: function() {
		this.rectVertexBuffer.unlock();
		this.g.setVertexBuffer(this.rectVertexBuffer);
		this.g.setIndexBuffer(this.indexBuffer);
		this.g.setProgram(this.get_program() == null?this.shaderProgram:this.get_program());
		this.g.setTexture(this.textureLocation,this.lastTexture);
		this.g.setTextureParameters(this.textureLocation,kha_graphics4_TextureAddressing.Clamp,kha_graphics4_TextureAddressing.Clamp,this.bilinear?kha_graphics4_TextureFilter.LinearFilter:kha_graphics4_TextureFilter.PointFilter,this.bilinear?kha_graphics4_TextureFilter.LinearFilter:kha_graphics4_TextureFilter.PointFilter,kha_graphics4_MipMapFilter.NoMipFilter);
		this.g.setMatrix(this.projectionLocation,this.projectionMatrix);
		if(this.sourceBlend == kha_graphics4_BlendingOperation.Undefined || this.destinationBlend == kha_graphics4_BlendingOperation.Undefined) this.g.setBlendingMode(kha_graphics4_BlendingOperation.BlendOne,kha_graphics4_BlendingOperation.InverseSourceAlpha); else this.g.setBlendingMode(this.sourceBlend,this.destinationBlend);
		this.g.drawIndexedVertices(0,this.bufferIndex * 2 * 3);
		this.g.setTexture(this.textureLocation,null);
		this.bufferIndex = 0;
		this.rectVertices = this.rectVertexBuffer.lock();
	}
	,setBilinearFilter: function(bilinear) {
		this.end();
		this.bilinear = bilinear;
	}
	,drawImage: function(img,bottomleftx,bottomlefty,topleftx,toplefty,toprightx,toprighty,bottomrightx,bottomrighty,opacity,color) {
		var tex = img;
		if(this.bufferIndex + 1 >= kha_graphics4_ImageShaderPainter.bufferSize || this.lastTexture != null && tex != this.lastTexture) this.drawBuffer();
		this.setRectColor(kha__$Color_Color_$Impl_$.get_Rb(color) * 0.00392156862745098,kha__$Color_Color_$Impl_$.get_Gb(color) * 0.00392156862745098,kha__$Color_Color_$Impl_$.get_Bb(color) * 0.00392156862745098,opacity);
		this.setRectTexCoords(0,0,tex.get_width() / tex.get_realWidth(),tex.get_height() / tex.get_realHeight());
		this.setRectVertices(bottomleftx,bottomlefty,topleftx,toplefty,toprightx,toprighty,bottomrightx,bottomrighty);
		++this.bufferIndex;
		this.lastTexture = tex;
	}
	,drawImage2: function(img,sx,sy,sw,sh,bottomleftx,bottomlefty,topleftx,toplefty,toprightx,toprighty,bottomrightx,bottomrighty,opacity,color) {
		var tex = img;
		if(this.bufferIndex + 1 >= kha_graphics4_ImageShaderPainter.bufferSize || this.lastTexture != null && tex != this.lastTexture) this.drawBuffer();
		this.setRectTexCoords(sx / tex.get_realWidth(),sy / tex.get_realHeight(),(sx + sw) / tex.get_realWidth(),(sy + sh) / tex.get_realHeight());
		this.setRectColor(kha__$Color_Color_$Impl_$.get_Rb(color) * 0.00392156862745098,kha__$Color_Color_$Impl_$.get_Gb(color) * 0.00392156862745098,kha__$Color_Color_$Impl_$.get_Bb(color) * 0.00392156862745098,opacity);
		this.setRectVertices(bottomleftx,bottomlefty,topleftx,toplefty,toprightx,toprighty,bottomrightx,bottomrighty);
		++this.bufferIndex;
		this.lastTexture = tex;
	}
	,drawImageScale: function(img,sx,sy,sw,sh,left,top,right,bottom,opacity,color) {
		var tex = img;
		if(this.bufferIndex + 1 >= kha_graphics4_ImageShaderPainter.bufferSize || this.lastTexture != null && tex != this.lastTexture) this.drawBuffer();
		this.setRectTexCoords(sx / tex.get_realWidth(),sy / tex.get_realHeight(),(sx + sw) / tex.get_realWidth(),(sy + sh) / tex.get_realHeight());
		this.setRectColor(kha__$Color_Color_$Impl_$.get_Rb(color) * 0.00392156862745098,kha__$Color_Color_$Impl_$.get_Gb(color) * 0.00392156862745098,kha__$Color_Color_$Impl_$.get_Bb(color) * 0.00392156862745098,opacity);
		this.setRectVertices(left,bottom,left,top,right,top,right,bottom);
		++this.bufferIndex;
		this.lastTexture = tex;
	}
	,end: function() {
		if(this.bufferIndex > 0) this.drawBuffer();
		this.lastTexture = null;
	}
	,__class__: kha_graphics4_ImageShaderPainter
};
var kha_graphics4_ColoredShaderPainter = function(g4) {
	this.destinationBlend = kha_graphics4_BlendingOperation.Undefined;
	this.sourceBlend = kha_graphics4_BlendingOperation.Undefined;
	this.myProgram = null;
	this.g = g4;
	this.bufferIndex = 0;
	this.triangleBufferIndex = 0;
	this.initShaders();
	this.initBuffers();
	this.projectionLocation = this.shaderProgram.getConstantLocation("projectionMatrix");
};
$hxClasses["kha.graphics4.ColoredShaderPainter"] = kha_graphics4_ColoredShaderPainter;
kha_graphics4_ColoredShaderPainter.__name__ = ["kha","graphics4","ColoredShaderPainter"];
kha_graphics4_ColoredShaderPainter.prototype = {
	get_program: function() {
		return this.myProgram;
	}
	,set_program: function(prog) {
		if(prog == null) this.projectionLocation = this.shaderProgram.getConstantLocation("projectionMatrix"); else this.projectionLocation = prog.getConstantLocation("projectionMatrix");
		return this.myProgram = prog;
	}
	,setProjection: function(projectionMatrix) {
		this.projectionMatrix = projectionMatrix;
	}
	,initShaders: function() {
		var fragmentShader = new kha_graphics4_FragmentShader(kha_Loader.the.getShader("painter-colored.frag"));
		var vertexShader = new kha_graphics4_VertexShader(kha_Loader.the.getShader("painter-colored.vert"));
		this.shaderProgram = new kha_graphics4_Program();
		this.shaderProgram.setFragmentShader(fragmentShader);
		this.shaderProgram.setVertexShader(vertexShader);
		this.structure = new kha_graphics4_VertexStructure();
		this.structure.add("vertexPosition",kha_graphics4_VertexData.Float3);
		this.structure.add("vertexColor",kha_graphics4_VertexData.Float4);
		this.shaderProgram.link(this.structure);
	}
	,initBuffers: function() {
		this.rectVertexBuffer = new kha_graphics4_VertexBuffer(kha_graphics4_ColoredShaderPainter.bufferSize * 4,this.structure,kha_graphics4_Usage.DynamicUsage);
		this.rectVertices = this.rectVertexBuffer.lock();
		this.indexBuffer = new kha_graphics4_IndexBuffer(kha_graphics4_ColoredShaderPainter.bufferSize * 3 * 2,kha_graphics4_Usage.StaticUsage);
		var indices = this.indexBuffer.lock();
		var _g1 = 0;
		var _g = kha_graphics4_ColoredShaderPainter.bufferSize;
		while(_g1 < _g) {
			var i = _g1++;
			indices[i * 3 * 2] = i * 4;
			indices[i * 3 * 2 + 1] = i * 4 + 1;
			indices[i * 3 * 2 + 2] = i * 4 + 2;
			indices[i * 3 * 2 + 3] = i * 4;
			indices[i * 3 * 2 + 4] = i * 4 + 2;
			indices[i * 3 * 2 + 5] = i * 4 + 3;
		}
		this.indexBuffer.unlock();
		this.triangleVertexBuffer = new kha_graphics4_VertexBuffer(kha_graphics4_ColoredShaderPainter.triangleBufferSize * 3,this.structure,kha_graphics4_Usage.DynamicUsage);
		this.triangleVertices = this.triangleVertexBuffer.lock();
		this.triangleIndexBuffer = new kha_graphics4_IndexBuffer(kha_graphics4_ColoredShaderPainter.triangleBufferSize * 3,kha_graphics4_Usage.StaticUsage);
		var triIndices = this.triangleIndexBuffer.lock();
		var _g11 = 0;
		var _g2 = kha_graphics4_ColoredShaderPainter.bufferSize;
		while(_g11 < _g2) {
			var i1 = _g11++;
			triIndices[i1 * 3] = i1 * 3;
			triIndices[i1 * 3 + 1] = i1 * 3 + 1;
			triIndices[i1 * 3 + 2] = i1 * 3 + 2;
		}
		this.triangleIndexBuffer.unlock();
	}
	,setRectVertices: function(bottomleftx,bottomlefty,topleftx,toplefty,toprightx,toprighty,bottomrightx,bottomrighty) {
		var baseIndex = this.bufferIndex * 7 * 4;
		this.rectVertices[baseIndex] = bottomleftx;
		this.rectVertices[baseIndex + 1] = bottomlefty;
		this.rectVertices[baseIndex + 2] = -5.0;
		this.rectVertices[baseIndex + 7] = topleftx;
		this.rectVertices[baseIndex + 8] = toplefty;
		this.rectVertices[baseIndex + 9] = -5.0;
		this.rectVertices[baseIndex + 14] = toprightx;
		this.rectVertices[baseIndex + 15] = toprighty;
		this.rectVertices[baseIndex + 16] = -5.0;
		this.rectVertices[baseIndex + 21] = bottomrightx;
		this.rectVertices[baseIndex + 22] = bottomrighty;
		this.rectVertices[baseIndex + 23] = -5.0;
	}
	,setRectColors: function(color) {
		var baseIndex = this.bufferIndex * 7 * 4;
		var value = kha__$Color_Color_$Impl_$.get_Rb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 3] = value;
		var value1 = kha__$Color_Color_$Impl_$.get_Gb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 4] = value1;
		var value2 = kha__$Color_Color_$Impl_$.get_Bb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 5] = value2;
		var value3 = kha__$Color_Color_$Impl_$.get_Ab(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 6] = value3;
		var value4 = kha__$Color_Color_$Impl_$.get_Rb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 10] = value4;
		var value5 = kha__$Color_Color_$Impl_$.get_Gb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 11] = value5;
		var value6 = kha__$Color_Color_$Impl_$.get_Bb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 12] = value6;
		var value7 = kha__$Color_Color_$Impl_$.get_Ab(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 13] = value7;
		var value8 = kha__$Color_Color_$Impl_$.get_Rb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 17] = value8;
		var value9 = kha__$Color_Color_$Impl_$.get_Gb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 18] = value9;
		var value10 = kha__$Color_Color_$Impl_$.get_Bb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 19] = value10;
		var value11 = kha__$Color_Color_$Impl_$.get_Ab(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 20] = value11;
		var value12 = kha__$Color_Color_$Impl_$.get_Rb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 24] = value12;
		var value13 = kha__$Color_Color_$Impl_$.get_Gb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 25] = value13;
		var value14 = kha__$Color_Color_$Impl_$.get_Bb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 26] = value14;
		var value15 = kha__$Color_Color_$Impl_$.get_Ab(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 27] = value15;
	}
	,setTriVertices: function(x1,y1,x2,y2,x3,y3) {
		var baseIndex = this.triangleBufferIndex * 7 * 3;
		this.triangleVertices[baseIndex] = x1;
		this.triangleVertices[baseIndex + 1] = y1;
		this.triangleVertices[baseIndex + 2] = -5.0;
		this.triangleVertices[baseIndex + 7] = x2;
		this.triangleVertices[baseIndex + 8] = y2;
		this.triangleVertices[baseIndex + 9] = -5.0;
		this.triangleVertices[baseIndex + 14] = x3;
		this.triangleVertices[baseIndex + 15] = y3;
		this.triangleVertices[baseIndex + 16] = -5.0;
	}
	,setTriColors: function(color) {
		var baseIndex = this.triangleBufferIndex * 7 * 3;
		var value = kha__$Color_Color_$Impl_$.get_Rb(color) * 0.00392156862745098;
		this.triangleVertices[baseIndex + 3] = value;
		var value1 = kha__$Color_Color_$Impl_$.get_Gb(color) * 0.00392156862745098;
		this.triangleVertices[baseIndex + 4] = value1;
		var value2 = kha__$Color_Color_$Impl_$.get_Bb(color) * 0.00392156862745098;
		this.triangleVertices[baseIndex + 5] = value2;
		var value3 = kha__$Color_Color_$Impl_$.get_Ab(color) * 0.00392156862745098;
		this.triangleVertices[baseIndex + 6] = value3;
		var value4 = kha__$Color_Color_$Impl_$.get_Rb(color) * 0.00392156862745098;
		this.triangleVertices[baseIndex + 10] = value4;
		var value5 = kha__$Color_Color_$Impl_$.get_Gb(color) * 0.00392156862745098;
		this.triangleVertices[baseIndex + 11] = value5;
		var value6 = kha__$Color_Color_$Impl_$.get_Bb(color) * 0.00392156862745098;
		this.triangleVertices[baseIndex + 12] = value6;
		var value7 = kha__$Color_Color_$Impl_$.get_Ab(color) * 0.00392156862745098;
		this.triangleVertices[baseIndex + 13] = value7;
		var value8 = kha__$Color_Color_$Impl_$.get_Rb(color) * 0.00392156862745098;
		this.triangleVertices[baseIndex + 17] = value8;
		var value9 = kha__$Color_Color_$Impl_$.get_Gb(color) * 0.00392156862745098;
		this.triangleVertices[baseIndex + 18] = value9;
		var value10 = kha__$Color_Color_$Impl_$.get_Bb(color) * 0.00392156862745098;
		this.triangleVertices[baseIndex + 19] = value10;
		var value11 = kha__$Color_Color_$Impl_$.get_Ab(color) * 0.00392156862745098;
		this.triangleVertices[baseIndex + 20] = value11;
	}
	,drawBuffer: function(trisDone) {
		if(!trisDone) {
			if(this.triangleBufferIndex > 0) this.drawTriBuffer(true);
		}
		this.rectVertexBuffer.unlock();
		this.g.setVertexBuffer(this.rectVertexBuffer);
		this.g.setIndexBuffer(this.indexBuffer);
		this.g.setProgram(this.get_program() == null?this.shaderProgram:this.get_program());
		this.g.setMatrix(this.projectionLocation,this.projectionMatrix);
		if(this.sourceBlend == kha_graphics4_BlendingOperation.Undefined || this.destinationBlend == kha_graphics4_BlendingOperation.Undefined) this.g.setBlendingMode(kha_graphics4_BlendingOperation.SourceAlpha,kha_graphics4_BlendingOperation.InverseSourceAlpha); else this.g.setBlendingMode(this.sourceBlend,this.destinationBlend);
		this.g.drawIndexedVertices(0,this.bufferIndex * 2 * 3);
		this.bufferIndex = 0;
		this.rectVertices = this.rectVertexBuffer.lock();
	}
	,drawTriBuffer: function(rectsDone) {
		if(!rectsDone) {
			if(this.bufferIndex > 0) this.drawBuffer(true);
		}
		this.triangleVertexBuffer.unlock();
		this.g.setVertexBuffer(this.triangleVertexBuffer);
		this.g.setIndexBuffer(this.triangleIndexBuffer);
		this.g.setProgram(this.get_program() == null?this.shaderProgram:this.get_program());
		this.g.setMatrix(this.projectionLocation,this.projectionMatrix);
		if(this.sourceBlend == kha_graphics4_BlendingOperation.Undefined || this.destinationBlend == kha_graphics4_BlendingOperation.Undefined) this.g.setBlendingMode(kha_graphics4_BlendingOperation.SourceAlpha,kha_graphics4_BlendingOperation.InverseSourceAlpha); else this.g.setBlendingMode(this.sourceBlend,this.destinationBlend);
		this.g.drawIndexedVertices(0,this.triangleBufferIndex * 3);
		this.triangleBufferIndex = 0;
		this.triangleVertices = this.triangleVertexBuffer.lock();
	}
	,fillRect: function(color,bottomleftx,bottomlefty,topleftx,toplefty,toprightx,toprighty,bottomrightx,bottomrighty) {
		if(this.bufferIndex + 1 >= kha_graphics4_ColoredShaderPainter.bufferSize) this.drawBuffer(false);
		this.setRectColors(color);
		this.setRectVertices(bottomleftx,bottomlefty,topleftx,toplefty,toprightx,toprighty,bottomrightx,bottomrighty);
		++this.bufferIndex;
	}
	,fillTriangle: function(color,x1,y1,x2,y2,x3,y3) {
		if(this.triangleBufferIndex + 1 >= kha_graphics4_ColoredShaderPainter.triangleBufferSize) this.drawTriBuffer(false);
		this.setTriColors(color);
		this.setTriVertices(x1,y1,x2,y2,x3,y3);
		++this.triangleBufferIndex;
	}
	,endTris: function(rectsDone) {
		if(this.triangleBufferIndex > 0) this.drawTriBuffer(rectsDone);
	}
	,endRects: function(trisDone) {
		if(this.bufferIndex > 0) this.drawBuffer(trisDone);
	}
	,end: function() {
		if(this.triangleBufferIndex > 0) this.drawTriBuffer(false);
		if(this.bufferIndex > 0) this.drawBuffer(false);
	}
	,__class__: kha_graphics4_ColoredShaderPainter
};
var kha_graphics4_TextShaderPainter = function(g4) {
	this.destinationBlend = kha_graphics4_BlendingOperation.Undefined;
	this.sourceBlend = kha_graphics4_BlendingOperation.Undefined;
	this.myProgram = null;
	this.g = g4;
	this.bufferIndex = 0;
	this.initShaders();
	this.initBuffers();
	this.projectionLocation = this.shaderProgram.getConstantLocation("projectionMatrix");
	this.textureLocation = this.shaderProgram.getTextureUnit("tex");
};
$hxClasses["kha.graphics4.TextShaderPainter"] = kha_graphics4_TextShaderPainter;
kha_graphics4_TextShaderPainter.__name__ = ["kha","graphics4","TextShaderPainter"];
kha_graphics4_TextShaderPainter.prototype = {
	get_program: function() {
		return this.myProgram;
	}
	,set_program: function(prog) {
		if(prog == null) {
			this.projectionLocation = this.shaderProgram.getConstantLocation("projectionMatrix");
			this.textureLocation = this.shaderProgram.getTextureUnit("tex");
		} else {
			this.projectionLocation = prog.getConstantLocation("projectionMatrix");
			this.textureLocation = prog.getTextureUnit("tex");
		}
		return this.myProgram = prog;
	}
	,setProjection: function(projectionMatrix) {
		this.projectionMatrix = projectionMatrix;
	}
	,initShaders: function() {
		var fragmentShader = new kha_graphics4_FragmentShader(kha_Loader.the.getShader("painter-text.frag"));
		var vertexShader = new kha_graphics4_VertexShader(kha_Loader.the.getShader("painter-text.vert"));
		this.shaderProgram = new kha_graphics4_Program();
		this.shaderProgram.setFragmentShader(fragmentShader);
		this.shaderProgram.setVertexShader(vertexShader);
		this.structure = new kha_graphics4_VertexStructure();
		this.structure.add("vertexPosition",kha_graphics4_VertexData.Float3);
		this.structure.add("texPosition",kha_graphics4_VertexData.Float2);
		this.structure.add("vertexColor",kha_graphics4_VertexData.Float4);
		this.shaderProgram.link(this.structure);
	}
	,initBuffers: function() {
		this.rectVertexBuffer = new kha_graphics4_VertexBuffer(kha_graphics4_TextShaderPainter.bufferSize * 4,this.structure,kha_graphics4_Usage.DynamicUsage);
		this.rectVertices = this.rectVertexBuffer.lock();
		this.indexBuffer = new kha_graphics4_IndexBuffer(kha_graphics4_TextShaderPainter.bufferSize * 3 * 2,kha_graphics4_Usage.StaticUsage);
		var indices = this.indexBuffer.lock();
		var _g1 = 0;
		var _g = kha_graphics4_TextShaderPainter.bufferSize;
		while(_g1 < _g) {
			var i = _g1++;
			indices[i * 3 * 2] = i * 4;
			indices[i * 3 * 2 + 1] = i * 4 + 1;
			indices[i * 3 * 2 + 2] = i * 4 + 2;
			indices[i * 3 * 2 + 3] = i * 4;
			indices[i * 3 * 2 + 4] = i * 4 + 2;
			indices[i * 3 * 2 + 5] = i * 4 + 3;
		}
		this.indexBuffer.unlock();
	}
	,setRectVertices: function(bottomleftx,bottomlefty,topleftx,toplefty,toprightx,toprighty,bottomrightx,bottomrighty) {
		var baseIndex = this.bufferIndex * 9 * 4;
		this.rectVertices[baseIndex] = bottomleftx;
		this.rectVertices[baseIndex + 1] = bottomlefty;
		this.rectVertices[baseIndex + 2] = -5.0;
		this.rectVertices[baseIndex + 9] = topleftx;
		this.rectVertices[baseIndex + 10] = toplefty;
		this.rectVertices[baseIndex + 11] = -5.0;
		this.rectVertices[baseIndex + 18] = toprightx;
		this.rectVertices[baseIndex + 19] = toprighty;
		this.rectVertices[baseIndex + 20] = -5.0;
		this.rectVertices[baseIndex + 27] = bottomrightx;
		this.rectVertices[baseIndex + 28] = bottomrighty;
		this.rectVertices[baseIndex + 29] = -5.0;
	}
	,setRectTexCoords: function(left,top,right,bottom) {
		var baseIndex = this.bufferIndex * 9 * 4;
		this.rectVertices[baseIndex + 3] = left;
		this.rectVertices[baseIndex + 4] = bottom;
		this.rectVertices[baseIndex + 12] = left;
		this.rectVertices[baseIndex + 13] = top;
		this.rectVertices[baseIndex + 21] = right;
		this.rectVertices[baseIndex + 22] = top;
		this.rectVertices[baseIndex + 30] = right;
		this.rectVertices[baseIndex + 31] = bottom;
	}
	,setRectColors: function(color) {
		var baseIndex = this.bufferIndex * 9 * 4;
		var value = kha__$Color_Color_$Impl_$.get_Rb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 5] = value;
		var value1 = kha__$Color_Color_$Impl_$.get_Gb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 6] = value1;
		var value2 = kha__$Color_Color_$Impl_$.get_Bb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 7] = value2;
		var value3 = kha__$Color_Color_$Impl_$.get_Ab(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 8] = value3;
		var value4 = kha__$Color_Color_$Impl_$.get_Rb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 14] = value4;
		var value5 = kha__$Color_Color_$Impl_$.get_Gb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 15] = value5;
		var value6 = kha__$Color_Color_$Impl_$.get_Bb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 16] = value6;
		var value7 = kha__$Color_Color_$Impl_$.get_Ab(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 17] = value7;
		var value8 = kha__$Color_Color_$Impl_$.get_Rb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 23] = value8;
		var value9 = kha__$Color_Color_$Impl_$.get_Gb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 24] = value9;
		var value10 = kha__$Color_Color_$Impl_$.get_Bb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 25] = value10;
		var value11 = kha__$Color_Color_$Impl_$.get_Ab(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 26] = value11;
		var value12 = kha__$Color_Color_$Impl_$.get_Rb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 32] = value12;
		var value13 = kha__$Color_Color_$Impl_$.get_Gb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 33] = value13;
		var value14 = kha__$Color_Color_$Impl_$.get_Bb(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 34] = value14;
		var value15 = kha__$Color_Color_$Impl_$.get_Ab(color) * 0.00392156862745098;
		this.rectVertices[baseIndex + 35] = value15;
	}
	,drawBuffer: function() {
		this.rectVertexBuffer.unlock();
		this.g.setVertexBuffer(this.rectVertexBuffer);
		this.g.setIndexBuffer(this.indexBuffer);
		this.g.setProgram(this.get_program() == null?this.shaderProgram:this.get_program());
		this.g.setTexture(this.textureLocation,this.lastTexture);
		this.g.setMatrix(this.projectionLocation,this.projectionMatrix);
		if(this.sourceBlend == kha_graphics4_BlendingOperation.Undefined || this.destinationBlend == kha_graphics4_BlendingOperation.Undefined) this.g.setBlendingMode(kha_graphics4_BlendingOperation.SourceAlpha,kha_graphics4_BlendingOperation.InverseSourceAlpha); else this.g.setBlendingMode(this.sourceBlend,this.destinationBlend);
		this.g.drawIndexedVertices(0,this.bufferIndex * 2 * 3);
		this.g.setTexture(this.textureLocation,null);
		this.bufferIndex = 0;
		this.rectVertices = this.rectVertexBuffer.lock();
	}
	,setFont: function(font) {
		this.font = js_Boot.__cast(font , kha_Kravur);
	}
	,startString: function(text) {
		this.text = text;
	}
	,charCodeAt: function(position) {
		return HxOverrides.cca(this.text,position);
	}
	,stringLength: function() {
		return this.text.length;
	}
	,endString: function() {
		this.text = null;
	}
	,drawString: function(text,color,x,y,transformation) {
		var tex = this.font.getTexture();
		if(this.lastTexture != null && tex != this.lastTexture) this.drawBuffer();
		this.lastTexture = tex;
		var xpos = x;
		var ypos = y;
		this.startString(text);
		var _g1 = 0;
		var _g = this.stringLength();
		while(_g1 < _g) {
			var i = _g1++;
			var q = this.font.getBakedQuad(this.charCodeAt(i) - 32,xpos,ypos);
			if(q != null) {
				if(this.bufferIndex + 1 >= kha_graphics4_TextShaderPainter.bufferSize) this.drawBuffer();
				this.setRectColors(color);
				this.setRectTexCoords(q.s0 * tex.get_width() / tex.get_realWidth(),q.t0 * tex.get_height() / tex.get_realHeight(),q.s1 * tex.get_width() / tex.get_realWidth(),q.t1 * tex.get_height() / tex.get_realHeight());
				var value_x = q.x0;
				var value_y = q.y1;
				var w = transformation._02 * value_x + transformation._12 * value_y + transformation._22;
				var x1 = (transformation._00 * value_x + transformation._10 * value_y + transformation._20) / w;
				var y1 = (transformation._01 * value_x + transformation._11 * value_y + transformation._21) / w;
				var p0_x = x1;
				var p0_y = y1;
				var value_x1 = q.x0;
				var value_y1 = q.y0;
				var w1 = transformation._02 * value_x1 + transformation._12 * value_y1 + transformation._22;
				var x2 = (transformation._00 * value_x1 + transformation._10 * value_y1 + transformation._20) / w1;
				var y2 = (transformation._01 * value_x1 + transformation._11 * value_y1 + transformation._21) / w1;
				var p1_x = x2;
				var p1_y = y2;
				var value_x2 = q.x1;
				var value_y2 = q.y0;
				var w2 = transformation._02 * value_x2 + transformation._12 * value_y2 + transformation._22;
				var x3 = (transformation._00 * value_x2 + transformation._10 * value_y2 + transformation._20) / w2;
				var y3 = (transformation._01 * value_x2 + transformation._11 * value_y2 + transformation._21) / w2;
				var p2_x = x3;
				var p2_y = y3;
				var value_x3 = q.x1;
				var value_y3 = q.y1;
				var w3 = transformation._02 * value_x3 + transformation._12 * value_y3 + transformation._22;
				var x4 = (transformation._00 * value_x3 + transformation._10 * value_y3 + transformation._20) / w3;
				var y4 = (transformation._01 * value_x3 + transformation._11 * value_y3 + transformation._21) / w3;
				var p3_x = x4;
				var p3_y = y4;
				this.setRectVertices(p0_x,p0_y,p1_x,p1_y,p2_x,p2_y,p3_x,p3_y);
				xpos += q.xadvance;
				++this.bufferIndex;
			}
		}
		this.endString();
	}
	,end: function() {
		if(this.bufferIndex > 0) this.drawBuffer();
		this.lastTexture = null;
	}
	,__class__: kha_graphics4_TextShaderPainter
};
var kha_graphics4_Graphics2 = function(canvas) {
	kha_graphics2_Graphics.call(this);
	this.set_color(kha__$Color_Color_$Impl_$.White);
	this.canvas = canvas;
	this.g = canvas.get_g4();
	this.imagePainter = new kha_graphics4_ImageShaderPainter(this.g);
	this.coloredPainter = new kha_graphics4_ColoredShaderPainter(this.g);
	this.textPainter = new kha_graphics4_TextShaderPainter(this.g);
	this.setProjection();
	var fragmentShader = new kha_graphics4_FragmentShader(kha_Loader.the.getShader("painter-video.frag"));
	var vertexShader = new kha_graphics4_VertexShader(kha_Loader.the.getShader("painter-video.vert"));
	this.videoProgram = new kha_graphics4_Program();
	this.videoProgram.setFragmentShader(fragmentShader);
	this.videoProgram.setVertexShader(vertexShader);
	var structure = new kha_graphics4_VertexStructure();
	structure.add("vertexPosition",kha_graphics4_VertexData.Float3);
	structure.add("texPosition",kha_graphics4_VertexData.Float2);
	structure.add("vertexColor",kha_graphics4_VertexData.Float4);
	this.videoProgram.link(structure);
};
$hxClasses["kha.graphics4.Graphics2"] = kha_graphics4_Graphics2;
kha_graphics4_Graphics2.__name__ = ["kha","graphics4","Graphics2"];
kha_graphics4_Graphics2.upperPowerOfTwo = function(v) {
	v--;
	v |= v >>> 1;
	v |= v >>> 2;
	v |= v >>> 4;
	v |= v >>> 8;
	v |= v >>> 16;
	v++;
	return v;
};
kha_graphics4_Graphics2.__super__ = kha_graphics2_Graphics;
kha_graphics4_Graphics2.prototype = $extend(kha_graphics2_Graphics.prototype,{
	setProjection: function() {
		var width = this.canvas.get_width();
		var height = this.canvas.get_height();
		if(js_Boot.__instanceof(this.canvas,kha_Framebuffer)) this.projectionMatrix = kha_math_Matrix4.orthogonalProjection(0,width,height,0,0.1,1000); else {
			if(!kha_Image.get_nonPow2Supported()) {
				width = kha_graphics4_Graphics2.upperPowerOfTwo(width);
				height = kha_graphics4_Graphics2.upperPowerOfTwo(height);
			}
			if(this.g.renderTargetsInvertedY()) this.projectionMatrix = kha_math_Matrix4.orthogonalProjection(0,width,0,height,0.1,1000); else this.projectionMatrix = kha_math_Matrix4.orthogonalProjection(0,width,height,0,0.1,1000);
		}
		this.imagePainter.setProjection(this.projectionMatrix);
		this.coloredPainter.setProjection(this.projectionMatrix);
		this.textPainter.setProjection(this.projectionMatrix);
	}
	,drawImage: function(img,x,y) {
		this.coloredPainter.end();
		this.textPainter.end();
		var xw = x + img.get_width();
		var yh = y + img.get_height();
		var _this = this.transformations[this.transformations.length - 1];
		var value_x = x;
		var value_y = yh;
		var w = _this._02 * value_x + _this._12 * value_y + _this._22;
		var x1 = (_this._00 * value_x + _this._10 * value_y + _this._20) / w;
		var y1 = (_this._01 * value_x + _this._11 * value_y + _this._21) / w;
		var p1_x = x1;
		var p1_y = y1;
		var _this1 = this.transformations[this.transformations.length - 1];
		var value_x1 = x;
		var value_y1 = y;
		var w1 = _this1._02 * value_x1 + _this1._12 * value_y1 + _this1._22;
		var x2 = (_this1._00 * value_x1 + _this1._10 * value_y1 + _this1._20) / w1;
		var y2 = (_this1._01 * value_x1 + _this1._11 * value_y1 + _this1._21) / w1;
		var p2_x = x2;
		var p2_y = y2;
		var _this2 = this.transformations[this.transformations.length - 1];
		var value_x2 = xw;
		var value_y2 = y;
		var w2 = _this2._02 * value_x2 + _this2._12 * value_y2 + _this2._22;
		var x3 = (_this2._00 * value_x2 + _this2._10 * value_y2 + _this2._20) / w2;
		var y3 = (_this2._01 * value_x2 + _this2._11 * value_y2 + _this2._21) / w2;
		var p3_x = x3;
		var p3_y = y3;
		var _this3 = this.transformations[this.transformations.length - 1];
		var value_x3 = xw;
		var value_y3 = yh;
		var w3 = _this3._02 * value_x3 + _this3._12 * value_y3 + _this3._22;
		var x4 = (_this3._00 * value_x3 + _this3._10 * value_y3 + _this3._20) / w3;
		var y4 = (_this3._01 * value_x3 + _this3._11 * value_y3 + _this3._21) / w3;
		var p4_x = x4;
		var p4_y = y4;
		this.imagePainter.drawImage(img,p1_x,p1_y,p2_x,p2_y,p3_x,p3_y,p4_x,p4_y,this.get_opacity(),this.get_color());
	}
	,drawScaledSubImage: function(img,sx,sy,sw,sh,dx,dy,dw,dh) {
		this.coloredPainter.end();
		this.textPainter.end();
		var _this = this.transformations[this.transformations.length - 1];
		var value_x = dx;
		var value_y = dy + dh;
		var w = _this._02 * value_x + _this._12 * value_y + _this._22;
		var x = (_this._00 * value_x + _this._10 * value_y + _this._20) / w;
		var y = (_this._01 * value_x + _this._11 * value_y + _this._21) / w;
		var p1_x = x;
		var p1_y = y;
		var _this1 = this.transformations[this.transformations.length - 1];
		var value_x1 = dx;
		var value_y1 = dy;
		var w1 = _this1._02 * value_x1 + _this1._12 * value_y1 + _this1._22;
		var x1 = (_this1._00 * value_x1 + _this1._10 * value_y1 + _this1._20) / w1;
		var y1 = (_this1._01 * value_x1 + _this1._11 * value_y1 + _this1._21) / w1;
		var p2_x = x1;
		var p2_y = y1;
		var _this2 = this.transformations[this.transformations.length - 1];
		var value_x2 = dx + dw;
		var value_y2 = dy;
		var w2 = _this2._02 * value_x2 + _this2._12 * value_y2 + _this2._22;
		var x2 = (_this2._00 * value_x2 + _this2._10 * value_y2 + _this2._20) / w2;
		var y2 = (_this2._01 * value_x2 + _this2._11 * value_y2 + _this2._21) / w2;
		var p3_x = x2;
		var p3_y = y2;
		var _this3 = this.transformations[this.transformations.length - 1];
		var value_x3 = dx + dw;
		var value_y3 = dy + dh;
		var w3 = _this3._02 * value_x3 + _this3._12 * value_y3 + _this3._22;
		var x3 = (_this3._00 * value_x3 + _this3._10 * value_y3 + _this3._20) / w3;
		var y3 = (_this3._01 * value_x3 + _this3._11 * value_y3 + _this3._21) / w3;
		var p4_x = x3;
		var p4_y = y3;
		this.imagePainter.drawImage2(img,sx,sy,sw,sh,p1_x,p1_y,p2_x,p2_y,p3_x,p3_y,p4_x,p4_y,this.get_opacity(),this.get_color());
	}
	,get_color: function() {
		return this.myColor;
	}
	,set_color: function(color) {
		return this.myColor = color;
	}
	,drawRect: function(x,y,width,height,strength) {
		if(strength == null) strength = 1.0;
		this.imagePainter.end();
		this.textPainter.end();
		var p1;
		var _this = this.transformations[this.transformations.length - 1];
		var value_x = x - strength / 2;
		var value_y = y + strength / 2;
		var w = _this._02 * value_x + _this._12 * value_y + _this._22;
		var x1 = (_this._00 * value_x + _this._10 * value_y + _this._20) / w;
		var y1 = (_this._01 * value_x + _this._11 * value_y + _this._21) / w;
		p1 = new kha_math_FastVector2(x1,y1);
		var p2;
		var _this1 = this.transformations[this.transformations.length - 1];
		var value_x1 = x - strength / 2;
		var value_y1 = y - strength / 2;
		var w1 = _this1._02 * value_x1 + _this1._12 * value_y1 + _this1._22;
		var x2 = (_this1._00 * value_x1 + _this1._10 * value_y1 + _this1._20) / w1;
		var y2 = (_this1._01 * value_x1 + _this1._11 * value_y1 + _this1._21) / w1;
		p2 = new kha_math_FastVector2(x2,y2);
		var p3;
		var _this2 = this.transformations[this.transformations.length - 1];
		var value_x2 = x + width + strength / 2;
		var value_y2 = y - strength / 2;
		var w2 = _this2._02 * value_x2 + _this2._12 * value_y2 + _this2._22;
		var x3 = (_this2._00 * value_x2 + _this2._10 * value_y2 + _this2._20) / w2;
		var y3 = (_this2._01 * value_x2 + _this2._11 * value_y2 + _this2._21) / w2;
		p3 = new kha_math_FastVector2(x3,y3);
		var p4;
		var _this3 = this.transformations[this.transformations.length - 1];
		var value_x3 = x + width + strength / 2;
		var value_y3 = y + strength / 2;
		var w3 = _this3._02 * value_x3 + _this3._12 * value_y3 + _this3._22;
		var x4 = (_this3._00 * value_x3 + _this3._10 * value_y3 + _this3._20) / w3;
		var y4 = (_this3._01 * value_x3 + _this3._11 * value_y3 + _this3._21) / w3;
		p4 = new kha_math_FastVector2(x4,y4);
		this.coloredPainter.fillRect(this.get_color(),p1.x,p1.y,p2.x,p2.y,p3.x,p3.y,p4.x,p4.y);
		var _this4 = this.transformations[this.transformations.length - 1];
		var value_x4 = x - strength / 2;
		var value_y4 = y + height + strength / 2;
		var w4 = _this4._02 * value_x4 + _this4._12 * value_y4 + _this4._22;
		var x5 = (_this4._00 * value_x4 + _this4._10 * value_y4 + _this4._20) / w4;
		var y5 = (_this4._01 * value_x4 + _this4._11 * value_y4 + _this4._21) / w4;
		p1 = new kha_math_FastVector2(x5,y5);
		var _this5 = this.transformations[this.transformations.length - 1];
		var value_x5 = x + strength / 2;
		var value_y5 = y - strength / 2;
		var w5 = _this5._02 * value_x5 + _this5._12 * value_y5 + _this5._22;
		var x6 = (_this5._00 * value_x5 + _this5._10 * value_y5 + _this5._20) / w5;
		var y6 = (_this5._01 * value_x5 + _this5._11 * value_y5 + _this5._21) / w5;
		p3 = new kha_math_FastVector2(x6,y6);
		var _this6 = this.transformations[this.transformations.length - 1];
		var value_x6 = x + strength / 2;
		var value_y6 = y + height + strength / 2;
		var w6 = _this6._02 * value_x6 + _this6._12 * value_y6 + _this6._22;
		var x7 = (_this6._00 * value_x6 + _this6._10 * value_y6 + _this6._20) / w6;
		var y7 = (_this6._01 * value_x6 + _this6._11 * value_y6 + _this6._21) / w6;
		p4 = new kha_math_FastVector2(x7,y7);
		this.coloredPainter.fillRect(this.get_color(),p1.x,p1.y,p2.x,p2.y,p3.x,p3.y,p4.x,p4.y);
		var _this7 = this.transformations[this.transformations.length - 1];
		var value_x7 = x - strength / 2;
		var value_y7 = y + height - strength / 2;
		var w7 = _this7._02 * value_x7 + _this7._12 * value_y7 + _this7._22;
		var x8 = (_this7._00 * value_x7 + _this7._10 * value_y7 + _this7._20) / w7;
		var y8 = (_this7._01 * value_x7 + _this7._11 * value_y7 + _this7._21) / w7;
		p2 = new kha_math_FastVector2(x8,y8);
		var _this8 = this.transformations[this.transformations.length - 1];
		var value_x8 = x + width + strength / 2;
		var value_y8 = y + height - strength / 2;
		var w8 = _this8._02 * value_x8 + _this8._12 * value_y8 + _this8._22;
		var x9 = (_this8._00 * value_x8 + _this8._10 * value_y8 + _this8._20) / w8;
		var y9 = (_this8._01 * value_x8 + _this8._11 * value_y8 + _this8._21) / w8;
		p3 = new kha_math_FastVector2(x9,y9);
		var _this9 = this.transformations[this.transformations.length - 1];
		var value_x9 = x + width + strength / 2;
		var value_y9 = y + height + strength / 2;
		var w9 = _this9._02 * value_x9 + _this9._12 * value_y9 + _this9._22;
		var x10 = (_this9._00 * value_x9 + _this9._10 * value_y9 + _this9._20) / w9;
		var y10 = (_this9._01 * value_x9 + _this9._11 * value_y9 + _this9._21) / w9;
		p4 = new kha_math_FastVector2(x10,y10);
		this.coloredPainter.fillRect(this.get_color(),p1.x,p1.y,p2.x,p2.y,p3.x,p3.y,p4.x,p4.y);
		var _this10 = this.transformations[this.transformations.length - 1];
		var value_x10 = x + width - strength / 2;
		var value_y10 = y + height + strength / 2;
		var w10 = _this10._02 * value_x10 + _this10._12 * value_y10 + _this10._22;
		var x11 = (_this10._00 * value_x10 + _this10._10 * value_y10 + _this10._20) / w10;
		var y11 = (_this10._01 * value_x10 + _this10._11 * value_y10 + _this10._21) / w10;
		p1 = new kha_math_FastVector2(x11,y11);
		var _this11 = this.transformations[this.transformations.length - 1];
		var value_x11 = x + width - strength / 2;
		var value_y11 = y - strength / 2;
		var w11 = _this11._02 * value_x11 + _this11._12 * value_y11 + _this11._22;
		var x12 = (_this11._00 * value_x11 + _this11._10 * value_y11 + _this11._20) / w11;
		var y12 = (_this11._01 * value_x11 + _this11._11 * value_y11 + _this11._21) / w11;
		p2 = new kha_math_FastVector2(x12,y12);
		var _this12 = this.transformations[this.transformations.length - 1];
		var value_x12 = x + width + strength / 2;
		var value_y12 = y - strength / 2;
		var w12 = _this12._02 * value_x12 + _this12._12 * value_y12 + _this12._22;
		var x13 = (_this12._00 * value_x12 + _this12._10 * value_y12 + _this12._20) / w12;
		var y13 = (_this12._01 * value_x12 + _this12._11 * value_y12 + _this12._21) / w12;
		p3 = new kha_math_FastVector2(x13,y13);
		var _this13 = this.transformations[this.transformations.length - 1];
		var value_x13 = x + width + strength / 2;
		var value_y13 = y + height + strength / 2;
		var w13 = _this13._02 * value_x13 + _this13._12 * value_y13 + _this13._22;
		var x14 = (_this13._00 * value_x13 + _this13._10 * value_y13 + _this13._20) / w13;
		var y14 = (_this13._01 * value_x13 + _this13._11 * value_y13 + _this13._21) / w13;
		p4 = new kha_math_FastVector2(x14,y14);
		this.coloredPainter.fillRect(this.get_color(),p1.x,p1.y,p2.x,p2.y,p3.x,p3.y,p4.x,p4.y);
	}
	,fillRect: function(x,y,width,height) {
		this.imagePainter.end();
		this.textPainter.end();
		var _this = this.transformations[this.transformations.length - 1];
		var value_x = x;
		var value_y = y + height;
		var w = _this._02 * value_x + _this._12 * value_y + _this._22;
		var x1 = (_this._00 * value_x + _this._10 * value_y + _this._20) / w;
		var y1 = (_this._01 * value_x + _this._11 * value_y + _this._21) / w;
		var p1_x = x1;
		var p1_y = y1;
		var _this1 = this.transformations[this.transformations.length - 1];
		var value_x1 = x;
		var value_y1 = y;
		var w1 = _this1._02 * value_x1 + _this1._12 * value_y1 + _this1._22;
		var x2 = (_this1._00 * value_x1 + _this1._10 * value_y1 + _this1._20) / w1;
		var y2 = (_this1._01 * value_x1 + _this1._11 * value_y1 + _this1._21) / w1;
		var p2_x = x2;
		var p2_y = y2;
		var _this2 = this.transformations[this.transformations.length - 1];
		var value_x2 = x + width;
		var value_y2 = y;
		var w2 = _this2._02 * value_x2 + _this2._12 * value_y2 + _this2._22;
		var x3 = (_this2._00 * value_x2 + _this2._10 * value_y2 + _this2._20) / w2;
		var y3 = (_this2._01 * value_x2 + _this2._11 * value_y2 + _this2._21) / w2;
		var p3_x = x3;
		var p3_y = y3;
		var _this3 = this.transformations[this.transformations.length - 1];
		var value_x3 = x + width;
		var value_y3 = y + height;
		var w3 = _this3._02 * value_x3 + _this3._12 * value_y3 + _this3._22;
		var x4 = (_this3._00 * value_x3 + _this3._10 * value_y3 + _this3._20) / w3;
		var y4 = (_this3._01 * value_x3 + _this3._11 * value_y3 + _this3._21) / w3;
		var p4_x = x4;
		var p4_y = y4;
		this.coloredPainter.fillRect(this.get_color(),p1_x,p1_y,p2_x,p2_y,p3_x,p3_y,p4_x,p4_y);
	}
	,drawString: function(text,x,y) {
		this.imagePainter.end();
		this.coloredPainter.end();
		this.textPainter.drawString(text,this.get_color(),x,y,this.transformations[this.transformations.length - 1]);
	}
	,get_font: function() {
		return this.myFont;
	}
	,set_font: function(font) {
		this.textPainter.setFont(font);
		return this.myFont = font;
	}
	,drawLine: function(x1,y1,x2,y2,strength) {
		if(strength == null) strength = 1.0;
		this.imagePainter.end();
		this.textPainter.end();
		var vec;
		if(y2 == y1) vec = new kha_math_FastVector2(0,-1); else vec = new kha_math_FastVector2(1,-(x2 - x1) / (y2 - y1));
		vec.set_length(strength);
		var p1 = new kha_math_FastVector2(x1 + 0.5 * vec.x,y1 + 0.5 * vec.y);
		var p2 = new kha_math_FastVector2(x2 + 0.5 * vec.x,y2 + 0.5 * vec.y);
		var p3 = new kha_math_FastVector2(p1.x - vec.x,p1.y - vec.y);
		var p4 = new kha_math_FastVector2(p2.x - vec.x,p2.y - vec.y);
		var _this = this.transformations[this.transformations.length - 1];
		var w = _this._02 * p1.x + _this._12 * p1.y + _this._22;
		var x = (_this._00 * p1.x + _this._10 * p1.y + _this._20) / w;
		var y = (_this._01 * p1.x + _this._11 * p1.y + _this._21) / w;
		p1 = new kha_math_FastVector2(x,y);
		var _this1 = this.transformations[this.transformations.length - 1];
		var w1 = _this1._02 * p2.x + _this1._12 * p2.y + _this1._22;
		var x3 = (_this1._00 * p2.x + _this1._10 * p2.y + _this1._20) / w1;
		var y3 = (_this1._01 * p2.x + _this1._11 * p2.y + _this1._21) / w1;
		p2 = new kha_math_FastVector2(x3,y3);
		var _this2 = this.transformations[this.transformations.length - 1];
		var w2 = _this2._02 * p3.x + _this2._12 * p3.y + _this2._22;
		var x4 = (_this2._00 * p3.x + _this2._10 * p3.y + _this2._20) / w2;
		var y4 = (_this2._01 * p3.x + _this2._11 * p3.y + _this2._21) / w2;
		p3 = new kha_math_FastVector2(x4,y4);
		var _this3 = this.transformations[this.transformations.length - 1];
		var w3 = _this3._02 * p4.x + _this3._12 * p4.y + _this3._22;
		var x5 = (_this3._00 * p4.x + _this3._10 * p4.y + _this3._20) / w3;
		var y5 = (_this3._01 * p4.x + _this3._11 * p4.y + _this3._21) / w3;
		p4 = new kha_math_FastVector2(x5,y5);
		this.coloredPainter.fillTriangle(this.get_color(),p1.x,p1.y,p2.x,p2.y,p3.x,p3.y);
		this.coloredPainter.fillTriangle(this.get_color(),p3.x,p3.y,p2.x,p2.y,p4.x,p4.y);
	}
	,fillTriangle: function(x1,y1,x2,y2,x3,y3) {
		this.imagePainter.end();
		this.textPainter.end();
		var _this = this.transformations[this.transformations.length - 1];
		var value_x = x1;
		var value_y = y1;
		var w = _this._02 * value_x + _this._12 * value_y + _this._22;
		var x = (_this._00 * value_x + _this._10 * value_y + _this._20) / w;
		var y = (_this._01 * value_x + _this._11 * value_y + _this._21) / w;
		var p1_x = x;
		var p1_y = y;
		var _this1 = this.transformations[this.transformations.length - 1];
		var value_x1 = x2;
		var value_y1 = y2;
		var w1 = _this1._02 * value_x1 + _this1._12 * value_y1 + _this1._22;
		var x4 = (_this1._00 * value_x1 + _this1._10 * value_y1 + _this1._20) / w1;
		var y4 = (_this1._01 * value_x1 + _this1._11 * value_y1 + _this1._21) / w1;
		var p2_x = x4;
		var p2_y = y4;
		var _this2 = this.transformations[this.transformations.length - 1];
		var value_x2 = x3;
		var value_y2 = y3;
		var w2 = _this2._02 * value_x2 + _this2._12 * value_y2 + _this2._22;
		var x5 = (_this2._00 * value_x2 + _this2._10 * value_y2 + _this2._20) / w2;
		var y5 = (_this2._01 * value_x2 + _this2._11 * value_y2 + _this2._21) / w2;
		var p3_x = x5;
		var p3_y = y5;
		this.coloredPainter.fillTriangle(this.get_color(),p1_x,p1_y,p2_x,p2_y,p3_x,p3_y);
	}
	,setBilinearFiltering: function(bilinear) {
		this.imagePainter.setBilinearFilter(bilinear);
	}
	,setProgram: function(program) {
		this.flush();
		this.imagePainter.set_program(program);
		this.coloredPainter.set_program(program);
		this.textPainter.set_program(program);
		if(program != null) this.g.setProgram(program);
	}
	,setBlendingMode: function(source,destination) {
		this.flush();
		this.imagePainter.sourceBlend = source;
		this.imagePainter.destinationBlend = destination;
		this.coloredPainter.sourceBlend = source;
		this.coloredPainter.destinationBlend = destination;
		this.textPainter.sourceBlend = source;
		this.textPainter.destinationBlend = destination;
	}
	,begin: function(clear,clearColor) {
		if(clear == null) clear = true;
		this.g.begin();
		if(clear) this.clear(clearColor);
		this.setProjection();
		this.g.setCullMode(kha_graphics4_CullMode.None);
	}
	,clear: function(color) {
		this.g.clear(color == null?kha__$Color_Color_$Impl_$.Black:color);
	}
	,flush: function() {
		this.imagePainter.end();
		this.textPainter.end();
		this.coloredPainter.end();
	}
	,end: function() {
		this.flush();
		this.g.end();
	}
	,drawVideoInternal: function(video,x,y,width,height) {
	}
	,drawVideo: function(video,x,y,width,height) {
		this.setProgram(this.videoProgram);
		this.drawVideoInternal(video,x,y,width,height);
		this.setProgram(null);
	}
	,__class__: kha_graphics4_Graphics2
});
var kha_graphics4_IndexBuffer = function(indexCount,usage,canRead) {
	if(canRead == null) canRead = false;
	this.usage = usage;
	this.mySize = indexCount;
	this.buffer = kha_Sys.gl.createBuffer();
	this.data = [];
	this.data[indexCount - 1] = 0;
};
$hxClasses["kha.graphics4.IndexBuffer"] = kha_graphics4_IndexBuffer;
kha_graphics4_IndexBuffer.__name__ = ["kha","graphics4","IndexBuffer"];
kha_graphics4_IndexBuffer.prototype = {
	lock: function() {
		return this.data;
	}
	,unlock: function() {
		kha_Sys.gl.bindBuffer(kha_Sys.gl.ELEMENT_ARRAY_BUFFER,this.buffer);
		kha_Sys.gl.bufferData(kha_Sys.gl.ELEMENT_ARRAY_BUFFER,new Uint16Array(this.data),this.usage == kha_graphics4_Usage.DynamicUsage?kha_Sys.gl.DYNAMIC_DRAW:kha_Sys.gl.STATIC_DRAW);
	}
	,set: function() {
		kha_Sys.gl.bindBuffer(kha_Sys.gl.ELEMENT_ARRAY_BUFFER,this.buffer);
	}
	,count: function() {
		return this.mySize;
	}
	,__class__: kha_graphics4_IndexBuffer
};
var kha_graphics4_MipMapFilter = $hxClasses["kha.graphics4.MipMapFilter"] = { __ename__ : ["kha","graphics4","MipMapFilter"], __constructs__ : ["NoMipFilter","PointMipFilter","LinearMipFilter"] };
kha_graphics4_MipMapFilter.NoMipFilter = ["NoMipFilter",0];
kha_graphics4_MipMapFilter.NoMipFilter.toString = $estr;
kha_graphics4_MipMapFilter.NoMipFilter.__enum__ = kha_graphics4_MipMapFilter;
kha_graphics4_MipMapFilter.PointMipFilter = ["PointMipFilter",1];
kha_graphics4_MipMapFilter.PointMipFilter.toString = $estr;
kha_graphics4_MipMapFilter.PointMipFilter.__enum__ = kha_graphics4_MipMapFilter;
kha_graphics4_MipMapFilter.LinearMipFilter = ["LinearMipFilter",2];
kha_graphics4_MipMapFilter.LinearMipFilter.toString = $estr;
kha_graphics4_MipMapFilter.LinearMipFilter.__enum__ = kha_graphics4_MipMapFilter;
var kha_graphics4_Program = function() {
	this.program = kha_Sys.gl.createProgram();
	this.textures = [];
	this.textureValues = [];
	this.singleStructureArray = [];
};
$hxClasses["kha.graphics4.Program"] = kha_graphics4_Program;
kha_graphics4_Program.__name__ = ["kha","graphics4","Program"];
kha_graphics4_Program.prototype = {
	setVertexShader: function(vertexShader) {
		this.vertexShader = vertexShader;
	}
	,setFragmentShader: function(fragmentShader) {
		this.fragmentShader = fragmentShader;
	}
	,link: function(structure) {
		this.singleStructureArray[0] = structure;
		this.linkWithStructures(this.singleStructureArray);
	}
	,linkWithStructures: function(structures) {
		this.compileShader(this.vertexShader);
		this.compileShader(this.fragmentShader);
		kha_Sys.gl.attachShader(this.program,this.vertexShader.shader);
		kha_Sys.gl.attachShader(this.program,this.fragmentShader.shader);
		var index = 0;
		var _g = 0;
		while(_g < structures.length) {
			var structure = structures[_g];
			++_g;
			var _g1 = 0;
			var _g2 = structure.elements;
			while(_g1 < _g2.length) {
				var element = _g2[_g1];
				++_g1;
				kha_Sys.gl.bindAttribLocation(this.program,index,element.name);
				++index;
			}
		}
		kha_Sys.gl.linkProgram(this.program);
		if(!kha_Sys.gl.getProgramParameter(this.program,kha_Sys.gl.LINK_STATUS)) throw new js__$Boot_HaxeError("Could not link the shader program.");
	}
	,set: function() {
		kha_Sys.gl.useProgram(this.program);
		var _g1 = 0;
		var _g = this.textureValues.length;
		while(_g1 < _g) {
			var index = _g1++;
			kha_Sys.gl.uniform1i(this.textureValues[index],index);
		}
	}
	,compileShader: function(shader) {
		if(shader.shader != null) return;
		var s = kha_Sys.gl.createShader(shader.type);
		kha_Sys.gl.shaderSource(s,shader.source);
		kha_Sys.gl.compileShader(s);
		if(!kha_Sys.gl.getShaderParameter(s,kha_Sys.gl.COMPILE_STATUS)) throw new js__$Boot_HaxeError("Could not compile shader:\n" + Std.string(kha_Sys.gl.getShaderInfoLog(s)));
		shader.shader = s;
	}
	,getConstantLocation: function(name) {
		return new kha_js_graphics4_ConstantLocation(kha_Sys.gl.getUniformLocation(this.program,name));
	}
	,getTextureUnit: function(name) {
		var index = this.findTexture(name);
		if(index < 0) {
			var location = kha_Sys.gl.getUniformLocation(this.program,name);
			index = this.textures.length;
			this.textureValues.push(location);
			this.textures.push(name);
		}
		return new kha_js_graphics4_TextureUnit(index);
	}
	,findTexture: function(name) {
		var _g1 = 0;
		var _g = this.textures.length;
		while(_g1 < _g) {
			var index = _g1++;
			if(this.textures[index] == name) return index;
		}
		return -1;
	}
	,__class__: kha_graphics4_Program
};
var kha_graphics4_StencilAction = $hxClasses["kha.graphics4.StencilAction"] = { __ename__ : ["kha","graphics4","StencilAction"], __constructs__ : ["Keep","Zero","Replace","Increment","IncrementWrap","Decrement","DecrementWrap","Invert"] };
kha_graphics4_StencilAction.Keep = ["Keep",0];
kha_graphics4_StencilAction.Keep.toString = $estr;
kha_graphics4_StencilAction.Keep.__enum__ = kha_graphics4_StencilAction;
kha_graphics4_StencilAction.Zero = ["Zero",1];
kha_graphics4_StencilAction.Zero.toString = $estr;
kha_graphics4_StencilAction.Zero.__enum__ = kha_graphics4_StencilAction;
kha_graphics4_StencilAction.Replace = ["Replace",2];
kha_graphics4_StencilAction.Replace.toString = $estr;
kha_graphics4_StencilAction.Replace.__enum__ = kha_graphics4_StencilAction;
kha_graphics4_StencilAction.Increment = ["Increment",3];
kha_graphics4_StencilAction.Increment.toString = $estr;
kha_graphics4_StencilAction.Increment.__enum__ = kha_graphics4_StencilAction;
kha_graphics4_StencilAction.IncrementWrap = ["IncrementWrap",4];
kha_graphics4_StencilAction.IncrementWrap.toString = $estr;
kha_graphics4_StencilAction.IncrementWrap.__enum__ = kha_graphics4_StencilAction;
kha_graphics4_StencilAction.Decrement = ["Decrement",5];
kha_graphics4_StencilAction.Decrement.toString = $estr;
kha_graphics4_StencilAction.Decrement.__enum__ = kha_graphics4_StencilAction;
kha_graphics4_StencilAction.DecrementWrap = ["DecrementWrap",6];
kha_graphics4_StencilAction.DecrementWrap.toString = $estr;
kha_graphics4_StencilAction.DecrementWrap.__enum__ = kha_graphics4_StencilAction;
kha_graphics4_StencilAction.Invert = ["Invert",7];
kha_graphics4_StencilAction.Invert.toString = $estr;
kha_graphics4_StencilAction.Invert.__enum__ = kha_graphics4_StencilAction;
var kha_graphics4_TexDir = $hxClasses["kha.graphics4.TexDir"] = { __ename__ : ["kha","graphics4","TexDir"], __constructs__ : ["U","V"] };
kha_graphics4_TexDir.U = ["U",0];
kha_graphics4_TexDir.U.toString = $estr;
kha_graphics4_TexDir.U.__enum__ = kha_graphics4_TexDir;
kha_graphics4_TexDir.V = ["V",1];
kha_graphics4_TexDir.V.toString = $estr;
kha_graphics4_TexDir.V.__enum__ = kha_graphics4_TexDir;
var kha_graphics4_TextureAddressing = $hxClasses["kha.graphics4.TextureAddressing"] = { __ename__ : ["kha","graphics4","TextureAddressing"], __constructs__ : ["Repeat","Mirror","Clamp"] };
kha_graphics4_TextureAddressing.Repeat = ["Repeat",0];
kha_graphics4_TextureAddressing.Repeat.toString = $estr;
kha_graphics4_TextureAddressing.Repeat.__enum__ = kha_graphics4_TextureAddressing;
kha_graphics4_TextureAddressing.Mirror = ["Mirror",1];
kha_graphics4_TextureAddressing.Mirror.toString = $estr;
kha_graphics4_TextureAddressing.Mirror.__enum__ = kha_graphics4_TextureAddressing;
kha_graphics4_TextureAddressing.Clamp = ["Clamp",2];
kha_graphics4_TextureAddressing.Clamp.toString = $estr;
kha_graphics4_TextureAddressing.Clamp.__enum__ = kha_graphics4_TextureAddressing;
var kha_graphics4_TextureFilter = $hxClasses["kha.graphics4.TextureFilter"] = { __ename__ : ["kha","graphics4","TextureFilter"], __constructs__ : ["PointFilter","LinearFilter","AnisotropicFilter"] };
kha_graphics4_TextureFilter.PointFilter = ["PointFilter",0];
kha_graphics4_TextureFilter.PointFilter.toString = $estr;
kha_graphics4_TextureFilter.PointFilter.__enum__ = kha_graphics4_TextureFilter;
kha_graphics4_TextureFilter.LinearFilter = ["LinearFilter",1];
kha_graphics4_TextureFilter.LinearFilter.toString = $estr;
kha_graphics4_TextureFilter.LinearFilter.__enum__ = kha_graphics4_TextureFilter;
kha_graphics4_TextureFilter.AnisotropicFilter = ["AnisotropicFilter",2];
kha_graphics4_TextureFilter.AnisotropicFilter.toString = $estr;
kha_graphics4_TextureFilter.AnisotropicFilter.__enum__ = kha_graphics4_TextureFilter;
var kha_graphics4_TextureFormat = $hxClasses["kha.graphics4.TextureFormat"] = { __ename__ : ["kha","graphics4","TextureFormat"], __constructs__ : ["RGBA32","L8","RGBA128"] };
kha_graphics4_TextureFormat.RGBA32 = ["RGBA32",0];
kha_graphics4_TextureFormat.RGBA32.toString = $estr;
kha_graphics4_TextureFormat.RGBA32.__enum__ = kha_graphics4_TextureFormat;
kha_graphics4_TextureFormat.L8 = ["L8",1];
kha_graphics4_TextureFormat.L8.toString = $estr;
kha_graphics4_TextureFormat.L8.__enum__ = kha_graphics4_TextureFormat;
kha_graphics4_TextureFormat.RGBA128 = ["RGBA128",2];
kha_graphics4_TextureFormat.RGBA128.toString = $estr;
kha_graphics4_TextureFormat.RGBA128.__enum__ = kha_graphics4_TextureFormat;
var kha_graphics4_TextureUnit = function() { };
$hxClasses["kha.graphics4.TextureUnit"] = kha_graphics4_TextureUnit;
kha_graphics4_TextureUnit.__name__ = ["kha","graphics4","TextureUnit"];
var kha_graphics4_Usage = $hxClasses["kha.graphics4.Usage"] = { __ename__ : ["kha","graphics4","Usage"], __constructs__ : ["StaticUsage","DynamicUsage","ReadableUsage"] };
kha_graphics4_Usage.StaticUsage = ["StaticUsage",0];
kha_graphics4_Usage.StaticUsage.toString = $estr;
kha_graphics4_Usage.StaticUsage.__enum__ = kha_graphics4_Usage;
kha_graphics4_Usage.DynamicUsage = ["DynamicUsage",1];
kha_graphics4_Usage.DynamicUsage.toString = $estr;
kha_graphics4_Usage.DynamicUsage.__enum__ = kha_graphics4_Usage;
kha_graphics4_Usage.ReadableUsage = ["ReadableUsage",2];
kha_graphics4_Usage.ReadableUsage.toString = $estr;
kha_graphics4_Usage.ReadableUsage.__enum__ = kha_graphics4_Usage;
var kha_graphics4_VertexBuffer = function(vertexCount,structure,usage,instanceDataStepRate,canRead) {
	if(canRead == null) canRead = false;
	if(instanceDataStepRate == null) instanceDataStepRate = 0;
	this.usage = usage;
	this.instanceDataStepRate = instanceDataStepRate;
	this.mySize = vertexCount;
	this.myStride = 0;
	var _g = 0;
	var _g1 = structure.elements;
	while(_g < _g1.length) {
		var element = _g1[_g];
		++_g;
		var _g2 = element.data;
		switch(_g2[1]) {
		case 0:
			this.myStride += 4;
			break;
		case 1:
			this.myStride += 8;
			break;
		case 2:
			this.myStride += 12;
			break;
		case 3:
			this.myStride += 16;
			break;
		}
	}
	this.buffer = kha_Sys.gl.createBuffer();
	this.data = new Float32Array(vertexCount * this.myStride / 4 | 0);
	this.sizes = [];
	this.offsets = [];
	this.sizes[structure.elements.length - 1] = 0;
	this.offsets[structure.elements.length - 1] = 0;
	var offset = 0;
	var index = 0;
	var _g3 = 0;
	var _g11 = structure.elements;
	while(_g3 < _g11.length) {
		var element1 = _g11[_g3];
		++_g3;
		var size;
		var _g21 = element1.data;
		switch(_g21[1]) {
		case 0:
			size = 1;
			break;
		case 1:
			size = 2;
			break;
		case 2:
			size = 3;
			break;
		case 3:
			size = 4;
			break;
		}
		this.sizes[index] = size;
		this.offsets[index] = offset;
		var _g22 = element1.data;
		switch(_g22[1]) {
		case 0:
			offset += 4;
			break;
		case 1:
			offset += 8;
			break;
		case 2:
			offset += 12;
			break;
		case 3:
			offset += 16;
			break;
		}
		++index;
	}
};
$hxClasses["kha.graphics4.VertexBuffer"] = kha_graphics4_VertexBuffer;
kha_graphics4_VertexBuffer.__name__ = ["kha","graphics4","VertexBuffer"];
kha_graphics4_VertexBuffer.prototype = {
	lock: function(start,count) {
		return this.data;
	}
	,unlock: function() {
		kha_Sys.gl.bindBuffer(kha_Sys.gl.ARRAY_BUFFER,this.buffer);
		kha_Sys.gl.bufferData(kha_Sys.gl.ARRAY_BUFFER,this.data,this.usage == kha_graphics4_Usage.DynamicUsage?kha_Sys.gl.DYNAMIC_DRAW:kha_Sys.gl.STATIC_DRAW);
	}
	,stride: function() {
		return this.myStride;
	}
	,count: function() {
		return this.mySize;
	}
	,set: function(offset) {
		var ext = kha_Sys.gl.getExtension("ANGLE_instanced_arrays");
		kha_Sys.gl.bindBuffer(kha_Sys.gl.ARRAY_BUFFER,this.buffer);
		var _g1 = 0;
		var _g = this.sizes.length;
		while(_g1 < _g) {
			var i = _g1++;
			kha_Sys.gl.enableVertexAttribArray(i + offset);
			kha_Sys.gl.vertexAttribPointer(i + offset,this.sizes[i],kha_Sys.gl.FLOAT,false,this.myStride,this.offsets[i]);
			if(ext) ext.vertexAttribDivisorANGLE(i + offset,this.instanceDataStepRate);
		}
		return this.sizes.length;
	}
	,__class__: kha_graphics4_VertexBuffer
};
var kha_graphics4_VertexData = $hxClasses["kha.graphics4.VertexData"] = { __ename__ : ["kha","graphics4","VertexData"], __constructs__ : ["Float1","Float2","Float3","Float4"] };
kha_graphics4_VertexData.Float1 = ["Float1",0];
kha_graphics4_VertexData.Float1.toString = $estr;
kha_graphics4_VertexData.Float1.__enum__ = kha_graphics4_VertexData;
kha_graphics4_VertexData.Float2 = ["Float2",1];
kha_graphics4_VertexData.Float2.toString = $estr;
kha_graphics4_VertexData.Float2.__enum__ = kha_graphics4_VertexData;
kha_graphics4_VertexData.Float3 = ["Float3",2];
kha_graphics4_VertexData.Float3.toString = $estr;
kha_graphics4_VertexData.Float3.__enum__ = kha_graphics4_VertexData;
kha_graphics4_VertexData.Float4 = ["Float4",3];
kha_graphics4_VertexData.Float4.toString = $estr;
kha_graphics4_VertexData.Float4.__enum__ = kha_graphics4_VertexData;
var kha_graphics4_VertexElement = function(name,data) {
	this.name = name;
	this.data = data;
};
$hxClasses["kha.graphics4.VertexElement"] = kha_graphics4_VertexElement;
kha_graphics4_VertexElement.__name__ = ["kha","graphics4","VertexElement"];
kha_graphics4_VertexElement.prototype = {
	__class__: kha_graphics4_VertexElement
};
var kha_graphics4_VertexShader = function(source) {
	this.source = source.toString();
	this.type = kha_Sys.gl.VERTEX_SHADER;
	this.shader = null;
};
$hxClasses["kha.graphics4.VertexShader"] = kha_graphics4_VertexShader;
kha_graphics4_VertexShader.__name__ = ["kha","graphics4","VertexShader"];
kha_graphics4_VertexShader.prototype = {
	__class__: kha_graphics4_VertexShader
};
var kha_graphics4_VertexStructure = function() {
	this.elements = [];
};
$hxClasses["kha.graphics4.VertexStructure"] = kha_graphics4_VertexStructure;
kha_graphics4_VertexStructure.__name__ = ["kha","graphics4","VertexStructure"];
kha_graphics4_VertexStructure.prototype = {
	add: function(name,data) {
		this.elements.push(new kha_graphics4_VertexElement(name,data));
	}
	,size: function() {
		return this.elements.length;
	}
	,get: function(index) {
		return this.elements[index];
	}
	,__class__: kha_graphics4_VertexStructure
};
var kha_input_Gamepad = $hx_exports.kha.input.Gamepad = function(id) {
	if(id == null) id = 0;
	this.axisListeners = [];
	this.buttonListeners = [];
	kha_input_Gamepad.instances[id] = this;
};
$hxClasses["kha.input.Gamepad"] = kha_input_Gamepad;
kha_input_Gamepad.__name__ = ["kha","input","Gamepad"];
kha_input_Gamepad.get = function(num) {
	if(num == null) num = 0;
	if(num >= kha_input_Gamepad.instances.length) return null;
	return kha_input_Gamepad.instances[num];
};
kha_input_Gamepad.prototype = {
	notify: function(axisListener,buttonListener) {
		if(axisListener != null) this.axisListeners.push(axisListener);
		if(buttonListener != null) this.buttonListeners.push(buttonListener);
	}
	,remove: function(axisListener,buttonListener) {
		if(axisListener != null) HxOverrides.remove(this.axisListeners,axisListener);
		if(buttonListener != null) HxOverrides.remove(this.buttonListeners,buttonListener);
	}
	,sendAxisEvent: function(axis,value) {
		var _g = 0;
		var _g1 = this.axisListeners;
		while(_g < _g1.length) {
			var listener = _g1[_g];
			++_g;
			listener(axis,value);
		}
	}
	,sendButtonEvent: function(button,value) {
		var _g = 0;
		var _g1 = this.buttonListeners;
		while(_g < _g1.length) {
			var listener = _g1[_g];
			++_g;
			listener(button,value);
		}
	}
	,__class__: kha_input_Gamepad
};
var kha_network_Controller = function() { };
$hxClasses["kha.network.Controller"] = kha_network_Controller;
kha_network_Controller.__name__ = ["kha","network","Controller"];
kha_network_Controller.prototype = {
	__class__: kha_network_Controller
};
var kha_input_Keyboard = $hx_exports.kha.input.Keyboard = function() {
	this.__id = 0;
	this.downListeners = [];
	this.upListeners = [];
	kha_input_Keyboard.instance = this;
};
$hxClasses["kha.input.Keyboard"] = kha_input_Keyboard;
kha_input_Keyboard.__name__ = ["kha","input","Keyboard"];
kha_input_Keyboard.__interfaces__ = [kha_network_Controller];
kha_input_Keyboard.get = function(num) {
	if(num == null) num = 0;
	if(num != 0) return null;
	return kha_input_Keyboard.instance;
};
kha_input_Keyboard.prototype = {
	notify: function(downListener,upListener) {
		if(downListener != null) this.downListeners.push(downListener);
		if(upListener != null) this.upListeners.push(upListener);
	}
	,remove: function(downListener,upListener) {
		if(downListener != null) HxOverrides.remove(this.downListeners,downListener);
		if(upListener != null) HxOverrides.remove(this.upListeners,upListener);
	}
	,sendDownEvent: function(key,$char) {
		if(kha_network_Session.the() != null) {
			var bytes = haxe_io_Bytes.alloc(19);
			bytes.b[0] = 2;
			bytes.setInt32(1,this._id());
			bytes.setDouble(5,kha_Scheduler.realTime());
			bytes.setInt32(13,0);
			bytes.b[17] = key[1] & 255;
			bytes.set(18,HxOverrides.cca($char,0));
			kha_network_Session.the().network.send(bytes,false);
		}
		var _g = 0;
		var _g1 = this.downListeners;
		while(_g < _g1.length) {
			var listener = _g1[_g];
			++_g;
			listener(key,$char);
		}
	}
	,sendUpEvent: function(key,$char) {
		if(kha_network_Session.the() != null) {
			var bytes = haxe_io_Bytes.alloc(19);
			bytes.b[0] = 2;
			bytes.setInt32(1,this._id());
			bytes.setDouble(5,kha_Scheduler.realTime());
			bytes.setInt32(13,1);
			bytes.b[17] = key[1] & 255;
			bytes.set(18,HxOverrides.cca($char,0));
			kha_network_Session.the().network.send(bytes,false);
		}
		var _g = 0;
		var _g1 = this.upListeners;
		while(_g < _g1.length) {
			var listener = _g1[_g];
			++_g;
			listener(key,$char);
		}
	}
	,_receive: function(offset,bytes) {
		var funcindex = bytes.getInt32(offset);
		if(funcindex == 0) {
			var input0 = Type.createEnumIndex(kha_Key,bytes.b[offset + 4],null);
			var input1 = String.fromCharCode(bytes.b[offset + 5]);
			this.sendDownEvent(input0,input1);
			return;
		}
		if(funcindex == 1) {
			var input01 = Type.createEnumIndex(kha_Key,bytes.b[offset + 4],null);
			var input11 = String.fromCharCode(bytes.b[offset + 5]);
			this.sendUpEvent(input01,input11);
			return;
		}
	}
	,_id: function() {
		return this.__id;
	}
	,__class__: kha_input_Keyboard
};
var kha_input_Mouse = $hx_exports.kha.input.Mouse = function(starter) {
	this.downListeners = [];
	this.upListeners = [];
	this.moveListeners = [];
	this.wheelListeners = [];
	kha_input_Mouse.instance = this;
	this.starter = starter;
};
$hxClasses["kha.input.Mouse"] = kha_input_Mouse;
kha_input_Mouse.__name__ = ["kha","input","Mouse"];
kha_input_Mouse.get = function(num) {
	if(num == null) num = 0;
	if(num != 0) return null;
	return kha_input_Mouse.instance;
};
kha_input_Mouse.prototype = {
	notify: function(downListener,upListener,moveListener,wheelListener) {
		if(downListener != null) this.downListeners.push(downListener);
		if(upListener != null) this.upListeners.push(upListener);
		if(moveListener != null) this.moveListeners.push(moveListener);
		if(wheelListener != null) this.wheelListeners.push(wheelListener);
	}
	,remove: function(downListener,upListener,moveListener,wheelListener) {
		if(downListener != null) HxOverrides.remove(this.downListeners,downListener);
		if(upListener != null) HxOverrides.remove(this.upListeners,upListener);
		if(moveListener != null) HxOverrides.remove(this.moveListeners,moveListener);
		if(wheelListener != null) HxOverrides.remove(this.wheelListeners,wheelListener);
	}
	,lock: function() {
		this.starter.lockMouse();
	}
	,unlock: function() {
		this.starter.unlockMouse();
	}
	,canLock: function() {
		return this.starter.canLockMouse();
	}
	,isLocked: function() {
		return this.starter.isMouseLocked();
	}
	,notifyOfLockChange: function(func,error) {
		this.starter.notifyOfMouseLockChange(func,error);
	}
	,removeFromLockChange: function(func,error) {
		this.starter.removeFromMouseLockChange(func,error);
	}
	,sendDownEvent: function(button,x,y) {
		var _g = 0;
		var _g1 = this.downListeners;
		while(_g < _g1.length) {
			var listener = _g1[_g];
			++_g;
			listener(button,x,y);
		}
	}
	,sendUpEvent: function(button,x,y) {
		var _g = 0;
		var _g1 = this.upListeners;
		while(_g < _g1.length) {
			var listener = _g1[_g];
			++_g;
			listener(button,x,y);
		}
	}
	,sendMoveEvent: function(x,y,movementX,movementY) {
		var _g = 0;
		var _g1 = this.moveListeners;
		while(_g < _g1.length) {
			var listener = _g1[_g];
			++_g;
			listener(x,y,movementX,movementY);
		}
	}
	,sendWheelEvent: function(delta) {
		var _g = 0;
		var _g1 = this.wheelListeners;
		while(_g < _g1.length) {
			var listener = _g1[_g];
			++_g;
			listener(delta);
		}
	}
	,__class__: kha_input_Mouse
};
var kha_input_Surface = $hx_exports.kha.input.Surface = function() {
	this.touchStartListeners = [];
	this.touchEndListeners = [];
	this.moveListeners = [];
	kha_input_Surface.instance = this;
};
$hxClasses["kha.input.Surface"] = kha_input_Surface;
kha_input_Surface.__name__ = ["kha","input","Surface"];
kha_input_Surface.get = function(num) {
	if(num == null) num = 0;
	if(num != 0) return null;
	return kha_input_Surface.instance;
};
kha_input_Surface.prototype = {
	notify: function(touchStartListener,touchEndListener,moveListener) {
		if(touchStartListener != null) this.touchStartListeners.push(touchStartListener);
		if(touchEndListener != null) this.touchEndListeners.push(touchEndListener);
		if(moveListener != null) this.moveListeners.push(moveListener);
	}
	,remove: function(touchStartListener,touchEndListener,moveListener) {
		if(touchStartListener != null) HxOverrides.remove(this.touchStartListeners,touchStartListener);
		if(touchEndListener != null) HxOverrides.remove(this.touchEndListeners,touchEndListener);
		if(moveListener != null) this.moveListeners.push(moveListener);
	}
	,sendTouchStartEvent: function(index,x,y) {
		var _g = 0;
		var _g1 = this.touchStartListeners;
		while(_g < _g1.length) {
			var listener = _g1[_g];
			++_g;
			listener(index,x,y);
		}
	}
	,sendTouchEndEvent: function(index,x,y) {
		var _g = 0;
		var _g1 = this.touchEndListeners;
		while(_g < _g1.length) {
			var listener = _g1[_g];
			++_g;
			listener(index,x,y);
		}
	}
	,sendMoveEvent: function(index,x,y) {
		var _g = 0;
		var _g1 = this.moveListeners;
		while(_g < _g1.length) {
			var listener = _g1[_g];
			++_g;
			listener(index,x,y);
		}
	}
	,__class__: kha_input_Surface
};
var kha_js_AEMusicChannel = function(music,loop) {
	this.element = music.element;
	this.loop = loop;
};
$hxClasses["kha.js.AEMusicChannel"] = kha_js_AEMusicChannel;
kha_js_AEMusicChannel.__name__ = ["kha","js","AEMusicChannel"];
kha_js_AEMusicChannel.__interfaces__ = [kha_audio1_MusicChannel];
kha_js_AEMusicChannel.prototype = {
	play: function() {
		this.element.loop = this.loop;
		this.element.play();
	}
	,pause: function() {
		try {
			this.element.pause();
		} catch( e ) {
			if (e instanceof js__$Boot_HaxeError) e = e.val;
			haxe_Log.trace(e,{ fileName : "AEMusicChannel.hx", lineNumber : 25, className : "kha.js.AEMusicChannel", methodName : "pause"});
		}
	}
	,stop: function() {
		try {
			this.element.pause();
			this.element.currentTime = 0;
		} catch( e ) {
			if (e instanceof js__$Boot_HaxeError) e = e.val;
			haxe_Log.trace(e,{ fileName : "AEMusicChannel.hx", lineNumber : 35, className : "kha.js.AEMusicChannel", methodName : "stop"});
		}
	}
	,get_length: function() {
		if(isFinite(this.element.duration)) return Math.floor(this.element.duration * 1000); else return -1;
	}
	,get_position: function() {
		return Math.ceil(this.element.currentTime * 1000);
	}
	,get_volume: function() {
		return 1;
	}
	,set_volume: function(value) {
		return 1;
	}
	,get_finished: function() {
		return this.get_position() >= this.get_length();
	}
	,__class__: kha_js_AEMusicChannel
};
var kha_js_AESoundChannel = function(sound) {
	this.element = sound.element;
};
$hxClasses["kha.js.AESoundChannel"] = kha_js_AESoundChannel;
kha_js_AESoundChannel.__name__ = ["kha","js","AESoundChannel"];
kha_js_AESoundChannel.__interfaces__ = [kha_audio1_SoundChannel];
kha_js_AESoundChannel.prototype = {
	play: function() {
		this.element.play();
	}
	,pause: function() {
		try {
			this.element.pause();
		} catch( e ) {
			if (e instanceof js__$Boot_HaxeError) e = e.val;
			haxe_Log.trace(e,{ fileName : "AESoundChannel.hx", lineNumber : 22, className : "kha.js.AESoundChannel", methodName : "pause"});
		}
	}
	,stop: function() {
		try {
			this.element.pause();
			this.element.currentTime = 0;
		} catch( e ) {
			if (e instanceof js__$Boot_HaxeError) e = e.val;
			haxe_Log.trace(e,{ fileName : "AESoundChannel.hx", lineNumber : 32, className : "kha.js.AESoundChannel", methodName : "stop"});
		}
	}
	,get_length: function() {
		if(isFinite(this.element.duration)) return Math.floor(this.element.duration * 1000); else return -1;
	}
	,get_position: function() {
		return Math.ceil(this.element.currentTime * 1000);
	}
	,get_volume: function() {
		return 1;
	}
	,set_volume: function(value) {
		return 1;
	}
	,get_finished: function() {
		return this.get_position() >= this.get_length();
	}
	,__class__: kha_js_AESoundChannel
};
var kha_js_AudioElementAudio = function() { };
$hxClasses["kha.js.AudioElementAudio"] = kha_js_AudioElementAudio;
kha_js_AudioElementAudio.__name__ = ["kha","js","AudioElementAudio"];
kha_js_AudioElementAudio._compile = function() {
};
kha_js_AudioElementAudio.playSound = function(sound) {
	sound.element.play();
	return new kha_js_AESoundChannel(sound);
};
kha_js_AudioElementAudio.playMusic = function(music,loop) {
	if(loop == null) loop = false;
	music.element.loop = loop;
	music.element.play();
	return new kha_js_AEMusicChannel(music,loop);
};
var kha_js_CanvasGraphics = function(canvas,width,height) {
	kha_graphics2_Graphics.call(this);
	this.canvas = canvas;
	this.width = width;
	this.height = height;
	kha_js_CanvasGraphics.instance = this;
	this.myColor = kha__$Color_Color_$Impl_$.fromBytes(0,0,0);
};
$hxClasses["kha.js.CanvasGraphics"] = kha_js_CanvasGraphics;
kha_js_CanvasGraphics.__name__ = ["kha","js","CanvasGraphics"];
kha_js_CanvasGraphics.stringWidth = function(font,text) {
	if(kha_js_CanvasGraphics.instance == null) return 5 * text.length; else {
		kha_js_CanvasGraphics.instance.set_font(font);
		return kha_js_CanvasGraphics.instance.canvas.measureText(text).width;
	}
};
kha_js_CanvasGraphics.__super__ = kha_graphics2_Graphics;
kha_js_CanvasGraphics.prototype = $extend(kha_graphics2_Graphics.prototype,{
	begin: function(clear,clearColor) {
		if(clear == null) clear = true;
		if(clear) this.clear(clearColor);
	}
	,clear: function(color) {
		if(color == null) color = kha__$Color_Color_$Impl_$.Black;
		this.canvas.strokeStyle = "rgb(" + kha__$Color_Color_$Impl_$.get_Rb(color) + "," + kha__$Color_Color_$Impl_$.get_Gb(color) + "," + kha__$Color_Color_$Impl_$.get_Bb(color) + ")";
		this.canvas.fillStyle = "rgb(" + kha__$Color_Color_$Impl_$.get_Rb(color) + "," + kha__$Color_Color_$Impl_$.get_Gb(color) + "," + kha__$Color_Color_$Impl_$.get_Bb(color) + ")";
		this.canvas.fillRect(0,0,this.width,this.height);
		this.set_color(this.myColor);
	}
	,end: function() {
	}
	,drawImage: function(img,x,y) {
		this.canvas.globalAlpha = this.get_opacity();
		this.canvas.drawImage((js_Boot.__cast(img , kha_CanvasImage)).image,x,y);
		this.canvas.globalAlpha = 1;
	}
	,drawScaledSubImage: function(image,sx,sy,sw,sh,dx,dy,dw,dh) {
		this.canvas.globalAlpha = this.get_opacity();
		try {
			if(dw < 0 || dh < 0) {
				this.canvas.save();
				this.canvas.translate(dx,dy);
				var x = 0.0;
				var y = 0.0;
				if(dw < 0) {
					this.canvas.scale(-1,1);
					x = -dw;
				}
				if(dh < 0) {
					this.canvas.scale(1,-1);
					y = -dh;
				}
				this.canvas.drawImage((js_Boot.__cast(image , kha_CanvasImage)).image,sx,sy,sw,sh,x,y,dw,dh);
				this.canvas.restore();
			} else this.canvas.drawImage((js_Boot.__cast(image , kha_CanvasImage)).image,sx,sy,sw,sh,dx,dy,dw,dh);
		} catch( ex ) {
			if (ex instanceof js__$Boot_HaxeError) ex = ex.val;
		}
		this.canvas.globalAlpha = 1;
	}
	,set_color: function(color) {
		this.myColor = color;
		this.canvas.strokeStyle = "rgb(" + kha__$Color_Color_$Impl_$.get_Rb(color) + "," + kha__$Color_Color_$Impl_$.get_Gb(color) + "," + kha__$Color_Color_$Impl_$.get_Bb(color) + ")";
		this.canvas.fillStyle = "rgb(" + kha__$Color_Color_$Impl_$.get_Rb(color) + "," + kha__$Color_Color_$Impl_$.get_Gb(color) + "," + kha__$Color_Color_$Impl_$.get_Bb(color) + ")";
		return color;
	}
	,get_color: function() {
		return this.myColor;
	}
	,drawRect: function(x,y,width,height,strength) {
		if(strength == null) strength = 1.0;
		this.canvas.beginPath();
		var oldStrength = this.canvas.lineWidth;
		this.canvas.lineWidth = Math.round(strength);
		this.canvas.rect(x,y,width,height);
		this.canvas.stroke();
		this.canvas.lineWidth = oldStrength;
	}
	,fillRect: function(x,y,width,height) {
		this.canvas.globalAlpha = this.get_opacity() * (kha__$Color_Color_$Impl_$.get_Ab(this.myColor) * 0.00392156862745098);
		this.canvas.fillRect(x,y,width,height);
		this.canvas.globalAlpha = this.get_opacity();
	}
	,drawString: function(text,x,y) {
		var image = this.webfont.getImage(this.myColor);
		if(image.width > 0) {
			var xpos = x;
			var ypos = y;
			var _g1 = 0;
			var _g = text.length;
			while(_g1 < _g) {
				var i = _g1++;
				var q = this.webfont.kravur.getBakedQuad(HxOverrides.cca(text,i) - 32,xpos,ypos);
				if(q != null) {
					if(q.s1 - q.s0 > 0 && q.t1 - q.t0 > 0 && q.x1 - q.x0 > 0 && q.y1 - q.y0 > 0) this.canvas.drawImage(image,q.s0 * image.width,q.t0 * image.height,(q.s1 - q.s0) * image.width,(q.t1 - q.t0) * image.height,q.x0,q.y0,q.x1 - q.x0,q.y1 - q.y0);
					xpos += q.xadvance;
				}
			}
		}
	}
	,set_font: function(font) {
		this.webfont = js_Boot.__cast(font , kha_js_Font);
		return this.webfont;
	}
	,get_font: function() {
		return this.webfont;
	}
	,drawLine: function(x1,y1,x2,y2,strength) {
		if(strength == null) strength = 1.0;
		this.canvas.beginPath();
		var oldWith = this.canvas.lineWidth;
		this.canvas.lineWidth = Math.round(strength);
		this.canvas.moveTo(x1,y1);
		this.canvas.lineTo(x2,y2);
		this.canvas.moveTo(0,0);
		this.canvas.stroke();
		this.canvas.lineWidth = oldWith;
	}
	,fillTriangle: function(x1,y1,x2,y2,x3,y3) {
		this.canvas.beginPath();
		this.canvas.closePath();
		this.canvas.fill();
	}
	,drawVideo: function(video,x,y,width,height) {
		this.canvas.drawImage((js_Boot.__cast(video , kha_js_Video)).element,x,y,width,height);
	}
	,setTransformation: function(transformation) {
		this.canvas.setTransform(transformation._00,transformation._01,transformation._10,transformation._11,transformation._20,transformation._12);
	}
	,__class__: kha_js_CanvasGraphics
});
var kha_js_URLParser = function(url) {
	this._parts = null;
	this._parts = ["source","protocol","authority","userInfo","user","password","host","port","relative","path","directory","file","query","anchor"];
	this.url = url;
	var r = new EReg("^(?:(?![^:@]+:[^:@/]*@)([^:/?#.]+):)?(?://)?((?:(([^:@]*)(?::([^:@]*))?)?@)?([^:/?#]*)(?::(\\d*))?)(((/(?:[^?#](?![^?#/]*\\.[^?#/.]+(?:[?#]|$)))*/?)?([^?#/]*))(?:\\?([^#]*))?(?:#(.*))?)","");
	r.match(url);
	var _g1 = 0;
	var _g = this._parts.length;
	while(_g1 < _g) {
		var i = _g1++;
		Reflect.setField(this,this._parts[i],r.matched(i));
	}
};
$hxClasses["kha.js.URLParser"] = kha_js_URLParser;
kha_js_URLParser.__name__ = ["kha","js","URLParser"];
kha_js_URLParser.parse = function(url) {
	return new kha_js_URLParser(url);
};
kha_js_URLParser.prototype = {
	toString: function() {
		var s = "For Url -> " + this.url + "\n";
		var _g1 = 0;
		var _g = this._parts.length;
		while(_g1 < _g) {
			var i = _g1++;
			s += this._parts[i] + ": " + Std.string(Reflect.field(this,this._parts[i])) + (i == this._parts.length - 1?"":"\n");
		}
		return s;
	}
	,__class__: kha_js_URLParser
};
var kha_js_EnvironmentVariables = function() {
	kha_EnvironmentVariables.call(this);
};
$hxClasses["kha.js.EnvironmentVariables"] = kha_js_EnvironmentVariables;
kha_js_EnvironmentVariables.__name__ = ["kha","js","EnvironmentVariables"];
kha_js_EnvironmentVariables.__super__ = kha_EnvironmentVariables;
kha_js_EnvironmentVariables.prototype = $extend(kha_EnvironmentVariables.prototype,{
	getVariable: function(name) {
		var parser = new kha_js_URLParser(window.location.href);
		var query = parser.query;
		var parts = query.split("&");
		var _g = 0;
		while(_g < parts.length) {
			var part = parts[_g];
			++_g;
			var subparts = part.split("=");
			if(subparts[0] == name) return subparts[1];
		}
		haxe_Log.trace("Environment variables requested.",{ fileName : "EnvironmentVariables.hx", lineNumber : 90, className : "kha.js.EnvironmentVariables", methodName : "getVariable"});
		return "";
	}
	,__class__: kha_js_EnvironmentVariables
});
var kha_js_Font = function(name,style,size) {
	this.myName = name;
	this.myStyle = style;
	this.mySize = size;
	this.kravur = kha_Kravur.get(name,style,size);
	this.images = new haxe_ds_IntMap();
};
$hxClasses["kha.js.Font"] = kha_js_Font;
kha_js_Font.__name__ = ["kha","js","Font"];
kha_js_Font.__interfaces__ = [kha_Font];
kha_js_Font.prototype = {
	get_name: function() {
		return this.kravur.get_name();
	}
	,get_style: function() {
		return this.kravur.get_style();
	}
	,get_size: function() {
		return this.kravur.get_size();
	}
	,getHeight: function() {
		return this.kravur.getHeight();
	}
	,charWidth: function(ch) {
		return this.kravur.charWidth(ch);
	}
	,charsWidth: function(ch,offset,length) {
		return this.kravur.charsWidth(ch,offset,length);
	}
	,stringWidth: function(str) {
		return this.kravur.stringWidth(str);
	}
	,getBaselinePosition: function() {
		return this.kravur.getBaselinePosition();
	}
	,getImage: function(color) {
		if(!this.images.h.hasOwnProperty(color)) {
			var canvas = window.document.createElement("canvas");
			canvas.width = this.kravur.width;
			canvas.height = this.kravur.height;
			var ctx = canvas.getContext("2d");
			ctx.fillStyle = "black";
			ctx.fillRect(0,0,this.kravur.width,this.kravur.height);
			var imageData = ctx.getImageData(0,0,this.kravur.width,this.kravur.height);
			var bytes;
			bytes = (js_Boot.__cast(this.kravur.getTexture() , kha_CanvasImage)).bytes;
			var _g1 = 0;
			var _g = bytes.length;
			while(_g1 < _g) {
				var i = _g1++;
				imageData.data[i * 4] = kha__$Color_Color_$Impl_$.get_Rb(color);
				imageData.data[i * 4 + 1] = kha__$Color_Color_$Impl_$.get_Gb(color);
				imageData.data[i * 4 + 2] = kha__$Color_Color_$Impl_$.get_Bb(color);
				imageData.data[i * 4 + 3] = bytes.b[i];
			}
			ctx.putImageData(imageData,0,0);
			var img = window.document.createElement("img");
			img.src = canvas.toDataURL("image/png");
			this.images.h[color] = img;
		}
		return this.images.h[color];
	}
	,__class__: kha_js_Font
};
var kha_js_Loader = function() {
	kha_Loader.call(this);
};
$hxClasses["kha.js.Loader"] = kha_js_Loader;
kha_js_Loader.__name__ = ["kha","js","Loader"];
kha_js_Loader.__super__ = kha_Loader;
kha_js_Loader.prototype = $extend(kha_Loader.prototype,{
	loadMusic: function(desc,done) {
		new kha_js_Music(desc.files,function(music) {
			if(kha_Sys._hasWebAudio) {
				var _g1 = 0;
				var _g = desc.files.length;
				while(_g1 < _g) {
					var i = _g1++;
					var file = desc.files[i];
					if(StringTools.endsWith(file,".ogg")) {
						new kha_js_WebAudioMusic(music,file,done);
						break;
					}
				}
			} else done(music);
		});
	}
	,loadSound: function(desc,done) {
		if(kha_Sys._hasWebAudio) {
			var _g1 = 0;
			var _g = desc.files.length;
			while(_g1 < _g) {
				var i = _g1++;
				var file = desc.files[i];
				if(StringTools.endsWith(file,".ogg")) {
					new kha_js_WebAudioSound(file,done);
					break;
				}
			}
		} else new kha_js_Sound(desc.files,done);
	}
	,loadImage: function(desc,done) {
		var img = window.document.createElement("img");
		img.src = desc.files[0];
		var readable;
		if(Object.prototype.hasOwnProperty.call(desc,"readable")) readable = desc.readable; else readable = false;
		img.onload = function(event) {
			done(kha_Image.fromImage(img,readable));
		};
	}
	,loadVideo: function(desc,done) {
		var video = new kha_js_Video(desc.files,done);
	}
	,loadBlob: function(desc,done) {
		var request = new XMLHttpRequest();
		request.open("GET",desc.files[0],true);
		request.responseType = "arraybuffer";
		request.onreadystatechange = function() {
			if(request.readyState != 4) return;
			if(request.status >= 200 && request.status < 400) {
				var bytes = null;
				var arrayBuffer = request.response;
				if(arrayBuffer != null) {
					var byteArray = new Uint8Array(arrayBuffer);
					bytes = haxe_io_Bytes.alloc(byteArray.byteLength);
					var _g1 = 0;
					var _g = byteArray.byteLength;
					while(_g1 < _g) {
						var i = _g1++;
						bytes.b[i] = byteArray[i] & 255;
					}
				} else if(request.responseBody != null) {
					var data = VBArray(request.responseBody).toArray();
					bytes = haxe_io_Bytes.alloc(data.length);
					var _g11 = 0;
					var _g2 = data.length;
					while(_g11 < _g2) {
						var i1 = _g11++;
						bytes.b[i1] = data[i1] & 255;
					}
				} else {
					haxe_Log.trace("Error loading " + desc.files[0],{ fileName : "Loader.hx", lineNumber : 87, className : "kha.js.Loader", methodName : "loadBlob"});
					window.console.log("loadBlob failed");
				}
				done(new kha_Blob(bytes));
			} else {
				haxe_Log.trace("Error loading " + desc.files[0],{ fileName : "Loader.hx", lineNumber : 93, className : "kha.js.Loader", methodName : "loadBlob"});
				window.console.log("loadBlob failed");
			}
		};
		request.send(null);
	}
	,loadFont: function(name,style,size) {
		if(kha_Sys.gl != null) return kha_Kravur.get(name,style,size); else return new kha_js_Font(name,style,size);
	}
	,loadURL: function(url) {
		if(HxOverrides.substr(url,0,1) == "#") window.location.hash = HxOverrides.substr(url,1,url.length - 1); else window.open(url,"Kha");
	}
	,setNormalCursor: function() {
		kha_js_Mouse.SystemCursor = "default";
		kha_js_Mouse.UpdateSystemCursor();
	}
	,setHandCursor: function() {
		kha_js_Mouse.SystemCursor = "pointer";
		kha_js_Mouse.UpdateSystemCursor();
	}
	,__class__: kha_js_Loader
});
var kha_js_Mouse = function() {
	kha_Mouse.call(this);
	kha_Sys.khanvas.style.cursor = kha_js_Mouse.SystemCursor;
};
$hxClasses["kha.js.Mouse"] = kha_js_Mouse;
kha_js_Mouse.__name__ = ["kha","js","Mouse"];
kha_js_Mouse.UpdateSystemCursor = function() {
	kha_Sys.khanvas.style.cursor = kha_js_Mouse.SystemCursor;
};
kha_js_Mouse.__super__ = kha_Mouse;
kha_js_Mouse.prototype = $extend(kha_Mouse.prototype,{
	hideSystemCursor: function() {
		kha_Sys.khanvas.style.cursor = "none";
	}
	,showSystemCursor: function() {
		kha_Sys.khanvas.style.cursor = kha_js_Mouse.SystemCursor;
	}
	,__class__: kha_js_Mouse
});
var kha_js_Music = function(filenames,done) {
	kha_Music.call(this);
	this.done = done;
	kha_js_Music.loading.add(this);
	this.element = window.document.createElement("audio");
	this.filenames = [];
	var _g = 0;
	while(_g < filenames.length) {
		var filename = filenames[_g];
		++_g;
		if(this.element.canPlayType("audio/ogg") != "" && StringTools.endsWith(filename,".ogg")) this.filenames.push(filename);
		if(this.element.canPlayType("audio/mp4") != "" && StringTools.endsWith(filename,".mp4")) this.filenames.push(filename);
	}
	this.element.addEventListener("error",$bind(this,this.errorListener),false);
	this.element.addEventListener("canplay",$bind(this,this.canPlayThroughListener),false);
	this.element.src = this.filenames[0];
	this.element.preload = "auto";
	this.element.load();
};
$hxClasses["kha.js.Music"] = kha_js_Music;
kha_js_Music.__name__ = ["kha","js","Music"];
kha_js_Music.__super__ = kha_Music;
kha_js_Music.prototype = $extend(kha_Music.prototype,{
	errorListener: function(eventInfo) {
		if(this.element.error.code == 4) {
			var _g1 = 0;
			var _g = this.filenames.length - 1;
			while(_g1 < _g) {
				var i = _g1++;
				if(this.element.src == this.filenames[i]) {
					this.element.src = this.filenames[i + 1];
					return;
				}
			}
		}
		haxe_Log.trace("Error loading " + this.element.src,{ fileName : "Music.hx", lineNumber : 90, className : "kha.js.Music", methodName : "errorListener"});
		window.console.log("loadMusic failed");
		this.finishAsset();
	}
	,canPlayThroughListener: function(eventInfo) {
		this.finishAsset();
	}
	,finishAsset: function() {
		this.element.removeEventListener("error",$bind(this,this.errorListener),false);
		this.element.removeEventListener("canplaythrough",$bind(this,this.canPlayThroughListener),false);
		this.done(this);
		kha_js_Music.loading.remove(this);
	}
	,__class__: kha_js_Music
});
var kha_js_SoundChannel = function(element) {
	kha_SoundChannel.call(this);
	this.element = element;
};
$hxClasses["kha.js.SoundChannel"] = kha_js_SoundChannel;
kha_js_SoundChannel.__name__ = ["kha","js","SoundChannel"];
kha_js_SoundChannel.__super__ = kha_SoundChannel;
kha_js_SoundChannel.prototype = $extend(kha_SoundChannel.prototype,{
	play: function() {
		kha_SoundChannel.prototype.play.call(this);
		this.element.play();
	}
	,pause: function() {
		try {
			this.element.pause();
		} catch( e ) {
			if (e instanceof js__$Boot_HaxeError) e = e.val;
			haxe_Log.trace(e,{ fileName : "Sound.hx", lineNumber : 30, className : "kha.js.SoundChannel", methodName : "pause"});
		}
	}
	,stop: function() {
		try {
			this.element.pause();
			this.element.currentTime = 0;
			kha_SoundChannel.prototype.stop.call(this);
		} catch( e ) {
			if (e instanceof js__$Boot_HaxeError) e = e.val;
			haxe_Log.trace(e,{ fileName : "Sound.hx", lineNumber : 41, className : "kha.js.SoundChannel", methodName : "stop"});
		}
	}
	,getCurrentPos: function() {
		return Math.ceil(this.element.currentTime * 1000);
	}
	,getLength: function() {
		if((function($this) {
			var $r;
			var f = $this.element.duration;
			$r = isFinite(f);
			return $r;
		}(this))) return Math.floor(this.element.duration * 1000); else return -1;
	}
	,__class__: kha_js_SoundChannel
});
var kha_js_Sound = function(filenames,done) {
	kha_Sound.call(this);
	this.done = done;
	kha_js_Sound.loading.add(this);
	var _this = window.document;
	this.element = _this.createElement("audio");
	this.filenames = [];
	var _g = 0;
	while(_g < filenames.length) {
		var filename = filenames[_g];
		++_g;
		if(this.element.canPlayType("audio/ogg") != "" && StringTools.endsWith(filename,".ogg")) this.filenames.push(filename);
		if(this.element.canPlayType("audio/mp4") != "" && StringTools.endsWith(filename,".mp4")) this.filenames.push(filename);
	}
	this.element.addEventListener("error",$bind(this,this.errorListener),false);
	this.element.addEventListener("canplay",$bind(this,this.canPlayThroughListener),false);
	this.element.src = this.filenames[0];
	this.element.preload = "auto";
	this.element.load();
};
$hxClasses["kha.js.Sound"] = kha_js_Sound;
kha_js_Sound.__name__ = ["kha","js","Sound"];
kha_js_Sound.__super__ = kha_Sound;
kha_js_Sound.prototype = $extend(kha_Sound.prototype,{
	errorListener: function(eventInfo) {
		if(this.element.error.code == 4) {
			var _g1 = 0;
			var _g = this.filenames.length - 1;
			while(_g1 < _g) {
				var i = _g1++;
				if(this.element.src == this.filenames[i]) {
					this.element.src = this.filenames[i + 1];
					return;
				}
			}
		}
		haxe_Log.trace("Error loading " + this.element.src,{ fileName : "Sound.hx", lineNumber : 108, className : "kha.js.Sound", methodName : "errorListener"});
		window.console.log("loadSound failed");
		this.finishAsset();
	}
	,canPlayThroughListener: function(eventInfo) {
		this.finishAsset();
	}
	,finishAsset: function() {
		this.element.removeEventListener("error",$bind(this,this.errorListener),false);
		this.element.removeEventListener("canplaythrough",$bind(this,this.canPlayThroughListener),false);
		this.done(this);
		kha_js_Sound.loading.remove(this);
	}
	,__class__: kha_js_Sound
});
var kha_js_Video = function(filenames,done) {
	kha_Video.call(this);
	this.done = done;
	kha_js_Video.loading.add(this);
	this.element = window.document.createElement("video");
	this.filenames = [];
	var _g = 0;
	while(_g < filenames.length) {
		var filename = filenames[_g];
		++_g;
		if(this.element.canPlayType("video/webm") != "" && StringTools.endsWith(filename,".webm")) this.filenames.push(filename);
		if(this.element.canPlayType("video/mp4") != "" && StringTools.endsWith(filename,".mp4")) this.filenames.push(filename);
	}
	this.element.addEventListener("error",$bind(this,this.errorListener),false);
	this.element.addEventListener("canplaythrough",$bind(this,this.canPlayThroughListener),false);
	this.element.preload = "auto";
	this.element.src = this.filenames[0];
};
$hxClasses["kha.js.Video"] = kha_js_Video;
kha_js_Video.__name__ = ["kha","js","Video"];
kha_js_Video.__super__ = kha_Video;
kha_js_Video.prototype = $extend(kha_Video.prototype,{
	width: function() {
		return this.element.videoWidth;
	}
	,height: function() {
		return this.element.videoHeight;
	}
	,play: function(loop) {
		if(loop == null) loop = false;
		try {
			this.element.loop = loop;
			this.element.play();
		} catch( e ) {
			if (e instanceof js__$Boot_HaxeError) e = e.val;
			haxe_Log.trace(e,{ fileName : "Video.hx", lineNumber : 53, className : "kha.js.Video", methodName : "play"});
		}
	}
	,pause: function() {
		try {
			this.element.pause();
		} catch( e ) {
			if (e instanceof js__$Boot_HaxeError) e = e.val;
			haxe_Log.trace(e,{ fileName : "Video.hx", lineNumber : 62, className : "kha.js.Video", methodName : "pause"});
		}
	}
	,stop: function() {
		try {
			this.element.pause();
			this.element.currentTime = 0;
		} catch( e ) {
			if (e instanceof js__$Boot_HaxeError) e = e.val;
			haxe_Log.trace(e,{ fileName : "Video.hx", lineNumber : 72, className : "kha.js.Video", methodName : "stop"});
		}
	}
	,getCurrentPos: function() {
		return Math.ceil(this.element.currentTime * 1000);
	}
	,getLength: function() {
		if(isFinite(this.element.duration)) return Math.floor(this.element.duration * 1000); else return -1;
	}
	,errorListener: function(eventInfo) {
		if(this.element.error.code == 4) {
			var _g1 = 0;
			var _g = this.filenames.length - 1;
			while(_g1 < _g) {
				var i = _g1++;
				if(this.element.src == this.filenames[i]) {
					this.element.src = this.filenames[i + 1];
					return;
				}
			}
		}
		haxe_Log.trace("Error loading " + this.element.src,{ fileName : "Video.hx", lineNumber : 100, className : "kha.js.Video", methodName : "errorListener"});
		this.finishAsset();
	}
	,canPlayThroughListener: function(eventInfo) {
		this.finishAsset();
	}
	,finishAsset: function() {
		this.element.removeEventListener("error",$bind(this,this.errorListener),false);
		this.element.removeEventListener("canplaythrough",$bind(this,this.canPlayThroughListener),false);
		if(kha_Sys.gl != null) this.texture = kha_Image.fromVideo(this);
		this.done(this);
		kha_js_Video.loading.remove(this);
	}
	,__class__: kha_js_Video
});
var kha_js_WebAudioMusic = function(aemusic,filename,done) {
	var _g = this;
	kha_Music.call(this);
	this.aemusic = aemusic;
	var request = new XMLHttpRequest();
	request.open("GET",filename,true);
	request.responseType = "arraybuffer";
	request.onerror = function() {
		haxe_Log.trace("Error loading " + filename,{ fileName : "WebAudioMusic.hx", lineNumber : 20, className : "kha.js.WebAudioMusic", methodName : "new"});
		window.console.log("loadMusic failed");
	};
	request.onload = function() {
		var arrayBuffer = request.response;
		_g.data = haxe_io_Bytes.ofData(arrayBuffer);
		done(_g);
	};
	request.send(null);
};
$hxClasses["kha.js.WebAudioMusic"] = kha_js_WebAudioMusic;
kha_js_WebAudioMusic.__name__ = ["kha","js","WebAudioMusic"];
kha_js_WebAudioMusic.__super__ = kha_Music;
kha_js_WebAudioMusic.prototype = $extend(kha_Music.prototype,{
	__class__: kha_js_WebAudioMusic
});
var kha_js_WebAudioChannel = function(buffer) {
	kha_SoundChannel.call(this);
	this.offset = 0;
	this.buffer = buffer;
	this.startTime = kha_audio2_Audio._context.currentTime;
	this.source = kha_audio2_Audio._context.createBufferSource();
	this.source.buffer = this.buffer;
	this.source.connect(kha_audio2_Audio._context.destination);
	this.source.start(0);
};
$hxClasses["kha.js.WebAudioChannel"] = kha_js_WebAudioChannel;
kha_js_WebAudioChannel.__name__ = ["kha","js","WebAudioChannel"];
kha_js_WebAudioChannel.__super__ = kha_SoundChannel;
kha_js_WebAudioChannel.prototype = $extend(kha_SoundChannel.prototype,{
	play: function() {
		if(this.source != null) return;
		kha_SoundChannel.prototype.play.call(this);
		this.startTime = kha_audio2_Audio._context.currentTime - this.offset;
		this.source.start(0,this.offset);
	}
	,pause: function() {
		this.source.stop();
		this.offset = kha_audio2_Audio._context.currentTime - this.startTime;
		this.startTime = -1;
		this.source = null;
	}
	,stop: function() {
		this.source.stop();
		this.source = null;
		this.offset = 0;
		this.startTime = -1;
		kha_SoundChannel.prototype.stop.call(this);
	}
	,getCurrentPos: function() {
		if(this.startTime < 0) return Math.ceil(this.offset * 1000); else return Math.ceil((kha_audio2_Audio._context.currentTime - this.startTime) * 1000);
	}
	,getLength: function() {
		return Math.floor(this.buffer.duration * 1000);
	}
	,__class__: kha_js_WebAudioChannel
});
var kha_js_WebAudioSound = function(filename,done) {
	var _g = this;
	kha_Sound.call(this);
	this.done = done;
	var request = new XMLHttpRequest();
	request.open("GET",filename,true);
	request.responseType = "arraybuffer";
	request.onerror = function() {
		haxe_Log.trace("Error loading " + filename,{ fileName : "WebAudioSound.hx", lineNumber : 77, className : "kha.js.WebAudioSound", methodName : "new"});
		window.console.log("loadSound failed");
	};
	request.onload = function() {
		var arrayBuffer = request.response;
		var output = new haxe_io_BytesOutput();
		var header = kha_audio2_ogg_vorbis_Reader.readAll(haxe_io_Bytes.ofData(arrayBuffer),output,true);
		var soundBytes = output.getBytes();
		var count = soundBytes.length / 4 | 0;
		if(header.channel == 1) {
			var this1;
			this1 = new Array(count * 2);
			_g.data = this1;
			var _g1 = 0;
			while(_g1 < count) {
				var i = _g1++;
				var val = soundBytes.getFloat(i * 4);
				_g.data[i * 2] = val;
				var val1 = soundBytes.getFloat(i * 4);
				_g.data[i * 2 + 1] = val1;
			}
		} else {
			var this2;
			this2 = new Array(count);
			_g.data = this2;
			var _g11 = 0;
			while(_g11 < count) {
				var i1 = _g11++;
				var val2 = soundBytes.getFloat(i1 * 4);
				_g.data[i1] = val2;
			}
		}
		done(_g);
	};
	request.send(null);
};
$hxClasses["kha.js.WebAudioSound"] = kha_js_WebAudioSound;
kha_js_WebAudioSound.__name__ = ["kha","js","WebAudioSound"];
kha_js_WebAudioSound.__super__ = kha_Sound;
kha_js_WebAudioSound.prototype = $extend(kha_Sound.prototype,{
	__class__: kha_js_WebAudioSound
});
var kha_js_graphics4_ConstantLocation = function(value) {
	this.value = value;
};
$hxClasses["kha.js.graphics4.ConstantLocation"] = kha_js_graphics4_ConstantLocation;
kha_js_graphics4_ConstantLocation.__name__ = ["kha","js","graphics4","ConstantLocation"];
kha_js_graphics4_ConstantLocation.__interfaces__ = [kha_graphics4_ConstantLocation];
kha_js_graphics4_ConstantLocation.prototype = {
	__class__: kha_js_graphics4_ConstantLocation
};
var kha_js_graphics4_Graphics = function(renderTarget) {
	this.matrixCache = (function($this) {
		var $r;
		var this1;
		this1 = new Array(16);
		$r = this1;
		return $r;
	}(this));
	this.renderTarget = renderTarget;
	this.instancedExtension = kha_Sys.gl.getExtension("ANGLE_instanced_arrays");
};
$hxClasses["kha.js.graphics4.Graphics"] = kha_js_graphics4_Graphics;
kha_js_graphics4_Graphics.__name__ = ["kha","js","graphics4","Graphics"];
kha_js_graphics4_Graphics.__interfaces__ = [kha_graphics4_Graphics];
kha_js_graphics4_Graphics.prototype = {
	begin: function() {
		kha_Sys.gl.enable(kha_Sys.gl.BLEND);
		kha_Sys.gl.blendFunc(kha_Sys.gl.SRC_ALPHA,kha_Sys.gl.ONE_MINUS_SRC_ALPHA);
		if(this.renderTarget == null) {
			kha_Sys.gl.bindFramebuffer(kha_Sys.gl.FRAMEBUFFER,null);
			kha_Sys.gl.viewport(0,0,kha_Sys.get_pixelWidth(),kha_Sys.get_pixelHeight());
		} else {
			kha_Sys.gl.bindFramebuffer(kha_Sys.gl.FRAMEBUFFER,this.renderTarget.frameBuffer);
			kha_Sys.gl.viewport(0,0,this.renderTarget.get_width(),this.renderTarget.get_height());
		}
	}
	,end: function() {
	}
	,flush: function() {
	}
	,vsynced: function() {
		return true;
	}
	,refreshRate: function() {
		return 60;
	}
	,clear: function(color,depth,stencil) {
		var clearMask = 0;
		if(color != null) {
			clearMask |= kha_Sys.gl.COLOR_BUFFER_BIT;
			kha_Sys.gl.clearColor(kha__$Color_Color_$Impl_$.get_Rb(color) * 0.00392156862745098,kha__$Color_Color_$Impl_$.get_Gb(color) * 0.00392156862745098,kha__$Color_Color_$Impl_$.get_Bb(color) * 0.00392156862745098,kha__$Color_Color_$Impl_$.get_Ab(color) * 0.00392156862745098);
		}
		if(depth != null) {
			clearMask |= kha_Sys.gl.DEPTH_BUFFER_BIT;
			kha_Sys.gl.clearDepth(depth);
		}
		if(stencil != null) clearMask |= kha_Sys.gl.STENCIL_BUFFER_BIT;
		kha_Sys.gl.clear(clearMask);
	}
	,viewport: function(x,y,width,height) {
		kha_Sys.gl.viewport(x,y,width,height);
	}
	,setDepthMode: function(write,mode) {
		switch(mode[1]) {
		case 0:
			kha_Sys.gl.disable(kha_Sys.gl.DEPTH_TEST);
			kha_Sys.gl.depthFunc(kha_Sys.gl.ALWAYS);
			break;
		case 1:
			kha_Sys.gl.enable(kha_Sys.gl.DEPTH_TEST);
			kha_Sys.gl.depthFunc(kha_Sys.gl.NEVER);
			break;
		case 2:
			kha_Sys.gl.enable(kha_Sys.gl.DEPTH_TEST);
			kha_Sys.gl.depthFunc(kha_Sys.gl.EQUAL);
			break;
		case 3:
			kha_Sys.gl.enable(kha_Sys.gl.DEPTH_TEST);
			kha_Sys.gl.depthFunc(kha_Sys.gl.NOTEQUAL);
			break;
		case 4:
			kha_Sys.gl.enable(kha_Sys.gl.DEPTH_TEST);
			kha_Sys.gl.depthFunc(kha_Sys.gl.LESS);
			break;
		case 5:
			kha_Sys.gl.enable(kha_Sys.gl.DEPTH_TEST);
			kha_Sys.gl.depthFunc(kha_Sys.gl.LEQUAL);
			break;
		case 6:
			kha_Sys.gl.enable(kha_Sys.gl.DEPTH_TEST);
			kha_Sys.gl.depthFunc(kha_Sys.gl.GREATER);
			break;
		case 7:
			kha_Sys.gl.enable(kha_Sys.gl.DEPTH_TEST);
			kha_Sys.gl.depthFunc(kha_Sys.gl.GEQUAL);
			break;
		}
		kha_Sys.gl.depthMask(write);
	}
	,getBlendFunc: function(op) {
		switch(op[1]) {
		case 2:case 0:
			return kha_Sys.gl.ZERO;
		case 1:
			return kha_Sys.gl.ONE;
		case 3:
			return kha_Sys.gl.SRC_ALPHA;
		case 4:
			return kha_Sys.gl.DST_ALPHA;
		case 5:
			return kha_Sys.gl.ONE_MINUS_SRC_ALPHA;
		case 6:
			return kha_Sys.gl.ONE_MINUS_DST_ALPHA;
		}
	}
	,setBlendingMode: function(source,destination) {
		if(source == kha_graphics4_BlendingOperation.BlendOne && destination == kha_graphics4_BlendingOperation.BlendZero) kha_Sys.gl.disable(kha_Sys.gl.BLEND); else {
			kha_Sys.gl.enable(kha_Sys.gl.BLEND);
			kha_Sys.gl.blendFunc(this.getBlendFunc(source),this.getBlendFunc(destination));
		}
	}
	,createVertexBuffer: function(vertexCount,structure,usage,canRead) {
		if(canRead == null) canRead = false;
		return new kha_graphics4_VertexBuffer(vertexCount,structure,usage);
	}
	,setVertexBuffer: function(vertexBuffer) {
		(js_Boot.__cast(vertexBuffer , kha_graphics4_VertexBuffer)).set(0);
	}
	,setVertexBuffers: function(vertexBuffers) {
		var offset = 0;
		var _g = 0;
		while(_g < vertexBuffers.length) {
			var vertexBuffer = vertexBuffers[_g];
			++_g;
			offset += (js_Boot.__cast(vertexBuffer , kha_graphics4_VertexBuffer)).set(offset);
		}
	}
	,createIndexBuffer: function(indexCount,usage,canRead) {
		if(canRead == null) canRead = false;
		return new kha_graphics4_IndexBuffer(indexCount,usage);
	}
	,setIndexBuffer: function(indexBuffer) {
		this.indicesCount = indexBuffer.count();
		(js_Boot.__cast(indexBuffer , kha_graphics4_IndexBuffer)).set();
	}
	,createCubeMap: function(size,format,usage,canRead) {
		if(canRead == null) canRead = false;
		return null;
	}
	,setTexture: function(stage,texture) {
		if(texture == null) {
			kha_Sys.gl.activeTexture(kha_Sys.gl.TEXTURE0 + (js_Boot.__cast(stage , kha_js_graphics4_TextureUnit)).value);
			kha_Sys.gl.bindTexture(kha_Sys.gl.TEXTURE_2D,null);
		} else (js_Boot.__cast(texture , kha_WebGLImage)).set((js_Boot.__cast(stage , kha_js_graphics4_TextureUnit)).value);
	}
	,setVideoTexture: function(unit,texture) {
		if(texture == null) {
			kha_Sys.gl.activeTexture(kha_Sys.gl.TEXTURE0 + (js_Boot.__cast(unit , kha_js_graphics4_TextureUnit)).value);
			kha_Sys.gl.bindTexture(kha_Sys.gl.TEXTURE_2D,null);
		} else (js_Boot.__cast((js_Boot.__cast(texture , kha_js_Video)).texture , kha_WebGLImage)).set((js_Boot.__cast(unit , kha_js_graphics4_TextureUnit)).value);
	}
	,setTextureParameters: function(texunit,uAddressing,vAddressing,minificationFilter,magnificationFilter,mipmapFilter) {
		kha_Sys.gl.activeTexture(kha_Sys.gl.TEXTURE0 + (js_Boot.__cast(texunit , kha_js_graphics4_TextureUnit)).value);
		switch(uAddressing[1]) {
		case 2:
			kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_WRAP_S,kha_Sys.gl.CLAMP_TO_EDGE);
			break;
		case 0:
			kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_WRAP_S,kha_Sys.gl.REPEAT);
			break;
		case 1:
			kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_WRAP_S,kha_Sys.gl.MIRRORED_REPEAT);
			break;
		}
		switch(vAddressing[1]) {
		case 2:
			kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_WRAP_T,kha_Sys.gl.CLAMP_TO_EDGE);
			break;
		case 0:
			kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_WRAP_T,kha_Sys.gl.REPEAT);
			break;
		case 1:
			kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_WRAP_T,kha_Sys.gl.MIRRORED_REPEAT);
			break;
		}
		switch(minificationFilter[1]) {
		case 0:
			switch(mipmapFilter[1]) {
			case 0:
				kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_MIN_FILTER,kha_Sys.gl.NEAREST);
				break;
			case 1:
				kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_MIN_FILTER,kha_Sys.gl.NEAREST_MIPMAP_NEAREST);
				break;
			case 2:
				kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_MIN_FILTER,kha_Sys.gl.NEAREST_MIPMAP_LINEAR);
				break;
			}
			break;
		case 1:case 2:
			switch(mipmapFilter[1]) {
			case 0:
				kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_MIN_FILTER,kha_Sys.gl.LINEAR);
				break;
			case 1:
				kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_MIN_FILTER,kha_Sys.gl.LINEAR_MIPMAP_NEAREST);
				break;
			case 2:
				kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_MIN_FILTER,kha_Sys.gl.LINEAR_MIPMAP_LINEAR);
				break;
			}
			break;
		}
		switch(magnificationFilter[1]) {
		case 0:
			kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_MAG_FILTER,kha_Sys.gl.NEAREST);
			break;
		case 1:case 2:
			kha_Sys.gl.texParameteri(kha_Sys.gl.TEXTURE_2D,kha_Sys.gl.TEXTURE_MAG_FILTER,kha_Sys.gl.LINEAR);
			break;
		}
	}
	,setCullMode: function(mode) {
		switch(mode[1]) {
		case 2:
			kha_Sys.gl.disable(kha_Sys.gl.CULL_FACE);
			break;
		case 0:
			kha_Sys.gl.enable(kha_Sys.gl.CULL_FACE);
			kha_Sys.gl.cullFace(kha_Sys.gl.FRONT);
			break;
		case 1:
			kha_Sys.gl.enable(kha_Sys.gl.CULL_FACE);
			kha_Sys.gl.cullFace(kha_Sys.gl.BACK);
			break;
		}
	}
	,setProgram: function(program) {
		program.set();
	}
	,setBool: function(location,value) {
		kha_Sys.gl.uniform1i((js_Boot.__cast(location , kha_js_graphics4_ConstantLocation)).value,value?1:0);
	}
	,setInt: function(location,value) {
		kha_Sys.gl.uniform1i((js_Boot.__cast(location , kha_js_graphics4_ConstantLocation)).value,value);
	}
	,setFloat: function(location,value) {
		kha_Sys.gl.uniform1f((js_Boot.__cast(location , kha_js_graphics4_ConstantLocation)).value,value);
	}
	,setFloat2: function(location,value1,value2) {
		kha_Sys.gl.uniform2f((js_Boot.__cast(location , kha_js_graphics4_ConstantLocation)).value,value1,value2);
	}
	,setFloat3: function(location,value1,value2,value3) {
		kha_Sys.gl.uniform3f((js_Boot.__cast(location , kha_js_graphics4_ConstantLocation)).value,value1,value2,value3);
	}
	,setFloat4: function(location,value1,value2,value3,value4) {
		kha_Sys.gl.uniform4f((js_Boot.__cast(location , kha_js_graphics4_ConstantLocation)).value,value1,value2,value3,value4);
	}
	,setFloats: function(location,values) {
		kha_Sys.gl.uniform1fv((js_Boot.__cast(location , kha_js_graphics4_ConstantLocation)).value,values);
	}
	,setVector2: function(location,value) {
		kha_Sys.gl.uniform2f((js_Boot.__cast(location , kha_js_graphics4_ConstantLocation)).value,value.x,value.y);
	}
	,setVector3: function(location,value) {
		kha_Sys.gl.uniform3f((js_Boot.__cast(location , kha_js_graphics4_ConstantLocation)).value,value.x,value.y,value.z);
	}
	,setVector4: function(location,value) {
		kha_Sys.gl.uniform4f((js_Boot.__cast(location , kha_js_graphics4_ConstantLocation)).value,value.x,value.y,value.z,value.w);
	}
	,setMatrix: function(location,matrix) {
		this.matrixCache[0] = matrix._00;
		this.matrixCache[1] = matrix._01;
		this.matrixCache[2] = matrix._02;
		this.matrixCache[3] = matrix._03;
		this.matrixCache[4] = matrix._10;
		this.matrixCache[5] = matrix._11;
		this.matrixCache[6] = matrix._12;
		this.matrixCache[7] = matrix._13;
		this.matrixCache[8] = matrix._20;
		this.matrixCache[9] = matrix._21;
		this.matrixCache[10] = matrix._22;
		this.matrixCache[11] = matrix._23;
		this.matrixCache[12] = matrix._30;
		this.matrixCache[13] = matrix._31;
		this.matrixCache[14] = matrix._32;
		this.matrixCache[15] = matrix._33;
		kha_Sys.gl.uniformMatrix4fv((js_Boot.__cast(location , kha_js_graphics4_ConstantLocation)).value,false,this.matrixCache);
	}
	,drawIndexedVertices: function(start,count) {
		if(count == null) count = -1;
		if(start == null) start = 0;
		kha_Sys.gl.drawElements(kha_Sys.gl.TRIANGLES,count == -1?this.indicesCount:count,kha_Sys.gl.UNSIGNED_SHORT,start * 2);
	}
	,setStencilParameters: function(compareMode,bothPass,depthFail,stencilFail,referenceValue,readMask,writeMask) {
		if(writeMask == null) writeMask = 255;
		if(readMask == null) readMask = 255;
	}
	,setScissor: function(rect) {
	}
	,renderTargetsInvertedY: function() {
		return true;
	}
	,drawIndexedVerticesInstanced: function(instanceCount,start,count) {
		if(count == null) count = -1;
		if(start == null) start = 0;
		if(this.instancedRenderingAvailable()) this.instancedExtension.drawElementsInstancedANGLE(kha_Sys.gl.TRIANGLES,count == -1?this.indicesCount:count,kha_Sys.gl.UNSIGNED_SHORT,start * 2,instanceCount);
	}
	,instancedRenderingAvailable: function() {
		return this.instancedExtension;
	}
	,__class__: kha_js_graphics4_Graphics
};
var kha_js_graphics4_Graphics2 = function(canvas) {
	kha_graphics4_Graphics2.call(this,canvas);
};
$hxClasses["kha.js.graphics4.Graphics2"] = kha_js_graphics4_Graphics2;
kha_js_graphics4_Graphics2.__name__ = ["kha","js","graphics4","Graphics2"];
kha_js_graphics4_Graphics2.__super__ = kha_graphics4_Graphics2;
kha_js_graphics4_Graphics2.prototype = $extend(kha_graphics4_Graphics2.prototype,{
	drawVideoInternal: function(video,x,y,width,height) {
		var v;
		v = js_Boot.__cast(video , kha_js_Video);
		this.drawScaledSubImage(v.texture,0,0,v.texture.get_width(),v.texture.get_height(),x,y,width,height);
	}
	,begin: function(clear,clearColor) {
		if(clear == null) clear = true;
		kha_Sys.gl.colorMask(true,true,true,true);
		kha_Sys.gl.disable(kha_Sys.gl.DEPTH_TEST);
		kha_Sys.gl.depthFunc(kha_Sys.gl.ALWAYS);
		kha_graphics4_Graphics2.prototype.begin.call(this,clear,clearColor);
	}
	,__class__: kha_js_graphics4_Graphics2
});
var kha_js_graphics4_TextureUnit = function(value) {
	this.value = value;
};
$hxClasses["kha.js.graphics4.TextureUnit"] = kha_js_graphics4_TextureUnit;
kha_js_graphics4_TextureUnit.__name__ = ["kha","js","graphics4","TextureUnit"];
kha_js_graphics4_TextureUnit.__interfaces__ = [kha_graphics4_TextureUnit];
kha_js_graphics4_TextureUnit.prototype = {
	__class__: kha_js_graphics4_TextureUnit
};
var kha_loader_Room = function(name) {
	this.name = name;
	this.assets = [];
	this.parent = null;
};
$hxClasses["kha.loader.Room"] = kha_loader_Room;
kha_loader_Room.__name__ = ["kha","loader","Room"];
kha_loader_Room.prototype = {
	__class__: kha_loader_Room
};
var kha_math_FastMatrix3 = function(_00,_10,_20,_01,_11,_21,_02,_12,_22) {
	this._00 = _00;
	this._10 = _10;
	this._20 = _20;
	this._01 = _01;
	this._11 = _11;
	this._21 = _21;
	this._02 = _02;
	this._12 = _12;
	this._22 = _22;
};
$hxClasses["kha.math.FastMatrix3"] = kha_math_FastMatrix3;
kha_math_FastMatrix3.__name__ = ["kha","math","FastMatrix3"];
kha_math_FastMatrix3.prototype = {
	__class__: kha_math_FastMatrix3
};
var kha_math_FastVector2 = function(x,y) {
	if(y == null) y = 0;
	if(x == null) x = 0;
	this.x = x;
	this.y = y;
};
$hxClasses["kha.math.FastVector2"] = kha_math_FastVector2;
kha_math_FastVector2.__name__ = ["kha","math","FastVector2"];
kha_math_FastVector2.prototype = {
	get_length: function() {
		return Math.sqrt(this.x * this.x + this.y * this.y);
	}
	,set_length: function(length) {
		var currentLength = this.get_length();
		if(currentLength == 0) return 0;
		var mul = length / currentLength;
		this.x *= mul;
		this.y *= mul;
		return length;
	}
	,__class__: kha_math_FastVector2
};
var kha_math_Matrix3 = function(_00,_10,_20,_01,_11,_21,_02,_12,_22) {
	this._00 = _00;
	this._10 = _10;
	this._20 = _20;
	this._01 = _01;
	this._11 = _11;
	this._21 = _21;
	this._02 = _02;
	this._12 = _12;
	this._22 = _22;
};
$hxClasses["kha.math.Matrix3"] = kha_math_Matrix3;
kha_math_Matrix3.__name__ = ["kha","math","Matrix3"];
kha_math_Matrix3.prototype = {
	__class__: kha_math_Matrix3
};
var kha_math_Matrix4 = function(_00,_10,_20,_30,_01,_11,_21,_31,_02,_12,_22,_32,_03,_13,_23,_33) {
	this._00 = _00;
	this._10 = _10;
	this._20 = _20;
	this._30 = _30;
	this._01 = _01;
	this._11 = _11;
	this._21 = _21;
	this._31 = _31;
	this._02 = _02;
	this._12 = _12;
	this._22 = _22;
	this._32 = _32;
	this._03 = _03;
	this._13 = _13;
	this._23 = _23;
	this._33 = _33;
};
$hxClasses["kha.math.Matrix4"] = kha_math_Matrix4;
kha_math_Matrix4.__name__ = ["kha","math","Matrix4"];
kha_math_Matrix4.orthogonalProjection = function(left,right,bottom,top,zn,zf) {
	var tx = -(right + left) / (right - left);
	var ty = -(top + bottom) / (top - bottom);
	var tz = -(zf + zn) / (zf - zn);
	return new kha_math_Matrix4(2 / (right - left),0,0,tx,0,2 / (top - bottom),0,ty,0,0,-2 / (zf - zn),tz,0,0,0,1);
};
kha_math_Matrix4.perspectiveProjection = function(fovY,aspect,zn,zf) {
	var uh = 1.0 / Math.tan(fovY / 2 * (Math.PI / 180));
	var uw = uh / aspect;
	return new kha_math_Matrix4(uw,0,0,0,0,uh,0,0,0,0,(zf + zn) / (zn - zf),2 * zf * zn / (zn - zf),0,0,-1,0);
};
kha_math_Matrix4.lookAt = function(eye,at,up) {
	var zaxis = new kha_math_Vector3(at.x - eye.x,at.y - eye.y,at.z - eye.z);
	zaxis.set_length(1);
	var xaxis;
	var _x1 = zaxis.y * up.z - zaxis.z * up.y;
	var _y1 = zaxis.z * up.x - zaxis.x * up.z;
	var _z1 = zaxis.x * up.y - zaxis.y * up.x;
	xaxis = new kha_math_Vector3(_x1,_y1,_z1);
	xaxis.set_length(1);
	var _x = xaxis.y * zaxis.z - xaxis.z * zaxis.y;
	var _y = xaxis.z * zaxis.x - xaxis.x * zaxis.z;
	var _z = xaxis.x * zaxis.y - xaxis.y * zaxis.x;
	var yaxis_x = _x;
	var yaxis_y = _y;
	var yaxis_z = _z;
	return new kha_math_Matrix4(xaxis.x,xaxis.y,xaxis.z,-(xaxis.x * eye.x + xaxis.y * eye.y + xaxis.z * eye.z),yaxis_x,yaxis_y,yaxis_z,-(yaxis_x * eye.x + yaxis_y * eye.y + yaxis_z * eye.z),-zaxis.x,-zaxis.y,-zaxis.z,zaxis.x * eye.x + zaxis.y * eye.y + zaxis.z * eye.z,0,0,0,1);
};
kha_math_Matrix4.prototype = {
	__class__: kha_math_Matrix4
};
var kha_math_Vector2 = function(x,y) {
	if(y == null) y = 0;
	if(x == null) x = 0;
	this.x = x;
	this.y = y;
};
$hxClasses["kha.math.Vector2"] = kha_math_Vector2;
kha_math_Vector2.__name__ = ["kha","math","Vector2"];
kha_math_Vector2.prototype = {
	get_length: function() {
		return Math.sqrt(this.x * this.x + this.y * this.y);
	}
	,set_length: function(length) {
		var currentLength = this.get_length();
		if(currentLength == 0) return 0;
		var mul = length / currentLength;
		this.x *= mul;
		this.y *= mul;
		return length;
	}
	,__class__: kha_math_Vector2
};
var kha_math_Vector3 = function(x,y,z) {
	if(z == null) z = 0;
	if(y == null) y = 0;
	if(x == null) x = 0;
	this.x = x;
	this.y = y;
	this.z = z;
};
$hxClasses["kha.math.Vector3"] = kha_math_Vector3;
kha_math_Vector3.__name__ = ["kha","math","Vector3"];
kha_math_Vector3.prototype = {
	get_length: function() {
		return Math.sqrt(this.x * this.x + this.y * this.y + this.z * this.z);
	}
	,set_length: function(length) {
		var currentLength = this.get_length();
		if(currentLength == 0) return 0;
		var mul = length / currentLength;
		this.x *= mul;
		this.y *= mul;
		this.z *= mul;
		return length;
	}
	,__class__: kha_math_Vector3
};
var kha_math_Vector4 = function(x,y,z,w) {
	if(w == null) w = 1;
	if(z == null) z = 0;
	if(y == null) y = 0;
	if(x == null) x = 0;
	this.x = x;
	this.y = y;
	this.z = z;
	this.w = w;
};
$hxClasses["kha.math.Vector4"] = kha_math_Vector4;
kha_math_Vector4.__name__ = ["kha","math","Vector4"];
kha_math_Vector4.prototype = {
	get_length: function() {
		return Math.sqrt(this.x * this.x + this.y * this.y + this.z * this.z + this.w * this.w);
	}
	,set_length: function(length) {
		var currentLength = this.get_length();
		if(currentLength == 0) return 0;
		var mul = length / currentLength;
		this.x *= mul;
		this.y *= mul;
		this.z *= mul;
		this.w *= mul;
		return length;
	}
	,__class__: kha_math_Vector4
};
var kha_network_Client = function() { };
$hxClasses["kha.network.Client"] = kha_network_Client;
kha_network_Client.__name__ = ["kha","network","Client"];
kha_network_Client.prototype = {
	__class__: kha_network_Client
};
var kha_network_Entity = function() { };
$hxClasses["kha.network.Entity"] = kha_network_Entity;
kha_network_Entity.__name__ = ["kha","network","Entity"];
kha_network_Entity.prototype = {
	__class__: kha_network_Entity
};
var kha_network_LocalClient = function(id) {
	this.myId = id;
};
$hxClasses["kha.network.LocalClient"] = kha_network_LocalClient;
kha_network_LocalClient.__name__ = ["kha","network","LocalClient"];
kha_network_LocalClient.__interfaces__ = [kha_network_Client];
kha_network_LocalClient.prototype = {
	send: function(bytes,mandatory) {
	}
	,receive: function(receiver) {
	}
	,onClose: function(close) {
	}
	,get_controllers: function() {
		return null;
	}
	,get_id: function() {
		return this.myId;
	}
	,__class__: kha_network_LocalClient
};
var kha_network_Network = function(url,port) {
	this.socket = new WebSocket("ws://" + url + ":" + port);
	this.socket.binaryType = "arraybuffer";
};
$hxClasses["kha.network.Network"] = kha_network_Network;
kha_network_Network.__name__ = ["kha","network","Network"];
kha_network_Network.prototype = {
	send: function(bytes,mandatory) {
		this.socket.send(bytes.b.bufferValue);
	}
	,listen: function(listener) {
		this.socket.onmessage = function(message) {
			listener(haxe_io_Bytes.ofData(message.data));
		};
	}
	,__class__: kha_network_Network
};
var kha_network_State = function(time,data) {
	this.time = time;
	this.data = data;
};
$hxClasses["kha.network.State"] = kha_network_State;
kha_network_State.__name__ = ["kha","network","State"];
kha_network_State.prototype = {
	__class__: kha_network_State
};
var kha_network_Session = function(players) {
	this.controllers = new haxe_ds_IntMap();
	this.entities = new haxe_ds_IntMap();
	kha_network_Session.instance = this;
	this.players = players;
};
$hxClasses["kha.network.Session"] = kha_network_Session;
kha_network_Session.__name__ = ["kha","network","Session"];
kha_network_Session.the = function() {
	return kha_network_Session.instance;
};
kha_network_Session.prototype = {
	get_me: function() {
		return this.localClient;
	}
	,addEntity: function(entity) {
		var key = entity._id();
		this.entities.h[key] = entity;
	}
	,addController: function(controller) {
		haxe_Log.trace("Adding controller id " + controller._id(),{ fileName : "Session.hx", lineNumber : 69, className : "kha.network.Session", methodName : "addController"});
		var key = controller._id();
		this.controllers.h[key] = controller;
	}
	,send: function() {
		return null;
	}
	,receive: function(bytes) {
		var _g = bytes.b[0];
		switch(_g) {
		case 0:
			var index = bytes.b[1];
			this.localClient = new kha_network_LocalClient(index);
			kha_Scheduler.resetTime();
			this.startCallback();
			break;
		case 1:
			var time = bytes.getDouble(1);
			var offset = 9;
			var $it0 = this.entities.iterator();
			while( $it0.hasNext() ) {
				var entity = $it0.next();
				entity._receive(offset,bytes);
				offset += entity._size();
			}
			kha_Scheduler.back(time);
			break;
		}
	}
	,waitForStart: function(callback) {
		this.startCallback = callback;
		this.network = new kha_network_Network("localhost",6789);
		this.network.listen($bind(this,this.receive));
	}
	,update: function() {
	}
	,__class__: kha_network_Session
};
var kha_simd_Float32x4 = function(_0,_1,_2,_3) {
	this._0 = _0;
	this._1 = _1;
	this._2 = _2;
	this._3 = _3;
};
$hxClasses["kha.simd.Float32x4"] = kha_simd_Float32x4;
kha_simd_Float32x4.__name__ = ["kha","simd","Float32x4"];
kha_simd_Float32x4.create = function() {
	return new kha_simd_Float32x4(0,0,0,0);
};
kha_simd_Float32x4.loadAllFast = function(t) {
	return new kha_simd_Float32x4(t,t,t,t);
};
kha_simd_Float32x4.load = function(a,b,c,d) {
	return new kha_simd_Float32x4(a,b,c,d);
};
kha_simd_Float32x4.loadFast = function(a,b,c,d) {
	return new kha_simd_Float32x4(a,b,c,d);
};
kha_simd_Float32x4.get = function(t,index) {
	var value = 0;
	switch(index) {
	case 0:
		value = t._0;
		break;
	case 1:
		value = t._1;
		break;
	case 2:
		value = t._2;
		break;
	case 3:
		value = t._3;
		break;
	}
	return value;
};
kha_simd_Float32x4.getFast = function(t,index) {
	switch(index) {
	case 0:
		return t._0;
	case 1:
		return t._1;
	case 2:
		return t._2;
	case 3:
		return t._3;
	}
	return 0;
};
kha_simd_Float32x4.abs = function(t) {
	return new kha_simd_Float32x4(Math.abs(t._0),Math.abs(t._1),Math.abs(t._2),Math.abs(t._3));
};
kha_simd_Float32x4.add = function(a,b) {
	return new kha_simd_Float32x4(a._0 + b._0,a._1 + b._1,a._2 + b._2,a._3 + b._3);
};
kha_simd_Float32x4.div = function(a,b) {
	return new kha_simd_Float32x4(a._0 / b._0,a._1 / b._1,a._2 / b._2,a._3 / b._3);
};
kha_simd_Float32x4.mul = function(a,b) {
	return new kha_simd_Float32x4(a._0 * b._0,a._1 * b._1,a._2 * b._2,a._3 * b._3);
};
kha_simd_Float32x4.neg = function(t) {
	return new kha_simd_Float32x4(-t._0,-t._1,-t._2,-t._3);
};
kha_simd_Float32x4.reciprocalApproximation = function(t) {
	return new kha_simd_Float32x4(0,0,0,0);
};
kha_simd_Float32x4.reciprocalSqrtApproximation = function(t) {
	return new kha_simd_Float32x4(0,0,0,0);
};
kha_simd_Float32x4.sub = function(a,b) {
	return new kha_simd_Float32x4(a._0 - b._0,a._1 - b._1,a._2 - b._2,a._3 - b._3);
};
kha_simd_Float32x4.sqrt = function(t) {
	return new kha_simd_Float32x4(Math.sqrt(t._0),Math.sqrt(t._1),Math.sqrt(t._2),Math.sqrt(t._3));
};
kha_simd_Float32x4.prototype = {
	__class__: kha_simd_Float32x4
};
var math_Transform = function(_00,_10,_20,_01,_11,_21,_02,_12,_22) {
	this._00 = _00;
	this._10 = _10;
	this._20 = _20;
	this._01 = _01;
	this._11 = _11;
	this._21 = _21;
	this._02 = _02;
	this._12 = _12;
	this._22 = _22;
};
$hxClasses["math.Transform"] = math_Transform;
math_Transform.__name__ = ["math","Transform"];
math_Transform.translation = function(x,y) {
	return new math_Transform(1,0,x,0,1,y,0,0,1);
};
math_Transform.empty = function() {
	return new math_Transform(0,0,0,0,0,0,0,0,0);
};
math_Transform.identity = function() {
	return new math_Transform(1,0,0,0,1,0,0,0,1);
};
math_Transform.scale = function(x,y) {
	return new math_Transform(x,0,0,0,y,0,0,0,1);
};
math_Transform.rotation = function(alpha) {
	return new math_Transform(Math.cos(alpha),-Math.sin(alpha),0,Math.sin(alpha),Math.cos(alpha),0,0,0,1);
};
math_Transform.prototype = {
	add: function(m) {
		return new math_Transform(this._00 + m._00,this._10 + m._10,this._20 + m._20,this._01 + m._01,this._11 + m._11,this._21 + m._21,this._02 + m._02,this._12 + m._12,this._22 + m._22);
	}
	,sub: function(m) {
		return new math_Transform(this._00 - m._00,this._10 - m._10,this._20 - m._20,this._01 - m._01,this._11 - m._11,this._21 - m._21,this._02 - m._02,this._12 - m._12,this._22 - m._22);
	}
	,mult: function(value) {
		return new math_Transform(this._00 * value,this._10 * value,this._20 * value,this._01 * value,this._11 * value,this._21 * value,this._02 * value,this._12 * value,this._22 * value);
	}
	,transpose: function() {
		return new math_Transform(this._00,this._01,this._02,this._10,this._11,this._12,this._20,this._21,this._22);
	}
	,multmat: function(m) {
		return new math_Transform(this._00 * m._00 + this._10 * m._01 + this._20 * m._02,this._00 * m._10 + this._10 * m._11 + this._20 * m._12,this._00 * m._20 + this._10 * m._21 + this._20 * m._22,this._01 * m._00 + this._11 * m._01 + this._21 * m._02,this._01 * m._10 + this._11 * m._11 + this._21 * m._12,this._01 * m._20 + this._11 * m._21 + this._21 * m._22,this._02 * m._00 + this._12 * m._01 + this._22 * m._02,this._02 * m._10 + this._12 * m._11 + this._22 * m._12,this._02 * m._20 + this._12 * m._21 + this._22 * m._22);
	}
	,multvec: function(value) {
		var w = this._02 * value.x + this._12 * value.y + this._22;
		var x = (this._00 * value.x + this._10 * value.y + this._20) / w;
		var y = (this._01 * value.x + this._11 * value.y + this._21) / w;
		return new math_Vector(x,y);
	}
	,cofactor: function(m0,m1,m2,m3) {
		return m0 * m3 - m1 * m2;
	}
	,determinant: function() {
		var c00 = this._11 * this._22 - this._21 * this._12;
		var c01 = this._10 * this._22 - this._20 * this._12;
		var c02 = this._10 * this._21 - this._20 * this._11;
		return this._00 * c00 - this._01 * c01 + this._02 * c02;
	}
	,inverse: function() {
		var c00 = this._11 * this._22 - this._21 * this._12;
		var c01 = this._10 * this._22 - this._20 * this._12;
		var c02 = this._10 * this._21 - this._20 * this._11;
		var det = this._00 * c00 - this._01 * c01 + this._02 * c02;
		if(Math.abs(det) < 0.000001) throw new js__$Boot_HaxeError("determinant is too small");
		var c10 = this._01 * this._22 - this._21 * this._02;
		var c11 = this._00 * this._22 - this._20 * this._02;
		var c12 = this._00 * this._21 - this._20 * this._01;
		var c20 = this._01 * this._12 - this._11 * this._02;
		var c21 = this._00 * this._12 - this._10 * this._02;
		var c22 = this._00 * this._11 - this._10 * this._01;
		var invdet = 1.0 / det;
		return new math_Transform(c00 * invdet,-c01 * invdet,c02 * invdet,-c10 * invdet,c11 * invdet,-c12 * invdet,c20 * invdet,-c21 * invdet,c22 * invdet);
	}
	,__class__: math_Transform
};
var math_Vector = function(x,y) {
	this.x = x;
	this.y = y;
};
$hxClasses["math.Vector"] = math_Vector;
math_Vector.__name__ = ["math","Vector"];
math_Vector.fromAngle = function(angle) {
	return new math_Vector(Math.cos(angle),Math.sin(angle));
};
math_Vector.prototype = {
	clone: function() {
		return new math_Vector(this.x,this.y);
	}
	,set: function(x,y) {
		this.x = x;
		this.y = y;
	}
	,dot: function(v) {
		return this.x * v.x + this.y * v.y;
	}
	,cross: function(v) {
		return this.x * v.y - this.y * v.x;
	}
	,add: function(v) {
		return new math_Vector(this.x + v.x,this.y + v.y);
	}
	,sub: function(v) {
		return new math_Vector(this.x - v.x,this.y - v.y);
	}
	,mult: function(s) {
		return new math_Vector(this.x * s,this.y * s);
	}
	,angle: function() {
		return Math.atan2(this.y,this.x);
	}
	,length: function() {
		return Math.sqrt(this.x * this.x + this.y * this.y);
	}
	,toString: function() {
		return "(" + Math.round(this.x * 100) / 100 + "," + Math.round(this.y * 100) / 100 + ")";
	}
	,__class__: math_Vector
};
var solemnsky_control_Control = function() { };
$hxClasses["solemnsky.control.Control"] = solemnsky_control_Control;
solemnsky_control_Control.__name__ = ["solemnsky","control","Control"];
solemnsky_control_Control.prototype = {
	__class__: solemnsky_control_Control
};
var solemnsky_control_EmptyControl = function() {
};
$hxClasses["solemnsky.control.EmptyControl"] = solemnsky_control_EmptyControl;
solemnsky_control_EmptyControl.__name__ = ["solemnsky","control","EmptyControl"];
solemnsky_control_EmptyControl.__interfaces__ = [solemnsky_control_Control];
solemnsky_control_EmptyControl.prototype = {
	init: function(_) {
	}
	,tick: function(delta) {
	}
	,render: function(delta) {
		return new solemnsky_control_Scene();
	}
	,profiling: function(data) {
	}
	,handle: function(e) {
	}
	,hasEnded: function() {
		return false;
	}
	,__class__: solemnsky_control_EmptyControl
};
var solemnsky_control_DemoControl = function() {
	this.y = 0;
	this.x = 0;
	this.time = 0;
};
$hxClasses["solemnsky.control.DemoControl"] = solemnsky_control_DemoControl;
solemnsky_control_DemoControl.__name__ = ["solemnsky","control","DemoControl"];
solemnsky_control_DemoControl.__interfaces__ = [solemnsky_control_Control];
solemnsky_control_DemoControl.prototype = {
	init: function(_) {
	}
	,tick: function(delta) {
		this.time += delta;
	}
	,renderElem: function(centerPos) {
		var scene = new solemnsky_control_Scene();
		var pos = new math_Vector(0,0);
		var offset = new math_Vector(27,0);
		scene.prims = [solemnsky_control_DrawPrim.SetColor(0,255,0,255),solemnsky_control_DrawPrim.DrawCircle(pos,20),solemnsky_control_DrawPrim.DrawCircle(new math_Vector(pos.x + offset.x,pos.y + offset.y),7)];
		scene.trans = new math_Transform(1,0,0,0,1,0,0,0,1).multmat(new math_Transform(1,0,centerPos.x,0,1,centerPos.y,0,0,1)).multmat(math_Transform.rotation(this.time / 1000));
		return scene;
	}
	,renderFront: function(delta) {
		var scene = new solemnsky_control_Scene();
		var offset = new math_Vector(40,-40);
		var offset2 = new math_Vector(40,40);
		var pos = new math_Vector(0,0);
		var _g = 1;
		while(_g < 20) {
			var i = _g++;
			scene.children.push(this.renderElem(pos));
			pos = new math_Vector(pos.x + offset.x,pos.y + offset.y);
		}
		pos = new math_Vector(0,0);
		var _g1 = 1;
		while(_g1 < 20) {
			var i1 = _g1++;
			scene.children.push(this.renderElem(pos));
			pos = new math_Vector(pos.x + offset2.x,pos.y + offset2.y);
		}
		pos = new math_Vector(0,0);
		var _g2 = 1;
		while(_g2 < 20) {
			var i2 = _g2++;
			scene.children.push(this.renderElem(pos));
			pos = new math_Vector(pos.x - offset2.x,pos.y - offset2.y);
		}
		pos = new math_Vector(0,0);
		var _g3 = 1;
		while(_g3 < 20) {
			var i3 = _g3++;
			scene.children.push(this.renderElem(pos));
			pos = new math_Vector(pos.x - offset.x,pos.y - offset.y);
		}
		scene.prims = [solemnsky_control_DrawPrim.SetColor(0,0,0,100),solemnsky_control_DrawPrim.DrawRect(new math_Vector(0,0),new math_Vector(200,200)),solemnsky_control_DrawPrim.DrawRect(new math_Vector(0,0),new math_Vector(-200,-200)),solemnsky_control_DrawPrim.SetColor(0,0,0,200),solemnsky_control_DrawPrim.DrawRect(new math_Vector(0,0),new math_Vector(200,-200)),solemnsky_control_DrawPrim.DrawRect(new math_Vector(0,0),new math_Vector(-200,200))];
		scene.trans = new math_Transform(1,0,0,0,1,0,0,0,1).multmat(new math_Transform(1,0,this.x,0,1,this.y,0,0,1)).multmat(math_Transform.rotation(-this.time / 1200));
		return scene;
	}
	,render: function(delta) {
		var scene = new solemnsky_control_Scene();
		scene.children = [this.renderFront(delta)];
		scene.prims = [solemnsky_control_DrawPrim.SetColor(0,0,255,255),solemnsky_control_DrawPrim.DrawImage(new math_Vector(0,0),"title"),solemnsky_control_DrawPrim.SetColor(0,0,0,255),solemnsky_control_DrawPrim.SetFont("Arial",14),solemnsky_control_DrawPrim.DrawText(new math_Vector(500,500),solemnsky_control_TextAlign.LeftText,"this text isn't part of the image")];
		return scene;
	}
	,handle: function(e) {
		switch(e[1]) {
		case 0:
			var y = e[3];
			var x = e[2];
			this.x = x;
			this.y = y;
			break;
		default:
		}
	}
	,profiling: function(data) {
		haxe_Log.trace(data.print(),{ fileName : "Control.hx", lineNumber : 190, className : "solemnsky.control.DemoControl", methodName : "profiling"});
	}
	,hasEnded: function() {
		return false;
	}
	,__class__: solemnsky_control_DemoControl
};
var solemnsky_control_Event = $hxClasses["solemnsky.control.Event"] = { __ename__ : ["solemnsky","control","Event"], __constructs__ : ["MouseMove","CharKey","SpecialKey"] };
solemnsky_control_Event.MouseMove = function(x,y) { var $x = ["MouseMove",0,x,y]; $x.__enum__ = solemnsky_control_Event; $x.toString = $estr; return $x; };
solemnsky_control_Event.CharKey = function($char,state) { var $x = ["CharKey",1,$char,state]; $x.__enum__ = solemnsky_control_Event; $x.toString = $estr; return $x; };
solemnsky_control_Event.SpecialKey = function(key,state) { var $x = ["SpecialKey",2,key,state]; $x.__enum__ = solemnsky_control_Event; $x.toString = $estr; return $x; };
var solemnsky_control_Network = function() { };
$hxClasses["solemnsky.control.Network"] = solemnsky_control_Network;
solemnsky_control_Network.__name__ = ["solemnsky","control","Network"];
var solemnsky_control_Profile = function(bufferOn,renderOn,renderOff,primCount,tickOn,tickOff) {
	this.bufferOn = solemnsky_control_Profile.dataFromArray(bufferOn);
	this.renderOn = solemnsky_control_Profile.dataFromArray(renderOn);
	this.renderOff = solemnsky_control_Profile.dataFromArray(renderOff);
	this.primCount = solemnsky_control_Profile.dataFromArray(primCount);
	this.tickOn = solemnsky_control_Profile.dataFromArray(tickOn);
	this.tickOff = solemnsky_control_Profile.dataFromArray(tickOff);
};
$hxClasses["solemnsky.control.Profile"] = solemnsky_control_Profile;
solemnsky_control_Profile.__name__ = ["solemnsky","control","Profile"];
solemnsky_control_Profile.dataFromArray = function(a) {
	var sum = 0;
	var min = a[0];
	var max = a[0];
	var _g = 0;
	while(_g < a.length) {
		var i = a[_g];
		++_g;
		sum += i;
		min = Math.round(Math.min(min,i));
		max = Math.round(Math.max(max,i));
	}
	return { average : Math.round(sum / a.length), min : min, max : max};
};
solemnsky_control_Profile.printInterval = function(i) {
	return i.min + "ms-" + i.max + "ms~" + i.average + "ms";
};
solemnsky_control_Profile.printValue = function(i) {
	return i.min + "-" + i.max + "~" + i.average;
};
solemnsky_control_Profile.prototype = {
	print: function() {
		return "" + "buff:" + solemnsky_control_Profile.printInterval(this.bufferOn) + "/" + "rndr:" + solemnsky_control_Profile.printInterval(this.renderOn) + "/" + "rslp:" + solemnsky_control_Profile.printInterval(this.renderOff) + "/" + "\n" + "prim:" + solemnsky_control_Profile.printValue(this.primCount) + "/" + "tick:" + solemnsky_control_Profile.printInterval(this.tickOn) + "/" + "tslp:" + solemnsky_control_Profile.printInterval(this.tickOff) + "/";
	}
	,__class__: solemnsky_control_Profile
};
var solemnsky_control_TextAlign = $hxClasses["solemnsky.control.TextAlign"] = { __ename__ : ["solemnsky","control","TextAlign"], __constructs__ : ["CenterText","LeftText","RightText"] };
solemnsky_control_TextAlign.CenterText = ["CenterText",0];
solemnsky_control_TextAlign.CenterText.toString = $estr;
solemnsky_control_TextAlign.CenterText.__enum__ = solemnsky_control_TextAlign;
solemnsky_control_TextAlign.LeftText = ["LeftText",1];
solemnsky_control_TextAlign.LeftText.toString = $estr;
solemnsky_control_TextAlign.LeftText.__enum__ = solemnsky_control_TextAlign;
solemnsky_control_TextAlign.RightText = ["RightText",2];
solemnsky_control_TextAlign.RightText.toString = $estr;
solemnsky_control_TextAlign.RightText.__enum__ = solemnsky_control_TextAlign;
var solemnsky_control_DrawPrim = $hxClasses["solemnsky.control.DrawPrim"] = { __ename__ : ["solemnsky","control","DrawPrim"], __constructs__ : ["SetColor","SetFont","DrawCircle","DrawRect","DrawText","DrawImage"] };
solemnsky_control_DrawPrim.SetColor = function(r,g,b,a) { var $x = ["SetColor",0,r,g,b,a]; $x.__enum__ = solemnsky_control_DrawPrim; $x.toString = $estr; return $x; };
solemnsky_control_DrawPrim.SetFont = function(name,size) { var $x = ["SetFont",1,name,size]; $x.__enum__ = solemnsky_control_DrawPrim; $x.toString = $estr; return $x; };
solemnsky_control_DrawPrim.DrawCircle = function(pos,radius) { var $x = ["DrawCircle",2,pos,radius]; $x.__enum__ = solemnsky_control_DrawPrim; $x.toString = $estr; return $x; };
solemnsky_control_DrawPrim.DrawRect = function(topLeft,bottomRight) { var $x = ["DrawRect",3,topLeft,bottomRight]; $x.__enum__ = solemnsky_control_DrawPrim; $x.toString = $estr; return $x; };
solemnsky_control_DrawPrim.DrawText = function(pos,align,text) { var $x = ["DrawText",4,pos,align,text]; $x.__enum__ = solemnsky_control_DrawPrim; $x.toString = $estr; return $x; };
solemnsky_control_DrawPrim.DrawImage = function(pos,image) { var $x = ["DrawImage",5,pos,image]; $x.__enum__ = solemnsky_control_DrawPrim; $x.toString = $estr; return $x; };
var solemnsky_control_Scene = function() {
	this.alpha = 1;
	this.trans = new math_Transform(1,0,0,0,1,0,0,0,1);
	this.children = [];
	this.prims = [];
};
$hxClasses["solemnsky.control.Scene"] = solemnsky_control_Scene;
solemnsky_control_Scene.__name__ = ["solemnsky","control","Scene"];
solemnsky_control_Scene.prototype = {
	__class__: solemnsky_control_Scene
};
var solemnsky_core_Core = function() { };
$hxClasses["solemnsky.core.Core"] = solemnsky_core_Core;
solemnsky_core_Core.__name__ = ["solemnsky","core","Core"];
solemnsky_core_Core.prototype = {
	__class__: solemnsky_core_Core
};
var solemnsky_ui_Web = function() { };
$hxClasses["solemnsky.ui.Web"] = solemnsky_ui_Web;
solemnsky_ui_Web.__name__ = ["solemnsky","ui","Web"];
solemnsky_ui_Web.ctrl = function() {
	return new solemnsky_control_DemoControl();
};
var solemnsky_ui_WebDemo = function(core) {
	this.myId = 0;
	this.notes = [];
	this.core = core;
	core.init(null);
	this.myId = core.join("offline player");
};
$hxClasses["solemnsky.ui.WebDemo"] = solemnsky_ui_WebDemo;
solemnsky_ui_WebDemo.__name__ = ["solemnsky","ui","WebDemo"];
solemnsky_ui_WebDemo.__interfaces__ = [solemnsky_control_Control];
solemnsky_ui_WebDemo.prototype = {
	init: function(_) {
	}
	,tick: function(delta) {
		var newNotes = this.core.tick(delta);
		var _g = 0;
		while(_g < newNotes.length) {
			var note = newNotes[_g];
			++_g;
			haxe_Log.trace(note,{ fileName : "Web.hx", lineNumber : 43, className : "solemnsky.ui.WebDemo", methodName : "tick"});
		}
		this.notes = this.notes.concat(newNotes);
	}
	,render: function(delta) {
		return this.core.render(delta);
	}
	,profiling: function(profile) {
		haxe_Log.trace(profile.print(),{ fileName : "Web.hx", lineNumber : 53, className : "solemnsky.ui.WebDemo", methodName : "profiling"});
	}
	,handle: function(e) {
		this.core.handle(this.myId,e);
	}
	,hasEnded: function() {
		return this.core.hasEnded();
	}
	,__class__: solemnsky_ui_WebDemo
};
function $iterator(o) { if( o instanceof Array ) return function() { return HxOverrides.iter(o); }; return typeof(o.iterator) == 'function' ? $bind(o,o.iterator) : o.iterator; }
var $_, $fid = 0;
function $bind(o,m) { if( m == null ) return null; if( m.__id__ == null ) m.__id__ = $fid++; var f; if( o.hx__closures__ == null ) o.hx__closures__ = {}; else f = o.hx__closures__[m.__id__]; if( f == null ) { f = function(){ return f.method.apply(f.scope, arguments); }; f.scope = o; f.method = m; o.hx__closures__[m.__id__] = f; } return f; }
if(Array.prototype.indexOf) HxOverrides.indexOf = function(a,o,i) {
	return Array.prototype.indexOf.call(a,o,i);
};
$hxClasses.Math = Math;
String.prototype.__class__ = $hxClasses.String = String;
String.__name__ = ["String"];
$hxClasses.Array = Array;
Array.__name__ = ["Array"];
Date.prototype.__class__ = $hxClasses.Date = Date;
Date.__name__ = ["Date"];
var Int = $hxClasses.Int = { __name__ : ["Int"]};
var Dynamic = $hxClasses.Dynamic = { __name__ : ["Dynamic"]};
var Float = $hxClasses.Float = Number;
Float.__name__ = ["Float"];
var Bool = $hxClasses.Bool = Boolean;
Bool.__ename__ = ["Bool"];
var Class = $hxClasses.Class = { __name__ : ["Class"]};
var Enum = { };
var __map_reserved = {}
var ArrayBuffer = (Function("return typeof ArrayBuffer != 'undefined' ? ArrayBuffer : null"))() || js_html_compat_ArrayBuffer;
if(ArrayBuffer.prototype.slice == null) ArrayBuffer.prototype.slice = js_html_compat_ArrayBuffer.sliceImpl;
var Uint8Array = (Function("return typeof Uint8Array != 'undefined' ? Uint8Array : null"))() || js_html_compat_Uint8Array._new;
kha_Game.FPS = 60;
Manager.profileWindow = 50;
Manager.profileUpdate = 100;
haxe_Serializer.USE_CACHE = false;
haxe_Serializer.USE_ENUM_INDEX = false;
haxe_Serializer.BASE64 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789%:";
haxe_Unserializer.DEFAULT_RESOLVER = Type;
haxe_Unserializer.BASE64 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789%:";
haxe_ds_ObjectMap.count = 0;
js_Boot.__toStr = {}.toString;
js_html_compat_Uint8Array.BYTES_PER_ELEMENT = 1;
kha__$Color_Color_$Impl_$.Black = kha__$Color_Color_$Impl_$._new(-16777216);
kha__$Color_Color_$Impl_$.White = kha__$Color_Color_$Impl_$._new(-1);
kha__$Color_Color_$Impl_$.Red = kha__$Color_Color_$Impl_$._new(-65536);
kha__$Color_Color_$Impl_$.Blue = kha__$Color_Color_$Impl_$._new(-16776961);
kha__$Color_Color_$Impl_$.Green = kha__$Color_Color_$Impl_$._new(-16711936);
kha__$Color_Color_$Impl_$.Magenta = kha__$Color_Color_$Impl_$._new(-65281);
kha__$Color_Color_$Impl_$.Yellow = kha__$Color_Color_$Impl_$._new(-256);
kha__$Color_Color_$Impl_$.Cyan = kha__$Color_Color_$Impl_$._new(-16711681);
kha__$Color_Color_$Impl_$.Purple = kha__$Color_Color_$Impl_$._new(-8388480);
kha__$Color_Color_$Impl_$.Pink = kha__$Color_Color_$Impl_$._new(-16181);
kha__$Color_Color_$Impl_$.Orange = kha__$Color_Color_$Impl_$._new(-23296);
kha__$Color_Color_$Impl_$.invMaxChannelValue = 0.00392156862745098;
kha_Configuration.id = -1;
kha_FontStyle.Default = new kha_FontStyle(false,false,false);
kha_Kravur.fontCache = new haxe_ds_StringMap();
kha_Scheduler.DIF_COUNT = 3;
kha_Scheduler.maxframetime = 0.5;
kha_Scheduler.startTime = 0;
kha_Scheduler.lastNow = 0;
kha_Starter.maxGamepads = 4;
kha_Starter.leftMouseCtrlDown = false;
kha_Starter.lastFirstTouchX = 0;
kha_Starter.lastFirstTouchY = 0;
kha_Sys.screenRotation = kha_ScreenRotation.RotationNone;
kha_audio2_Audio1.channelCount = 16;
kha_audio2_ogg_tools_Crc32.POLY = 79764919;
kha_audio2_ogg_vorbis_VorbisDecodeState.INVALID_BITS = -1;
kha_audio2_ogg_vorbis_VorbisTools.EOP = -1;
kha_audio2_ogg_vorbis_VorbisTools.M__PI = 3.14159265358979323846264;
kha_audio2_ogg_vorbis_VorbisTools.DIVTAB_NUMER = 32;
kha_audio2_ogg_vorbis_VorbisTools.DIVTAB_DENOM = 64;
kha_audio2_ogg_vorbis_VorbisTools.INVERSE_DB_TABLE = [1.0649863e-07,1.1341951e-07,1.2079015e-07,1.2863978e-07,1.3699951e-07,1.4590251e-07,1.5538408e-07,1.6548181e-07,1.7623575e-07,1.8768855e-07,1.9988561e-07,2.1287530e-07,2.2670913e-07,2.4144197e-07,2.5713223e-07,2.7384213e-07,2.9163793e-07,3.1059021e-07,3.3077411e-07,3.5226968e-07,3.7516214e-07,3.9954229e-07,4.2550680e-07,4.5315863e-07,4.8260743e-07,5.1396998e-07,5.4737065e-07,5.8294187e-07,6.2082472e-07,6.6116941e-07,7.0413592e-07,7.4989464e-07,7.9862701e-07,8.5052630e-07,9.0579828e-07,9.6466216e-07,1.0273513e-06,1.0941144e-06,1.1652161e-06,1.2409384e-06,1.3215816e-06,1.4074654e-06,1.4989305e-06,1.5963394e-06,1.7000785e-06,1.8105592e-06,1.9282195e-06,2.0535261e-06,2.1869758e-06,2.3290978e-06,2.4804557e-06,2.6416497e-06,2.8133190e-06,2.9961443e-06,3.1908506e-06,3.3982101e-06,3.6190449e-06,3.8542308e-06,4.1047004e-06,4.3714470e-06,4.6555282e-06,4.9580707e-06,5.2802740e-06,5.6234160e-06,5.9888572e-06,6.3780469e-06,6.7925283e-06,7.2339451e-06,7.7040476e-06,8.2047000e-06,8.7378876e-06,9.3057248e-06,9.9104632e-06,1.0554501e-05,1.1240392e-05,1.1970856e-05,1.2748789e-05,1.3577278e-05,1.4459606e-05,1.5399272e-05,1.6400004e-05,1.7465768e-05,1.8600792e-05,1.9809576e-05,2.1096914e-05,2.2467911e-05,2.3928002e-05,2.5482978e-05,2.7139006e-05,2.8902651e-05,3.0780908e-05,3.2781225e-05,3.4911534e-05,3.7180282e-05,3.9596466e-05,4.2169667e-05,4.4910090e-05,4.7828601e-05,5.0936773e-05,5.4246931e-05,5.7772202e-05,6.1526565e-05,6.5524908e-05,6.9783085e-05,7.4317983e-05,7.9147585e-05,8.4291040e-05,8.9768747e-05,9.5602426e-05,0.00010181521,0.00010843174,0.00011547824,0.00012298267,0.00013097477,0.00013948625,0.00014855085,0.00015820453,0.00016848555,0.00017943469,0.00019109536,0.00020351382,0.00021673929,0.00023082423,0.00024582449,0.00026179955,0.00027881276,0.00029693158,0.00031622787,0.00033677814,0.00035866388,0.00038197188,0.00040679456,0.00043323036,0.00046138411,0.00049136745,0.00052329927,0.00055730621,0.00059352311,0.00063209358,0.00067317058,0.00071691700,0.00076350630,0.00081312324,0.00086596457,0.00092223983,0.00098217216,0.0010459992,0.0011139742,0.0011863665,0.0012634633,0.0013455702,0.0014330129,0.0015261382,0.0016253153,0.0017309374,0.0018434235,0.0019632195,0.0020908006,0.0022266726,0.0023713743,0.0025254795,0.0026895994,0.0028643847,0.0030505286,0.0032487691,0.0034598925,0.0036847358,0.0039241906,0.0041792066,0.0044507950,0.0047400328,0.0050480668,0.0053761186,0.0057254891,0.0060975636,0.0064938176,0.0069158225,0.0073652516,0.0078438871,0.0083536271,0.0088964928,0.009474637,0.010090352,0.010746080,0.011444421,0.012188144,0.012980198,0.013823725,0.014722068,0.015678791,0.016697687,0.017782797,0.018938423,0.020169149,0.021479854,0.022875735,0.024362330,0.025945531,0.027631618,0.029427276,0.031339626,0.033376252,0.035545228,0.037855157,0.040315199,0.042935108,0.045725273,0.048696758,0.051861348,0.055231591,0.058820850,0.062643361,0.066714279,0.071049749,0.075666962,0.080584227,0.085821044,0.091398179,0.097337747,0.10366330,0.11039993,0.11757434,0.12521498,0.13335215,0.14201813,0.15124727,0.16107617,0.17154380,0.18269168,0.19456402,0.20720788,0.22067342,0.23501402,0.25028656,0.26655159,0.28387361,0.30232132,0.32196786,0.34289114,0.36517414,0.38890521,0.41417847,0.44109412,0.46975890,0.50028648,0.53279791,0.56742212,0.60429640,0.64356699,0.68538959,0.72993007,0.77736504,0.82788260,0.88168307,0.9389798,1.0];
kha_audio2_ogg_vorbis_data_Codebook.NO_CODE = 255;
kha_audio2_ogg_vorbis_data_Codebook.delay = 0;
kha_audio2_ogg_vorbis_data_Header.PACKET_ID = 1;
kha_audio2_ogg_vorbis_data_Header.PACKET_COMMENT = 3;
kha_audio2_ogg_vorbis_data_Header.PACKET_SETUP = 5;
kha_audio2_ogg_vorbis_data_PageFlag.CONTINUED_PACKET = 1;
kha_audio2_ogg_vorbis_data_PageFlag.FIRST_PAGE = 2;
kha_audio2_ogg_vorbis_data_PageFlag.LAST_PAGE = 4;
kha_audio2_ogg_vorbis_data_Setting.MAX_CHANNELS = 16;
kha_audio2_ogg_vorbis_data_Setting.PUSHDATA_CRC_COUNT = 4;
kha_audio2_ogg_vorbis_data_Setting.FAST_HUFFMAN_LENGTH = 10;
kha_audio2_ogg_vorbis_data_Setting.FAST_HUFFMAN_TABLE_SIZE = 1024;
kha_audio2_ogg_vorbis_data_Setting.FAST_HUFFMAN_TABLE_MASK = 1023;
kha_graphics4_ImageShaderPainter.bufferSize = 1500;
kha_graphics4_ImageShaderPainter.vertexSize = 9;
kha_graphics4_ColoredShaderPainter.bufferSize = 100;
kha_graphics4_ColoredShaderPainter.triangleBufferSize = 100;
kha_graphics4_TextShaderPainter.bufferSize = 100;
kha_input_Gamepad.instances = [];
kha_input_Keyboard.__meta__ = { fields : { sendDownEvent : { input : null}, sendUpEvent : { input : null}}};
kha_js_Mouse.SystemCursor = "default";
kha_js_Music.loading = new List();
kha_js_Sound.loading = new List();
kha_js_Video.loading = new List();
kha_math_FastMatrix3.width = 3;
kha_math_FastMatrix3.height = 3;
kha_math_Matrix3.width = 3;
kha_math_Matrix3.height = 3;
kha_math_Matrix4.width = 4;
kha_math_Matrix4.height = 4;
kha_network_Session.START = 0;
kha_network_Session.ENTITY_UPDATES = 1;
kha_network_Session.CONTROLLER_UPDATES = 2;
Main.main();
})(typeof console != "undefined" ? console : {log:function(){}}, typeof window != "undefined" ? window : exports);
