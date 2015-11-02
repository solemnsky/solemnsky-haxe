#include <hxcpp.h>

#ifndef INCLUDED_nape_dynamics_Contact
#include <nape/dynamics/Contact.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactIterator
#include <nape/dynamics/ContactIterator.h>
#endif
#ifndef INCLUDED_nape_dynamics_ContactList
#include <nape/dynamics/ContactList.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Arbiter
#include <zpp_nape/dynamics/ZPP_Arbiter.h>
#endif
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_Contact
#include <zpp_nape/dynamics/ZPP_Contact.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ContactList
#include <zpp_nape/util/ZPP_ContactList.h>
#endif
namespace nape{
namespace dynamics{

Void ContactList_obj::__construct()
{
HX_STACK_FRAME("nape.dynamics.ContactList","new",0x4bb1d6dc,"nape.dynamics.ContactList.new","nape/dynamics/ContactList.hx",234,0xd6cc37f4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(238)
	this->zpp_inner = null();
	HX_STACK_LINE(696)
	::zpp_nape::util::ZPP_ContactList tmp = ::zpp_nape::util::ZPP_ContactList_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(696)
	this->zpp_inner = tmp;
	HX_STACK_LINE(697)
	::zpp_nape::util::ZPP_ContactList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(697)
	tmp1->outer = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//ContactList_obj::~ContactList_obj() { }

Dynamic ContactList_obj::__CreateEmpty() { return  new ContactList_obj; }
hx::ObjectPtr< ContactList_obj > ContactList_obj::__new()
{  hx::ObjectPtr< ContactList_obj > _result_ = new ContactList_obj();
	_result_->__construct();
	return _result_;}

Dynamic ContactList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ContactList_obj > _result_ = new ContactList_obj();
	_result_->__construct();
	return _result_;}

int ContactList_obj::get_length( ){
	HX_STACK_FRAME("nape.dynamics.ContactList","get_length",0x6f0d05b3,"nape.dynamics.ContactList.get_length","nape/dynamics/ContactList.hx",244,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(245)
	::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(245)
	tmp->valmod();
	HX_STACK_LINE(246)
	::zpp_nape::util::ZPP_ContactList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(246)
	bool tmp2 = tmp1->zip_length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(246)
	if ((tmp2)){
		HX_STACK_LINE(247)
		::zpp_nape::util::ZPP_ContactList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		tmp3->zip_length = false;
		HX_STACK_LINE(248)
		{
			HX_STACK_LINE(249)
			::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(249)
			tmp4->user_length = (int)0;
			HX_STACK_LINE(250)
			{
				HX_STACK_LINE(251)
				::zpp_nape::util::ZPP_ContactList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(251)
				::zpp_nape::dynamics::ZPP_Contact tmp6 = tmp5->inner->next;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(251)
				::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp6;		HX_STACK_VAR(cx_ite,"cx_ite");
				HX_STACK_LINE(252)
				while((true)){
					HX_STACK_LINE(252)
					bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(252)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(252)
					if ((tmp8)){
						HX_STACK_LINE(252)
						break;
					}
					HX_STACK_LINE(253)
					::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(254)
					bool tmp9 = i->active;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(254)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(254)
					if ((tmp9)){
						HX_STACK_LINE(254)
						tmp10 = i->arbiter->active;
					}
					else{
						HX_STACK_LINE(254)
						tmp10 = false;
					}
					HX_STACK_LINE(254)
					if ((tmp10)){
						HX_STACK_LINE(254)
						::zpp_nape::util::ZPP_ContactList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(254)
						(tmp11->user_length)++;
					}
					HX_STACK_LINE(255)
					cx_ite = cx_ite->next;
				}
			}
		}
	}
	HX_STACK_LINE(261)
	::zpp_nape::util::ZPP_ContactList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(261)
	int tmp4 = tmp3->user_length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(261)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,get_length,return )

bool ContactList_obj::has( ::nape::dynamics::Contact obj){
	HX_STACK_FRAME("nape.dynamics.ContactList","has",0x4bad45d6,"nape.dynamics.ContactList.has","nape/dynamics/ContactList.hx",346,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(347)
	::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(347)
	tmp->valmod();
	HX_STACK_LINE(350)
	::zpp_nape::util::ZPP_ContactList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(350)
	::zpp_nape::dynamics::ZPP_Contact tmp2 = obj->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(350)
	bool tmp3 = tmp1->inner->has(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(350)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,has,return )

::nape::dynamics::Contact ContactList_obj::at( int index){
	HX_STACK_FRAME("nape.dynamics.ContactList","at",0x9593b1f7,"nape.dynamics.ContactList.at","nape/dynamics/ContactList.hx",363,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(364)
	::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(364)
	tmp->valmod();
	HX_STACK_LINE(368)
	bool tmp1 = (index < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(368)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(368)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(368)
	if ((tmp2)){
		HX_STACK_LINE(368)
		int tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(368)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(368)
		{
			HX_STACK_LINE(368)
			::zpp_nape::util::ZPP_ContactList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(368)
			::zpp_nape::util::ZPP_ContactList tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(368)
			tmp7->valmod();
			HX_STACK_LINE(368)
			::zpp_nape::util::ZPP_ContactList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(368)
			::zpp_nape::util::ZPP_ContactList tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(368)
			bool tmp10 = tmp9->zip_length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(368)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(368)
			if ((tmp11)){
				HX_STACK_LINE(368)
				::zpp_nape::util::ZPP_ContactList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(368)
				::zpp_nape::util::ZPP_ContactList tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(368)
				tmp13->zip_length = false;
				HX_STACK_LINE(368)
				{
					HX_STACK_LINE(368)
					::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(368)
					::zpp_nape::util::ZPP_ContactList tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(368)
					tmp15->user_length = (int)0;
					HX_STACK_LINE(368)
					{
						HX_STACK_LINE(368)
						::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(368)
						::zpp_nape::util::ZPP_ContactList tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(368)
						::zpp_nape::dynamics::ZPP_Contact tmp18 = tmp17->inner->next;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(368)
						::zpp_nape::dynamics::ZPP_Contact tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(368)
						::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp19;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(368)
						while((true)){
							HX_STACK_LINE(368)
							bool tmp20 = (cx_ite != null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(368)
							bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(368)
							bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(368)
							bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(368)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(368)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(368)
							if ((tmp25)){
								HX_STACK_LINE(368)
								break;
							}
							HX_STACK_LINE(368)
							::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(368)
							bool tmp26 = i->active;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(368)
							bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(368)
							bool tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(368)
							if ((tmp28)){
								HX_STACK_LINE(368)
								bool tmp29 = i->arbiter->active;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(368)
								tmp27 = tmp29;
							}
							else{
								HX_STACK_LINE(368)
								tmp27 = false;
							}
							HX_STACK_LINE(368)
							bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(368)
							if ((tmp29)){
								HX_STACK_LINE(368)
								::zpp_nape::util::ZPP_ContactList tmp30 = this->zpp_inner;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(368)
								::zpp_nape::util::ZPP_ContactList tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(368)
								(tmp31->user_length)++;
							}
							HX_STACK_LINE(368)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
			HX_STACK_LINE(368)
			::zpp_nape::util::ZPP_ContactList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(368)
			::zpp_nape::util::ZPP_ContactList tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(368)
			tmp5 = tmp13->user_length;
		}
		HX_STACK_LINE(368)
		tmp3 = (tmp4 >= tmp5);
	}
	else{
		HX_STACK_LINE(368)
		tmp3 = true;
	}
	HX_STACK_LINE(368)
	if ((tmp3)){
		HX_STACK_LINE(368)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Index out of bounds","\x10","\xf3","\x5b","\x3f"));
	}
	HX_STACK_LINE(370)
	::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(370)
	bool tmp5 = tmp4->reverse_flag;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(370)
	if ((tmp5)){
		HX_STACK_LINE(370)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(370)
			::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(370)
			tmp7->valmod();
			HX_STACK_LINE(370)
			::zpp_nape::util::ZPP_ContactList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(370)
			bool tmp9 = tmp8->zip_length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(370)
			if ((tmp9)){
				HX_STACK_LINE(370)
				::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(370)
				tmp10->zip_length = false;
				HX_STACK_LINE(370)
				{
					HX_STACK_LINE(370)
					::zpp_nape::util::ZPP_ContactList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(370)
					tmp11->user_length = (int)0;
					HX_STACK_LINE(370)
					{
						HX_STACK_LINE(370)
						::zpp_nape::util::ZPP_ContactList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(370)
						::zpp_nape::dynamics::ZPP_Contact tmp13 = tmp12->inner->next;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(370)
						::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp13;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(370)
						while((true)){
							HX_STACK_LINE(370)
							bool tmp14 = (cx_ite != null());		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(370)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(370)
							if ((tmp15)){
								HX_STACK_LINE(370)
								break;
							}
							HX_STACK_LINE(370)
							::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(370)
							bool tmp16 = i->active;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(370)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(370)
							if ((tmp16)){
								HX_STACK_LINE(370)
								tmp17 = i->arbiter->active;
							}
							else{
								HX_STACK_LINE(370)
								tmp17 = false;
							}
							HX_STACK_LINE(370)
							if ((tmp17)){
								HX_STACK_LINE(370)
								::zpp_nape::util::ZPP_ContactList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(370)
								(tmp18->user_length)++;
							}
							HX_STACK_LINE(370)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
			HX_STACK_LINE(370)
			::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(370)
			tmp6 = tmp10->user_length;
		}
		HX_STACK_LINE(370)
		int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(370)
		int tmp8 = index;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(370)
		int tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(370)
		index = tmp9;
	}
	HX_STACK_LINE(371)
	bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(371)
	if ((tmp6)){
		HX_STACK_LINE(372)
		int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(372)
		::zpp_nape::util::ZPP_ContactList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(372)
		int tmp9 = tmp8->at_index;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(372)
		bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(372)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(372)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(372)
		if ((tmp11)){
			HX_STACK_LINE(372)
			::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(372)
			::zpp_nape::util::ZPP_ContactList tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(372)
			::zpp_nape::dynamics::ZPP_Contact tmp15 = tmp14->at_ite;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(372)
			tmp12 = (tmp15 == null());
		}
		else{
			HX_STACK_LINE(372)
			tmp12 = true;
		}
		HX_STACK_LINE(372)
		if ((tmp12)){
			HX_STACK_LINE(373)
			::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(373)
			tmp13->at_index = index;
			HX_STACK_LINE(374)
			::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(374)
			int tmp15 = index;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(374)
			::zpp_nape::dynamics::ZPP_Contact tmp16 = tmp14->inner->iterator_at(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(374)
			::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(374)
			tmp17->at_ite = tmp16;
		}
		else{
			HX_STACK_LINE(377)
			while((true)){
				HX_STACK_LINE(377)
				::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(377)
				int tmp14 = tmp13->at_index;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(377)
				int tmp15 = index;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(377)
				bool tmp16 = (tmp14 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(377)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(377)
				if ((tmp17)){
					HX_STACK_LINE(377)
					break;
				}
				HX_STACK_LINE(378)
				::zpp_nape::util::ZPP_ContactList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(378)
				(tmp18->at_index)++;
				HX_STACK_LINE(379)
				::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(379)
				::zpp_nape::dynamics::ZPP_Contact tmp20 = tmp19->at_ite->next;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(379)
				::zpp_nape::util::ZPP_ContactList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(379)
				tmp21->at_ite = tmp20;
			}
		}
	}
	else{
		HX_STACK_LINE(384)
		int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(384)
		::zpp_nape::util::ZPP_ContactList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(384)
		int tmp9 = tmp8->at_index;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(384)
		bool tmp10 = (tmp7 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(384)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(384)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(384)
		if ((tmp11)){
			HX_STACK_LINE(384)
			::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(384)
			::zpp_nape::util::ZPP_ContactList tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(384)
			::zpp_nape::dynamics::ZPP_Contact tmp15 = tmp14->at_ite;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(384)
			tmp12 = (tmp15 == null());
		}
		else{
			HX_STACK_LINE(384)
			tmp12 = true;
		}
		HX_STACK_LINE(384)
		if ((tmp12)){
			HX_STACK_LINE(385)
			::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(385)
			tmp13->at_index = (int)0;
			HX_STACK_LINE(386)
			::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(386)
			::zpp_nape::dynamics::ZPP_Contact tmp15 = tmp14->inner->next;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(386)
			::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(386)
			tmp16->at_ite = tmp15;
			HX_STACK_LINE(387)
			while((true)){
				HX_STACK_LINE(388)
				::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(388)
				::zpp_nape::dynamics::ZPP_Contact x = tmp17->at_ite;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(389)
				bool tmp18 = x->active;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(389)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(389)
				if ((tmp18)){
					HX_STACK_LINE(389)
					tmp19 = x->arbiter->active;
				}
				else{
					HX_STACK_LINE(389)
					tmp19 = false;
				}
				HX_STACK_LINE(389)
				if ((tmp19)){
					HX_STACK_LINE(389)
					break;
				}
				HX_STACK_LINE(390)
				::zpp_nape::util::ZPP_ContactList tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(390)
				::zpp_nape::dynamics::ZPP_Contact tmp21 = tmp20->at_ite->next;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(390)
				::zpp_nape::util::ZPP_ContactList tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(390)
				tmp22->at_ite = tmp21;
			}
		}
		HX_STACK_LINE(393)
		while((true)){
			HX_STACK_LINE(393)
			::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(393)
			int tmp14 = tmp13->at_index;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(393)
			int tmp15 = index;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(393)
			bool tmp16 = (tmp14 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(393)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(393)
			if ((tmp17)){
				HX_STACK_LINE(393)
				break;
			}
			HX_STACK_LINE(394)
			::zpp_nape::util::ZPP_ContactList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(394)
			(tmp18->at_index)++;
			HX_STACK_LINE(395)
			::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(395)
			::zpp_nape::dynamics::ZPP_Contact tmp20 = tmp19->at_ite->next;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(395)
			::zpp_nape::util::ZPP_ContactList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(395)
			tmp21->at_ite = tmp20;
			HX_STACK_LINE(396)
			while((true)){
				HX_STACK_LINE(397)
				::zpp_nape::util::ZPP_ContactList tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(397)
				::zpp_nape::dynamics::ZPP_Contact x = tmp22->at_ite;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(398)
				bool tmp23 = x->active;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(398)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(398)
				if ((tmp23)){
					HX_STACK_LINE(398)
					tmp24 = x->arbiter->active;
				}
				else{
					HX_STACK_LINE(398)
					tmp24 = false;
				}
				HX_STACK_LINE(398)
				if ((tmp24)){
					HX_STACK_LINE(398)
					break;
				}
				HX_STACK_LINE(399)
				::zpp_nape::util::ZPP_ContactList tmp25 = this->zpp_inner;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(399)
				::zpp_nape::dynamics::ZPP_Contact tmp26 = tmp25->at_ite->next;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(399)
				::zpp_nape::util::ZPP_ContactList tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(399)
				tmp27->at_ite = tmp26;
			}
		}
	}
	HX_STACK_LINE(403)
	::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(403)
	::nape::dynamics::Contact tmp8 = tmp7->at_ite->wrapper();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(403)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,at,return )

bool ContactList_obj::push( ::nape::dynamics::Contact obj){
	HX_STACK_FRAME("nape.dynamics.ContactList","push",0xf148b7de,"nape.dynamics.ContactList.push","nape/dynamics/ContactList.hx",416,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(418)
	::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(418)
	bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(418)
	if ((tmp1)){
		HX_STACK_LINE(418)
		::String tmp2 = HX_HCSTRING("Error: Contact","\xf2","\xbf","\x0d","\x29");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(418)
		::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(418)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(420)
	::zpp_nape::util::ZPP_ContactList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(420)
	tmp2->modify_test();
	HX_STACK_LINE(421)
	::zpp_nape::util::ZPP_ContactList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(421)
	tmp3->valmod();
	HX_STACK_LINE(424)
	::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(424)
	Dynamic tmp5 = tmp4->adder;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(424)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(424)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(424)
	if ((tmp6)){
		HX_STACK_LINE(424)
		::zpp_nape::util::ZPP_ContactList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(424)
		::nape::dynamics::Contact tmp9 = obj;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(424)
		tmp7 = tmp8->adder(tmp9);
	}
	else{
		HX_STACK_LINE(424)
		tmp7 = true;
	}
	HX_STACK_LINE(424)
	bool cont = tmp7;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(425)
	bool tmp8 = cont;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(425)
	if ((tmp8)){
		HX_STACK_LINE(426)
		::zpp_nape::util::ZPP_ContactList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(426)
		bool tmp10 = tmp9->reverse_flag;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(426)
		if ((tmp10)){
			HX_STACK_LINE(426)
			::zpp_nape::util::ZPP_ContactList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(426)
			::zpp_nape::dynamics::ZPP_Contact tmp12 = obj->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(426)
			tmp11->inner->add(tmp12);
		}
		else{
			HX_STACK_LINE(428)
			::zpp_nape::util::ZPP_ContactList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(428)
			::zpp_nape::dynamics::ZPP_Contact tmp12 = tmp11->push_ite;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(428)
			bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(428)
			if ((tmp13)){
				HX_STACK_LINE(428)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(428)
					{
						HX_STACK_LINE(428)
						::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(428)
						tmp16->valmod();
						HX_STACK_LINE(428)
						::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(428)
						bool tmp18 = tmp17->zip_length;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(428)
						if ((tmp18)){
							HX_STACK_LINE(428)
							::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(428)
							tmp19->zip_length = false;
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								::zpp_nape::util::ZPP_ContactList tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(428)
								tmp20->user_length = (int)0;
								HX_STACK_LINE(428)
								{
									HX_STACK_LINE(428)
									::zpp_nape::util::ZPP_ContactList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(428)
									::zpp_nape::dynamics::ZPP_Contact tmp22 = tmp21->inner->next;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(428)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp22;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(428)
									while((true)){
										HX_STACK_LINE(428)
										bool tmp23 = (cx_ite != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(428)
										bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(428)
										if ((tmp24)){
											HX_STACK_LINE(428)
											break;
										}
										HX_STACK_LINE(428)
										::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(428)
										bool tmp25 = i->active;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(428)
										bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(428)
										if ((tmp25)){
											HX_STACK_LINE(428)
											tmp26 = i->arbiter->active;
										}
										else{
											HX_STACK_LINE(428)
											tmp26 = false;
										}
										HX_STACK_LINE(428)
										if ((tmp26)){
											HX_STACK_LINE(428)
											::zpp_nape::util::ZPP_ContactList tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(428)
											(tmp27->user_length)++;
										}
										HX_STACK_LINE(428)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(428)
						::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(428)
						tmp15 = tmp19->user_length;
					}
					HX_STACK_LINE(428)
					tmp14 = (tmp15 == (int)0);
				}
				HX_STACK_LINE(428)
				::zpp_nape::dynamics::ZPP_Contact tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(428)
				if ((tmp14)){
					HX_STACK_LINE(428)
					tmp15 = null();
				}
				else{
					HX_STACK_LINE(428)
					::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(428)
					int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(428)
					{
						HX_STACK_LINE(428)
						::zpp_nape::util::ZPP_ContactList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(428)
						tmp18->valmod();
						HX_STACK_LINE(428)
						::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(428)
						bool tmp20 = tmp19->zip_length;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(428)
						if ((tmp20)){
							HX_STACK_LINE(428)
							::zpp_nape::util::ZPP_ContactList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(428)
							tmp21->zip_length = false;
							HX_STACK_LINE(428)
							{
								HX_STACK_LINE(428)
								::zpp_nape::util::ZPP_ContactList tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(428)
								tmp22->user_length = (int)0;
								HX_STACK_LINE(428)
								{
									HX_STACK_LINE(428)
									::zpp_nape::util::ZPP_ContactList tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(428)
									::zpp_nape::dynamics::ZPP_Contact tmp24 = tmp23->inner->next;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(428)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp24;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(428)
									while((true)){
										HX_STACK_LINE(428)
										bool tmp25 = (cx_ite != null());		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(428)
										bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(428)
										if ((tmp26)){
											HX_STACK_LINE(428)
											break;
										}
										HX_STACK_LINE(428)
										::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(428)
										bool tmp27 = i->active;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(428)
										bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(428)
										if ((tmp27)){
											HX_STACK_LINE(428)
											tmp28 = i->arbiter->active;
										}
										else{
											HX_STACK_LINE(428)
											tmp28 = false;
										}
										HX_STACK_LINE(428)
										if ((tmp28)){
											HX_STACK_LINE(428)
											::zpp_nape::util::ZPP_ContactList tmp29 = this->zpp_inner;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(428)
											(tmp29->user_length)++;
										}
										HX_STACK_LINE(428)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(428)
						::zpp_nape::util::ZPP_ContactList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(428)
						tmp17 = tmp21->user_length;
					}
					HX_STACK_LINE(428)
					int tmp18 = (tmp17 - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(428)
					tmp15 = tmp16->inner->iterator_at(tmp18);
				}
				HX_STACK_LINE(428)
				::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(428)
				tmp16->push_ite = tmp15;
			}
			HX_STACK_LINE(429)
			::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZPP_ContactList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(429)
			::zpp_nape::dynamics::ZPP_Contact tmp16 = tmp15->push_ite;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(429)
			::zpp_nape::dynamics::ZPP_Contact tmp17 = obj->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(429)
			::zpp_nape::dynamics::ZPP_Contact tmp18 = tmp14->inner->insert(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(429)
			::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(429)
			tmp19->push_ite = tmp18;
		}
		HX_STACK_LINE(431)
		::zpp_nape::util::ZPP_ContactList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(431)
		tmp11->invalidate();
		HX_STACK_LINE(432)
		::zpp_nape::util::ZPP_ContactList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(432)
		Dynamic tmp13 = tmp12->post_adder;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(432)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(432)
		if ((tmp14)){
			HX_STACK_LINE(432)
			::zpp_nape::util::ZPP_ContactList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(432)
			::nape::dynamics::Contact tmp16 = obj;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(432)
			tmp15->post_adder(tmp16);
		}
	}
	HX_STACK_LINE(434)
	bool tmp9 = cont;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(434)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,push,return )

bool ContactList_obj::unshift( ::nape::dynamics::Contact obj){
	HX_STACK_FRAME("nape.dynamics.ContactList","unshift",0x983cd805,"nape.dynamics.ContactList.unshift","nape/dynamics/ContactList.hx",447,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(449)
	::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(449)
	bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(449)
	if ((tmp1)){
		HX_STACK_LINE(449)
		::String tmp2 = HX_HCSTRING("Error: Contact","\xf2","\xbf","\x0d","\x29");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(449)
		::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(449)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(451)
	::zpp_nape::util::ZPP_ContactList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(451)
	tmp2->modify_test();
	HX_STACK_LINE(452)
	::zpp_nape::util::ZPP_ContactList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(452)
	tmp3->valmod();
	HX_STACK_LINE(455)
	::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(455)
	Dynamic tmp5 = tmp4->adder;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(455)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(455)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(455)
	if ((tmp6)){
		HX_STACK_LINE(455)
		::zpp_nape::util::ZPP_ContactList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(455)
		::nape::dynamics::Contact tmp9 = obj;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(455)
		tmp7 = tmp8->adder(tmp9);
	}
	else{
		HX_STACK_LINE(455)
		tmp7 = true;
	}
	HX_STACK_LINE(455)
	bool cont = tmp7;		HX_STACK_VAR(cont,"cont");
	HX_STACK_LINE(456)
	bool tmp8 = cont;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(456)
	if ((tmp8)){
		HX_STACK_LINE(457)
		::zpp_nape::util::ZPP_ContactList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(457)
		bool tmp10 = tmp9->reverse_flag;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(457)
		if ((tmp10)){
			HX_STACK_LINE(458)
			::zpp_nape::util::ZPP_ContactList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(458)
			::zpp_nape::dynamics::ZPP_Contact tmp12 = tmp11->push_ite;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(458)
			bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(458)
			if ((tmp13)){
				HX_STACK_LINE(458)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(458)
				{
					HX_STACK_LINE(458)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(458)
					{
						HX_STACK_LINE(458)
						::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(458)
						tmp16->valmod();
						HX_STACK_LINE(458)
						::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(458)
						bool tmp18 = tmp17->zip_length;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(458)
						if ((tmp18)){
							HX_STACK_LINE(458)
							::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(458)
							tmp19->zip_length = false;
							HX_STACK_LINE(458)
							{
								HX_STACK_LINE(458)
								::zpp_nape::util::ZPP_ContactList tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(458)
								tmp20->user_length = (int)0;
								HX_STACK_LINE(458)
								{
									HX_STACK_LINE(458)
									::zpp_nape::util::ZPP_ContactList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(458)
									::zpp_nape::dynamics::ZPP_Contact tmp22 = tmp21->inner->next;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(458)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp22;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(458)
									while((true)){
										HX_STACK_LINE(458)
										bool tmp23 = (cx_ite != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(458)
										bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(458)
										if ((tmp24)){
											HX_STACK_LINE(458)
											break;
										}
										HX_STACK_LINE(458)
										::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(458)
										bool tmp25 = i->active;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(458)
										bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(458)
										if ((tmp25)){
											HX_STACK_LINE(458)
											tmp26 = i->arbiter->active;
										}
										else{
											HX_STACK_LINE(458)
											tmp26 = false;
										}
										HX_STACK_LINE(458)
										if ((tmp26)){
											HX_STACK_LINE(458)
											::zpp_nape::util::ZPP_ContactList tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(458)
											(tmp27->user_length)++;
										}
										HX_STACK_LINE(458)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(458)
						::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(458)
						tmp15 = tmp19->user_length;
					}
					HX_STACK_LINE(458)
					tmp14 = (tmp15 == (int)0);
				}
				HX_STACK_LINE(458)
				::zpp_nape::dynamics::ZPP_Contact tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(458)
				if ((tmp14)){
					HX_STACK_LINE(458)
					tmp15 = null();
				}
				else{
					HX_STACK_LINE(458)
					::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(458)
					int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(458)
					{
						HX_STACK_LINE(458)
						::zpp_nape::util::ZPP_ContactList tmp18 = this->zpp_inner;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(458)
						tmp18->valmod();
						HX_STACK_LINE(458)
						::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(458)
						bool tmp20 = tmp19->zip_length;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(458)
						if ((tmp20)){
							HX_STACK_LINE(458)
							::zpp_nape::util::ZPP_ContactList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(458)
							tmp21->zip_length = false;
							HX_STACK_LINE(458)
							{
								HX_STACK_LINE(458)
								::zpp_nape::util::ZPP_ContactList tmp22 = this->zpp_inner;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(458)
								tmp22->user_length = (int)0;
								HX_STACK_LINE(458)
								{
									HX_STACK_LINE(458)
									::zpp_nape::util::ZPP_ContactList tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(458)
									::zpp_nape::dynamics::ZPP_Contact tmp24 = tmp23->inner->next;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(458)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp24;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(458)
									while((true)){
										HX_STACK_LINE(458)
										bool tmp25 = (cx_ite != null());		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(458)
										bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(458)
										if ((tmp26)){
											HX_STACK_LINE(458)
											break;
										}
										HX_STACK_LINE(458)
										::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(458)
										bool tmp27 = i->active;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(458)
										bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(458)
										if ((tmp27)){
											HX_STACK_LINE(458)
											tmp28 = i->arbiter->active;
										}
										else{
											HX_STACK_LINE(458)
											tmp28 = false;
										}
										HX_STACK_LINE(458)
										if ((tmp28)){
											HX_STACK_LINE(458)
											::zpp_nape::util::ZPP_ContactList tmp29 = this->zpp_inner;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(458)
											(tmp29->user_length)++;
										}
										HX_STACK_LINE(458)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(458)
						::zpp_nape::util::ZPP_ContactList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(458)
						tmp17 = tmp21->user_length;
					}
					HX_STACK_LINE(458)
					int tmp18 = (tmp17 - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(458)
					tmp15 = tmp16->inner->iterator_at(tmp18);
				}
				HX_STACK_LINE(458)
				::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(458)
				tmp16->push_ite = tmp15;
			}
			HX_STACK_LINE(459)
			::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(459)
			::zpp_nape::util::ZPP_ContactList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(459)
			::zpp_nape::dynamics::ZPP_Contact tmp16 = tmp15->push_ite;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(459)
			::zpp_nape::dynamics::ZPP_Contact tmp17 = obj->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(459)
			::zpp_nape::dynamics::ZPP_Contact tmp18 = tmp14->inner->insert(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(459)
			::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(459)
			tmp19->push_ite = tmp18;
		}
		else{
			HX_STACK_LINE(461)
			::zpp_nape::util::ZPP_ContactList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(461)
			::zpp_nape::dynamics::ZPP_Contact tmp12 = obj->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(461)
			tmp11->inner->add(tmp12);
		}
		HX_STACK_LINE(462)
		::zpp_nape::util::ZPP_ContactList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(462)
		tmp11->invalidate();
		HX_STACK_LINE(463)
		::zpp_nape::util::ZPP_ContactList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(463)
		Dynamic tmp13 = tmp12->post_adder;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(463)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(463)
		if ((tmp14)){
			HX_STACK_LINE(463)
			::zpp_nape::util::ZPP_ContactList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(463)
			::nape::dynamics::Contact tmp16 = obj;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(463)
			tmp15->post_adder(tmp16);
		}
	}
	HX_STACK_LINE(465)
	bool tmp9 = cont;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(465)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,unshift,return )

::nape::dynamics::Contact ContactList_obj::pop( ){
	HX_STACK_FRAME("nape.dynamics.ContactList","pop",0x4bb3640d,"nape.dynamics.ContactList.pop","nape/dynamics/ContactList.hx",478,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(480)
	::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(480)
	bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(480)
	if ((tmp1)){
		HX_STACK_LINE(480)
		::String tmp2 = HX_HCSTRING("Error: Contact","\xf2","\xbf","\x0d","\x29");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(480)
		::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(480)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(482)
	::zpp_nape::util::ZPP_ContactList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(482)
	tmp2->modify_test();
	HX_STACK_LINE(484)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(484)
	{
		HX_STACK_LINE(484)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(484)
		{
			HX_STACK_LINE(484)
			::zpp_nape::util::ZPP_ContactList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(484)
			tmp5->valmod();
			HX_STACK_LINE(484)
			::zpp_nape::util::ZPP_ContactList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(484)
			bool tmp7 = tmp6->zip_length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(484)
			if ((tmp7)){
				HX_STACK_LINE(484)
				::zpp_nape::util::ZPP_ContactList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(484)
				tmp8->zip_length = false;
				HX_STACK_LINE(484)
				{
					HX_STACK_LINE(484)
					::zpp_nape::util::ZPP_ContactList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(484)
					tmp9->user_length = (int)0;
					HX_STACK_LINE(484)
					{
						HX_STACK_LINE(484)
						::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(484)
						::zpp_nape::dynamics::ZPP_Contact tmp11 = tmp10->inner->next;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(484)
						::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp11;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(484)
						while((true)){
							HX_STACK_LINE(484)
							bool tmp12 = (cx_ite != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(484)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(484)
							if ((tmp13)){
								HX_STACK_LINE(484)
								break;
							}
							HX_STACK_LINE(484)
							::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(484)
							bool tmp14 = i->active;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(484)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(484)
							if ((tmp14)){
								HX_STACK_LINE(484)
								tmp15 = i->arbiter->active;
							}
							else{
								HX_STACK_LINE(484)
								tmp15 = false;
							}
							HX_STACK_LINE(484)
							if ((tmp15)){
								HX_STACK_LINE(484)
								::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(484)
								(tmp16->user_length)++;
							}
							HX_STACK_LINE(484)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
			HX_STACK_LINE(484)
			::zpp_nape::util::ZPP_ContactList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(484)
			tmp4 = tmp8->user_length;
		}
		HX_STACK_LINE(484)
		tmp3 = (tmp4 == (int)0);
	}
	HX_STACK_LINE(484)
	if ((tmp3)){
		HX_STACK_LINE(484)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot remove from empty list","\x3a","\x7e","\x61","\x8d"));
	}
	HX_STACK_LINE(486)
	::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(486)
	tmp4->valmod();
	HX_STACK_LINE(489)
	::zpp_nape::dynamics::ZPP_Contact ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(490)
	::zpp_nape::util::ZPP_ContactList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(490)
	bool tmp6 = tmp5->reverse_flag;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(490)
	if ((tmp6)){
		HX_STACK_LINE(491)
		::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(491)
		::zpp_nape::dynamics::ZPP_Contact tmp8 = tmp7->inner->next;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(491)
		ret = tmp8;
		HX_STACK_LINE(492)
		::nape::dynamics::Contact tmp9 = ret->wrapper();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(492)
		::nape::dynamics::Contact retx = tmp9;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(493)
		::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(493)
		Dynamic tmp11 = tmp10->subber;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(493)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(493)
		if ((tmp12)){
			HX_STACK_LINE(493)
			::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(493)
			::nape::dynamics::Contact tmp14 = retx;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(493)
			tmp13->subber(tmp14);
		}
		HX_STACK_LINE(494)
		::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(494)
		bool tmp14 = tmp13->dontremove;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(494)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(494)
		if ((tmp15)){
			HX_STACK_LINE(494)
			::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(494)
			tmp16->inner->pop();
		}
	}
	else{
		HX_STACK_LINE(497)
		::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(497)
		::zpp_nape::dynamics::ZPP_Contact tmp8 = tmp7->at_ite;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(497)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(497)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(497)
		if ((tmp9)){
			HX_STACK_LINE(497)
			::zpp_nape::util::ZPP_ContactList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(497)
			::zpp_nape::util::ZPP_ContactList tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(497)
			::zpp_nape::dynamics::ZPP_Contact tmp13 = tmp12->at_ite->next;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(497)
			::zpp_nape::dynamics::ZPP_Contact tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(497)
			tmp10 = (tmp14 == null());
		}
		else{
			HX_STACK_LINE(497)
			tmp10 = false;
		}
		HX_STACK_LINE(497)
		if ((tmp10)){
			HX_STACK_LINE(497)
			::zpp_nape::util::ZPP_ContactList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(497)
			tmp11->at_ite = null();
		}
		HX_STACK_LINE(498)
		int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			::zpp_nape::util::ZPP_ContactList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(498)
			tmp12->valmod();
			HX_STACK_LINE(498)
			::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(498)
			bool tmp14 = tmp13->zip_length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(498)
			if ((tmp14)){
				HX_STACK_LINE(498)
				::zpp_nape::util::ZPP_ContactList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(498)
				tmp15->zip_length = false;
				HX_STACK_LINE(498)
				{
					HX_STACK_LINE(498)
					::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(498)
					tmp16->user_length = (int)0;
					HX_STACK_LINE(498)
					{
						HX_STACK_LINE(498)
						::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(498)
						::zpp_nape::dynamics::ZPP_Contact tmp18 = tmp17->inner->next;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(498)
						::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp18;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(498)
						while((true)){
							HX_STACK_LINE(498)
							bool tmp19 = (cx_ite != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(498)
							bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(498)
							if ((tmp20)){
								HX_STACK_LINE(498)
								break;
							}
							HX_STACK_LINE(498)
							::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(498)
							bool tmp21 = i->active;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(498)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(498)
							if ((tmp21)){
								HX_STACK_LINE(498)
								tmp22 = i->arbiter->active;
							}
							else{
								HX_STACK_LINE(498)
								tmp22 = false;
							}
							HX_STACK_LINE(498)
							if ((tmp22)){
								HX_STACK_LINE(498)
								::zpp_nape::util::ZPP_ContactList tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(498)
								(tmp23->user_length)++;
							}
							HX_STACK_LINE(498)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
			HX_STACK_LINE(498)
			::zpp_nape::util::ZPP_ContactList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(498)
			tmp11 = tmp15->user_length;
		}
		HX_STACK_LINE(498)
		bool tmp12 = (tmp11 == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(498)
		::zpp_nape::dynamics::ZPP_Contact tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(498)
		if ((tmp12)){
			HX_STACK_LINE(498)
			tmp13 = null();
		}
		else{
			HX_STACK_LINE(498)
			::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(498)
			int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(498)
				tmp16->valmod();
				HX_STACK_LINE(498)
				::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(498)
				bool tmp18 = tmp17->zip_length;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(498)
				if ((tmp18)){
					HX_STACK_LINE(498)
					::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(498)
					tmp19->zip_length = false;
					HX_STACK_LINE(498)
					{
						HX_STACK_LINE(498)
						::zpp_nape::util::ZPP_ContactList tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(498)
						tmp20->user_length = (int)0;
						HX_STACK_LINE(498)
						{
							HX_STACK_LINE(498)
							::zpp_nape::util::ZPP_ContactList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(498)
							::zpp_nape::dynamics::ZPP_Contact tmp22 = tmp21->inner->next;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(498)
							::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp22;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(498)
							while((true)){
								HX_STACK_LINE(498)
								bool tmp23 = (cx_ite != null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(498)
								bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(498)
								if ((tmp24)){
									HX_STACK_LINE(498)
									break;
								}
								HX_STACK_LINE(498)
								::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(498)
								bool tmp25 = i->active;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(498)
								bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(498)
								if ((tmp25)){
									HX_STACK_LINE(498)
									tmp26 = i->arbiter->active;
								}
								else{
									HX_STACK_LINE(498)
									tmp26 = false;
								}
								HX_STACK_LINE(498)
								if ((tmp26)){
									HX_STACK_LINE(498)
									::zpp_nape::util::ZPP_ContactList tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(498)
									(tmp27->user_length)++;
								}
								HX_STACK_LINE(498)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
				HX_STACK_LINE(498)
				::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(498)
				tmp15 = tmp19->user_length;
			}
			HX_STACK_LINE(498)
			int tmp16 = (tmp15 - (int)2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(498)
			tmp13 = tmp14->inner->iterator_at(tmp16);
		}
		HX_STACK_LINE(498)
		::zpp_nape::dynamics::ZPP_Contact ite = tmp13;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(499)
		bool tmp14 = (ite == null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(499)
		::zpp_nape::dynamics::ZPP_Contact tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(499)
		if ((tmp14)){
			HX_STACK_LINE(499)
			::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(499)
			tmp15 = tmp16->inner->next;
		}
		else{
			HX_STACK_LINE(499)
			tmp15 = ite->next;
		}
		HX_STACK_LINE(499)
		ret = tmp15;
		HX_STACK_LINE(500)
		::nape::dynamics::Contact tmp16 = ret->wrapper();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(500)
		::nape::dynamics::Contact retx = tmp16;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(501)
		::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(501)
		Dynamic tmp18 = tmp17->subber;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(501)
		bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(501)
		if ((tmp19)){
			HX_STACK_LINE(501)
			::zpp_nape::util::ZPP_ContactList tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(501)
			::nape::dynamics::Contact tmp21 = retx;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(501)
			tmp20->subber(tmp21);
		}
		HX_STACK_LINE(502)
		::zpp_nape::util::ZPP_ContactList tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(502)
		bool tmp21 = tmp20->dontremove;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(502)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(502)
		if ((tmp22)){
			HX_STACK_LINE(502)
			::zpp_nape::util::ZPP_ContactList tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(502)
			::zpp_nape::dynamics::ZPP_Contact tmp24 = ite;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(502)
			tmp23->inner->erase(tmp24);
		}
	}
	HX_STACK_LINE(504)
	::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(504)
	tmp7->invalidate();
	HX_STACK_LINE(505)
	::nape::dynamics::Contact tmp8 = ret->wrapper();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(505)
	::nape::dynamics::Contact retx = tmp8;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(506)
	::nape::dynamics::Contact tmp9 = retx;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(506)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,pop,return )

::nape::dynamics::Contact ContactList_obj::shift( ){
	HX_STACK_FRAME("nape.dynamics.ContactList","shift",0xdfec89fe,"nape.dynamics.ContactList.shift","nape/dynamics/ContactList.hx",519,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(521)
	::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(521)
	bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(521)
	if ((tmp1)){
		HX_STACK_LINE(521)
		::String tmp2 = HX_HCSTRING("Error: Contact","\xf2","\xbf","\x0d","\x29");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(521)
		::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(521)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(523)
	::zpp_nape::util::ZPP_ContactList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(523)
	tmp2->modify_test();
	HX_STACK_LINE(525)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(525)
	{
		HX_STACK_LINE(525)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(525)
		{
			HX_STACK_LINE(525)
			::zpp_nape::util::ZPP_ContactList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(525)
			tmp5->valmod();
			HX_STACK_LINE(525)
			::zpp_nape::util::ZPP_ContactList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(525)
			bool tmp7 = tmp6->zip_length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(525)
			if ((tmp7)){
				HX_STACK_LINE(525)
				::zpp_nape::util::ZPP_ContactList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(525)
				tmp8->zip_length = false;
				HX_STACK_LINE(525)
				{
					HX_STACK_LINE(525)
					::zpp_nape::util::ZPP_ContactList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(525)
					tmp9->user_length = (int)0;
					HX_STACK_LINE(525)
					{
						HX_STACK_LINE(525)
						::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(525)
						::zpp_nape::dynamics::ZPP_Contact tmp11 = tmp10->inner->next;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(525)
						::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp11;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(525)
						while((true)){
							HX_STACK_LINE(525)
							bool tmp12 = (cx_ite != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(525)
							bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(525)
							if ((tmp13)){
								HX_STACK_LINE(525)
								break;
							}
							HX_STACK_LINE(525)
							::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(525)
							bool tmp14 = i->active;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(525)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(525)
							if ((tmp14)){
								HX_STACK_LINE(525)
								tmp15 = i->arbiter->active;
							}
							else{
								HX_STACK_LINE(525)
								tmp15 = false;
							}
							HX_STACK_LINE(525)
							if ((tmp15)){
								HX_STACK_LINE(525)
								::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(525)
								(tmp16->user_length)++;
							}
							HX_STACK_LINE(525)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
			HX_STACK_LINE(525)
			::zpp_nape::util::ZPP_ContactList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(525)
			tmp4 = tmp8->user_length;
		}
		HX_STACK_LINE(525)
		tmp3 = (tmp4 == (int)0);
	}
	HX_STACK_LINE(525)
	if ((tmp3)){
		HX_STACK_LINE(525)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot remove from empty list","\x3a","\x7e","\x61","\x8d"));
	}
	HX_STACK_LINE(527)
	::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(527)
	tmp4->valmod();
	HX_STACK_LINE(530)
	::zpp_nape::dynamics::ZPP_Contact ret = null();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(531)
	::zpp_nape::util::ZPP_ContactList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(531)
	bool tmp6 = tmp5->reverse_flag;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(531)
	if ((tmp6)){
		HX_STACK_LINE(532)
		::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(532)
		::zpp_nape::dynamics::ZPP_Contact tmp8 = tmp7->at_ite;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(532)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(532)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(532)
		if ((tmp9)){
			HX_STACK_LINE(532)
			::zpp_nape::util::ZPP_ContactList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(532)
			::zpp_nape::util::ZPP_ContactList tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(532)
			::zpp_nape::dynamics::ZPP_Contact tmp13 = tmp12->at_ite->next;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(532)
			::zpp_nape::dynamics::ZPP_Contact tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(532)
			tmp10 = (tmp14 == null());
		}
		else{
			HX_STACK_LINE(532)
			tmp10 = false;
		}
		HX_STACK_LINE(532)
		if ((tmp10)){
			HX_STACK_LINE(532)
			::zpp_nape::util::ZPP_ContactList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(532)
			tmp11->at_ite = null();
		}
		HX_STACK_LINE(533)
		int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(533)
		{
			HX_STACK_LINE(533)
			::zpp_nape::util::ZPP_ContactList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(533)
			tmp12->valmod();
			HX_STACK_LINE(533)
			::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(533)
			bool tmp14 = tmp13->zip_length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(533)
			if ((tmp14)){
				HX_STACK_LINE(533)
				::zpp_nape::util::ZPP_ContactList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(533)
				tmp15->zip_length = false;
				HX_STACK_LINE(533)
				{
					HX_STACK_LINE(533)
					::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(533)
					tmp16->user_length = (int)0;
					HX_STACK_LINE(533)
					{
						HX_STACK_LINE(533)
						::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(533)
						::zpp_nape::dynamics::ZPP_Contact tmp18 = tmp17->inner->next;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(533)
						::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp18;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(533)
						while((true)){
							HX_STACK_LINE(533)
							bool tmp19 = (cx_ite != null());		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(533)
							bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(533)
							if ((tmp20)){
								HX_STACK_LINE(533)
								break;
							}
							HX_STACK_LINE(533)
							::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(533)
							bool tmp21 = i->active;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(533)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(533)
							if ((tmp21)){
								HX_STACK_LINE(533)
								tmp22 = i->arbiter->active;
							}
							else{
								HX_STACK_LINE(533)
								tmp22 = false;
							}
							HX_STACK_LINE(533)
							if ((tmp22)){
								HX_STACK_LINE(533)
								::zpp_nape::util::ZPP_ContactList tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(533)
								(tmp23->user_length)++;
							}
							HX_STACK_LINE(533)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
			HX_STACK_LINE(533)
			::zpp_nape::util::ZPP_ContactList tmp15 = this->zpp_inner;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(533)
			tmp11 = tmp15->user_length;
		}
		HX_STACK_LINE(533)
		bool tmp12 = (tmp11 == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(533)
		::zpp_nape::dynamics::ZPP_Contact tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(533)
		if ((tmp12)){
			HX_STACK_LINE(533)
			tmp13 = null();
		}
		else{
			HX_STACK_LINE(533)
			::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(533)
			int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(533)
			{
				HX_STACK_LINE(533)
				::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(533)
				tmp16->valmod();
				HX_STACK_LINE(533)
				::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(533)
				bool tmp18 = tmp17->zip_length;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(533)
				if ((tmp18)){
					HX_STACK_LINE(533)
					::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(533)
					tmp19->zip_length = false;
					HX_STACK_LINE(533)
					{
						HX_STACK_LINE(533)
						::zpp_nape::util::ZPP_ContactList tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(533)
						tmp20->user_length = (int)0;
						HX_STACK_LINE(533)
						{
							HX_STACK_LINE(533)
							::zpp_nape::util::ZPP_ContactList tmp21 = this->zpp_inner;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(533)
							::zpp_nape::dynamics::ZPP_Contact tmp22 = tmp21->inner->next;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(533)
							::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp22;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(533)
							while((true)){
								HX_STACK_LINE(533)
								bool tmp23 = (cx_ite != null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(533)
								bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(533)
								if ((tmp24)){
									HX_STACK_LINE(533)
									break;
								}
								HX_STACK_LINE(533)
								::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(533)
								bool tmp25 = i->active;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(533)
								bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(533)
								if ((tmp25)){
									HX_STACK_LINE(533)
									tmp26 = i->arbiter->active;
								}
								else{
									HX_STACK_LINE(533)
									tmp26 = false;
								}
								HX_STACK_LINE(533)
								if ((tmp26)){
									HX_STACK_LINE(533)
									::zpp_nape::util::ZPP_ContactList tmp27 = this->zpp_inner;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(533)
									(tmp27->user_length)++;
								}
								HX_STACK_LINE(533)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
				HX_STACK_LINE(533)
				::zpp_nape::util::ZPP_ContactList tmp19 = this->zpp_inner;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(533)
				tmp15 = tmp19->user_length;
			}
			HX_STACK_LINE(533)
			int tmp16 = (tmp15 - (int)2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(533)
			tmp13 = tmp14->inner->iterator_at(tmp16);
		}
		HX_STACK_LINE(533)
		::zpp_nape::dynamics::ZPP_Contact ite = tmp13;		HX_STACK_VAR(ite,"ite");
		HX_STACK_LINE(534)
		bool tmp14 = (ite == null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(534)
		::zpp_nape::dynamics::ZPP_Contact tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(534)
		if ((tmp14)){
			HX_STACK_LINE(534)
			::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(534)
			tmp15 = tmp16->inner->next;
		}
		else{
			HX_STACK_LINE(534)
			tmp15 = ite->next;
		}
		HX_STACK_LINE(534)
		ret = tmp15;
		HX_STACK_LINE(535)
		::nape::dynamics::Contact tmp16 = ret->wrapper();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(535)
		::nape::dynamics::Contact retx = tmp16;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(536)
		::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(536)
		Dynamic tmp18 = tmp17->subber;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(536)
		bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(536)
		if ((tmp19)){
			HX_STACK_LINE(536)
			::zpp_nape::util::ZPP_ContactList tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(536)
			::nape::dynamics::Contact tmp21 = retx;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(536)
			tmp20->subber(tmp21);
		}
		HX_STACK_LINE(537)
		::zpp_nape::util::ZPP_ContactList tmp20 = this->zpp_inner;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(537)
		bool tmp21 = tmp20->dontremove;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(537)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(537)
		if ((tmp22)){
			HX_STACK_LINE(537)
			::zpp_nape::util::ZPP_ContactList tmp23 = this->zpp_inner;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(537)
			::zpp_nape::dynamics::ZPP_Contact tmp24 = ite;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(537)
			tmp23->inner->erase(tmp24);
		}
	}
	else{
		HX_STACK_LINE(540)
		::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(540)
		::zpp_nape::dynamics::ZPP_Contact tmp8 = tmp7->inner->next;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(540)
		ret = tmp8;
		HX_STACK_LINE(541)
		::nape::dynamics::Contact tmp9 = ret->wrapper();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(541)
		::nape::dynamics::Contact retx = tmp9;		HX_STACK_VAR(retx,"retx");
		HX_STACK_LINE(542)
		::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(542)
		Dynamic tmp11 = tmp10->subber;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(542)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(542)
		if ((tmp12)){
			HX_STACK_LINE(542)
			::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(542)
			::nape::dynamics::Contact tmp14 = retx;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(542)
			tmp13->subber(tmp14);
		}
		HX_STACK_LINE(543)
		::zpp_nape::util::ZPP_ContactList tmp13 = this->zpp_inner;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(543)
		bool tmp14 = tmp13->dontremove;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(543)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(543)
		if ((tmp15)){
			HX_STACK_LINE(543)
			::zpp_nape::util::ZPP_ContactList tmp16 = this->zpp_inner;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(543)
			tmp16->inner->pop();
		}
	}
	HX_STACK_LINE(545)
	::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(545)
	tmp7->invalidate();
	HX_STACK_LINE(546)
	::nape::dynamics::Contact tmp8 = ret->wrapper();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(546)
	::nape::dynamics::Contact retx = tmp8;		HX_STACK_VAR(retx,"retx");
	HX_STACK_LINE(547)
	::nape::dynamics::Contact tmp9 = retx;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(547)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,shift,return )

bool ContactList_obj::add( ::nape::dynamics::Contact obj){
	HX_STACK_FRAME("nape.dynamics.ContactList","add",0x4ba7f89d,"nape.dynamics.ContactList.add","nape/dynamics/ContactList.hx",563,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(564)
	::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(564)
	bool tmp1 = tmp->reverse_flag;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(564)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(564)
	if ((tmp1)){
		HX_STACK_LINE(564)
		::nape::dynamics::Contact tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(564)
		tmp2 = this->push(tmp3);
	}
	else{
		HX_STACK_LINE(564)
		::nape::dynamics::Contact tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(564)
		tmp2 = this->unshift(tmp3);
	}
	HX_STACK_LINE(564)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,add,return )

bool ContactList_obj::remove( ::nape::dynamics::Contact obj){
	HX_STACK_FRAME("nape.dynamics.ContactList","remove",0xf128cb48,"nape.dynamics.ContactList.remove","nape/dynamics/ContactList.hx",576,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(578)
	::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(578)
	bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(578)
	if ((tmp1)){
		HX_STACK_LINE(578)
		::String tmp2 = HX_HCSTRING("Error: Contact","\xf2","\xbf","\x0d","\x29");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(578)
		::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(578)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(580)
	::zpp_nape::util::ZPP_ContactList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(580)
	tmp2->modify_test();
	HX_STACK_LINE(581)
	::zpp_nape::util::ZPP_ContactList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(581)
	tmp3->valmod();
	HX_STACK_LINE(584)
	bool ret;		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(585)
	{
		HX_STACK_LINE(586)
		ret = false;
		HX_STACK_LINE(587)
		{
			HX_STACK_LINE(588)
			::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(588)
			::zpp_nape::dynamics::ZPP_Contact tmp5 = tmp4->inner->next;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(588)
			::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp5;		HX_STACK_VAR(cx_ite,"cx_ite");
			HX_STACK_LINE(589)
			while((true)){
				HX_STACK_LINE(589)
				bool tmp6 = (cx_ite != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(589)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(589)
				if ((tmp7)){
					HX_STACK_LINE(589)
					break;
				}
				HX_STACK_LINE(590)
				::zpp_nape::dynamics::ZPP_Contact x = cx_ite;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(591)
				{
					HX_STACK_LINE(592)
					bool tmp8 = (x == obj->zpp_inner);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(592)
					if ((tmp8)){
						HX_STACK_LINE(593)
						ret = true;
						HX_STACK_LINE(594)
						break;
					}
				}
				HX_STACK_LINE(597)
				cx_ite = cx_ite->next;
			}
		}
	}
	HX_STACK_LINE(601)
	bool tmp4 = ret;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(601)
	if ((tmp4)){
		HX_STACK_LINE(602)
		::zpp_nape::util::ZPP_ContactList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(602)
		Dynamic tmp6 = tmp5->subber;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(602)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(602)
		if ((tmp7)){
			HX_STACK_LINE(602)
			::zpp_nape::util::ZPP_ContactList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(602)
			::nape::dynamics::Contact tmp9 = obj;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(602)
			tmp8->subber(tmp9);
		}
		HX_STACK_LINE(603)
		::zpp_nape::util::ZPP_ContactList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(603)
		bool tmp9 = tmp8->dontremove;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(603)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(603)
		if ((tmp10)){
			HX_STACK_LINE(603)
			::zpp_nape::util::ZPP_ContactList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(603)
			::zpp_nape::dynamics::ZPP_Contact tmp12 = obj->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(603)
			tmp11->inner->remove(tmp12);
		}
		HX_STACK_LINE(604)
		::zpp_nape::util::ZPP_ContactList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(604)
		tmp11->invalidate();
	}
	HX_STACK_LINE(606)
	bool tmp5 = ret;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(606)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,remove,return )

Void ContactList_obj::clear( ){
{
		HX_STACK_FRAME("nape.dynamics.ContactList","clear",0xac250f09,"nape.dynamics.ContactList.clear","nape/dynamics/ContactList.hx",614,0xd6cc37f4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(616)
		::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(616)
		bool tmp1 = tmp->immutable;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(616)
		if ((tmp1)){
			HX_STACK_LINE(616)
			::String tmp2 = HX_HCSTRING("Error: Contact","\xf2","\xbf","\x0d","\x29");		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(616)
			::String tmp3 = (tmp2 + HX_HCSTRING("List is immutable","\x6e","\xb9","\x49","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(616)
			HX_STACK_DO_THROW(tmp3);
		}
		HX_STACK_LINE(618)
		::zpp_nape::util::ZPP_ContactList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(618)
		bool tmp3 = tmp2->reverse_flag;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(618)
		if ((tmp3)){
			HX_STACK_LINE(619)
			while((true)){
				HX_STACK_LINE(619)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(619)
				{
					HX_STACK_LINE(619)
					int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(619)
					{
						HX_STACK_LINE(619)
						::zpp_nape::util::ZPP_ContactList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(619)
						tmp6->valmod();
						HX_STACK_LINE(619)
						::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(619)
						bool tmp8 = tmp7->zip_length;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(619)
						if ((tmp8)){
							HX_STACK_LINE(619)
							::zpp_nape::util::ZPP_ContactList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(619)
							tmp9->zip_length = false;
							HX_STACK_LINE(619)
							{
								HX_STACK_LINE(619)
								::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(619)
								tmp10->user_length = (int)0;
								HX_STACK_LINE(619)
								{
									HX_STACK_LINE(619)
									::zpp_nape::util::ZPP_ContactList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(619)
									::zpp_nape::dynamics::ZPP_Contact tmp12 = tmp11->inner->next;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(619)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp12;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(619)
									while((true)){
										HX_STACK_LINE(619)
										bool tmp13 = (cx_ite != null());		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(619)
										bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(619)
										if ((tmp14)){
											HX_STACK_LINE(619)
											break;
										}
										HX_STACK_LINE(619)
										::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(619)
										bool tmp15 = i->active;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(619)
										bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(619)
										if ((tmp15)){
											HX_STACK_LINE(619)
											tmp16 = i->arbiter->active;
										}
										else{
											HX_STACK_LINE(619)
											tmp16 = false;
										}
										HX_STACK_LINE(619)
										if ((tmp16)){
											HX_STACK_LINE(619)
											::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(619)
											(tmp17->user_length)++;
										}
										HX_STACK_LINE(619)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(619)
						::zpp_nape::util::ZPP_ContactList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(619)
						tmp5 = tmp9->user_length;
					}
					HX_STACK_LINE(619)
					tmp4 = (tmp5 == (int)0);
				}
				HX_STACK_LINE(619)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(619)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(619)
				if ((tmp6)){
					HX_STACK_LINE(619)
					break;
				}
				HX_STACK_LINE(619)
				this->pop();
			}
		}
		else{
			HX_STACK_LINE(622)
			while((true)){
				HX_STACK_LINE(622)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(622)
				{
					HX_STACK_LINE(622)
					int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(622)
					{
						HX_STACK_LINE(622)
						::zpp_nape::util::ZPP_ContactList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(622)
						tmp6->valmod();
						HX_STACK_LINE(622)
						::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(622)
						bool tmp8 = tmp7->zip_length;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(622)
						if ((tmp8)){
							HX_STACK_LINE(622)
							::zpp_nape::util::ZPP_ContactList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(622)
							tmp9->zip_length = false;
							HX_STACK_LINE(622)
							{
								HX_STACK_LINE(622)
								::zpp_nape::util::ZPP_ContactList tmp10 = this->zpp_inner;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(622)
								tmp10->user_length = (int)0;
								HX_STACK_LINE(622)
								{
									HX_STACK_LINE(622)
									::zpp_nape::util::ZPP_ContactList tmp11 = this->zpp_inner;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(622)
									::zpp_nape::dynamics::ZPP_Contact tmp12 = tmp11->inner->next;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(622)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp12;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(622)
									while((true)){
										HX_STACK_LINE(622)
										bool tmp13 = (cx_ite != null());		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(622)
										bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(622)
										if ((tmp14)){
											HX_STACK_LINE(622)
											break;
										}
										HX_STACK_LINE(622)
										::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(622)
										bool tmp15 = i->active;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(622)
										bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(622)
										if ((tmp15)){
											HX_STACK_LINE(622)
											tmp16 = i->arbiter->active;
										}
										else{
											HX_STACK_LINE(622)
											tmp16 = false;
										}
										HX_STACK_LINE(622)
										if ((tmp16)){
											HX_STACK_LINE(622)
											::zpp_nape::util::ZPP_ContactList tmp17 = this->zpp_inner;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(622)
											(tmp17->user_length)++;
										}
										HX_STACK_LINE(622)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(622)
						::zpp_nape::util::ZPP_ContactList tmp9 = this->zpp_inner;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(622)
						tmp5 = tmp9->user_length;
					}
					HX_STACK_LINE(622)
					tmp4 = (tmp5 == (int)0);
				}
				HX_STACK_LINE(622)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(622)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(622)
				if ((tmp6)){
					HX_STACK_LINE(622)
					break;
				}
				HX_STACK_LINE(622)
				this->shift();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,clear,(void))

bool ContactList_obj::empty( ){
	HX_STACK_FRAME("nape.dynamics.ContactList","empty",0xd3a3d809,"nape.dynamics.ContactList.empty","nape/dynamics/ContactList.hx",632,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(632)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(632)
	{
		HX_STACK_LINE(632)
		::zpp_nape::util::ZPP_ContactList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(632)
		tmp1->valmod();
		HX_STACK_LINE(632)
		::zpp_nape::util::ZPP_ContactList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(632)
		bool tmp3 = tmp2->zip_length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(632)
		if ((tmp3)){
			HX_STACK_LINE(632)
			::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(632)
			tmp4->zip_length = false;
			HX_STACK_LINE(632)
			{
				HX_STACK_LINE(632)
				::zpp_nape::util::ZPP_ContactList tmp5 = this->zpp_inner;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(632)
				tmp5->user_length = (int)0;
				HX_STACK_LINE(632)
				{
					HX_STACK_LINE(632)
					::zpp_nape::util::ZPP_ContactList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(632)
					::zpp_nape::dynamics::ZPP_Contact tmp7 = tmp6->inner->next;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(632)
					::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp7;		HX_STACK_VAR(cx_ite,"cx_ite");
					HX_STACK_LINE(632)
					while((true)){
						HX_STACK_LINE(632)
						bool tmp8 = (cx_ite != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(632)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(632)
						if ((tmp9)){
							HX_STACK_LINE(632)
							break;
						}
						HX_STACK_LINE(632)
						::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(632)
						bool tmp10 = i->active;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(632)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(632)
						if ((tmp10)){
							HX_STACK_LINE(632)
							tmp11 = i->arbiter->active;
						}
						else{
							HX_STACK_LINE(632)
							tmp11 = false;
						}
						HX_STACK_LINE(632)
						if ((tmp11)){
							HX_STACK_LINE(632)
							::zpp_nape::util::ZPP_ContactList tmp12 = this->zpp_inner;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(632)
							(tmp12->user_length)++;
						}
						HX_STACK_LINE(632)
						cx_ite = cx_ite->next;
					}
				}
			}
		}
		HX_STACK_LINE(632)
		::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(632)
		tmp = tmp4->user_length;
	}
	HX_STACK_LINE(632)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(632)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,empty,return )

::nape::dynamics::ContactIterator ContactList_obj::iterator( ){
	HX_STACK_FRAME("nape.dynamics.ContactList","iterator",0x0be741f2,"nape.dynamics.ContactList.iterator","nape/dynamics/ContactList.hx",647,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(648)
	::zpp_nape::util::ZPP_ContactList tmp = this->zpp_inner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(648)
	tmp->valmod();
	HX_STACK_LINE(651)
	::nape::dynamics::ContactIterator tmp1 = ::nape::dynamics::ContactIterator_obj::get(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(651)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,iterator,return )

::nape::dynamics::ContactList ContactList_obj::copy( hx::Null< bool >  __o_deep){
bool deep = __o_deep.Default(false);
	HX_STACK_FRAME("nape.dynamics.ContactList","copy",0xe8ac61b9,"nape.dynamics.ContactList.copy","nape/dynamics/ContactList.hx",662,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(deep,"deep")
{
		HX_STACK_LINE(663)
		::nape::dynamics::ContactList ret = ::nape::dynamics::ContactList_obj::__new();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(664)
		{
			HX_STACK_LINE(664)
			::nape::dynamics::ContactIterator tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(664)
			{
				HX_STACK_LINE(664)
				::zpp_nape::util::ZPP_ContactList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(664)
				tmp1->valmod();
				HX_STACK_LINE(664)
				tmp = ::nape::dynamics::ContactIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(664)
			::nape::dynamics::ContactIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(664)
			while((true)){
				HX_STACK_LINE(664)
				bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					::zpp_nape::util::ZPP_ContactList tmp2 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(664)
					tmp2->valmod();
					HX_STACK_LINE(664)
					int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(664)
					{
						HX_STACK_LINE(664)
						::nape::dynamics::ContactList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(664)
						_this->zpp_inner->valmod();
						HX_STACK_LINE(664)
						bool tmp4 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(664)
						if ((tmp4)){
							HX_STACK_LINE(664)
							_this->zpp_inner->zip_length = false;
							HX_STACK_LINE(664)
							{
								HX_STACK_LINE(664)
								_this->zpp_inner->user_length = (int)0;
								HX_STACK_LINE(664)
								{
									HX_STACK_LINE(664)
									::zpp_nape::dynamics::ZPP_Contact tmp5 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(664)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp5->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(664)
									while((true)){
										HX_STACK_LINE(664)
										bool tmp6 = (cx_ite != null());		HX_STACK_VAR(tmp6,"tmp6");
										HX_STACK_LINE(664)
										bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(664)
										if ((tmp7)){
											HX_STACK_LINE(664)
											break;
										}
										HX_STACK_LINE(664)
										::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(664)
										bool tmp8 = i->active;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(664)
										bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(664)
										if ((tmp8)){
											HX_STACK_LINE(664)
											tmp9 = i->arbiter->active;
										}
										else{
											HX_STACK_LINE(664)
											tmp9 = false;
										}
										HX_STACK_LINE(664)
										if ((tmp9)){
											HX_STACK_LINE(664)
											(_this->zpp_inner->user_length)++;
										}
										HX_STACK_LINE(664)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(664)
						tmp3 = _this->zpp_inner->user_length;
					}
					HX_STACK_LINE(664)
					int length = tmp3;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(664)
					_g->zpp_critical = true;
					HX_STACK_LINE(664)
					bool tmp4 = (_g->zpp_i < length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(664)
					if ((tmp4)){
						HX_STACK_LINE(664)
						tmp1 = true;
					}
					else{
						HX_STACK_LINE(664)
						{
							HX_STACK_LINE(664)
							::nape::dynamics::ContactIterator tmp5 = ::nape::dynamics::ContactIterator_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(664)
							_g->zpp_next = tmp5;
							HX_STACK_LINE(664)
							::nape::dynamics::ContactIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(664)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(664)
						tmp1 = false;
					}
				}
				HX_STACK_LINE(664)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(664)
				if ((tmp2)){
					HX_STACK_LINE(664)
					break;
				}
				HX_STACK_LINE(664)
				::nape::dynamics::Contact tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					_g->zpp_critical = false;
					HX_STACK_LINE(664)
					int tmp4 = (_g->zpp_i)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(664)
					tmp3 = _g->zpp_inner->at(tmp4);
				}
				HX_STACK_LINE(664)
				::nape::dynamics::Contact i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(664)
				bool tmp4 = deep;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(664)
				::nape::dynamics::Contact tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(664)
				if ((tmp4)){
					HX_STACK_LINE(666)
					::String tmp6 = HX_HCSTRING("Error: Contact","\xf2","\xbf","\x0d","\x29");		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(666)
					::String tmp7 = (tmp6 + HX_HCSTRING(" is not a copyable type","\x89","\xec","\x2e","\x8b"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(666)
					HX_STACK_DO_THROW(tmp7);
					HX_STACK_LINE(668)
					tmp5 = null();
				}
				else{
					HX_STACK_LINE(670)
					tmp5 = i;
				}
				HX_STACK_LINE(664)
				ret->push(tmp5);
			}
		}
		HX_STACK_LINE(671)
		::nape::dynamics::ContactList tmp = ret;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(671)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,copy,return )

Void ContactList_obj::merge( ::nape::dynamics::ContactList xs){
{
		HX_STACK_FRAME("nape.dynamics.ContactList","merge",0x69904034,"nape.dynamics.ContactList.merge","nape/dynamics/ContactList.hx",684,0xd6cc37f4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xs,"xs")
		HX_STACK_LINE(686)
		bool tmp = (xs == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(686)
		if ((tmp)){
			HX_STACK_LINE(686)
			HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot merge with null list","\xf4","\x38","\x16","\xfb"));
		}
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			::nape::dynamics::ContactIterator tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(688)
			{
				HX_STACK_LINE(688)
				xs->zpp_inner->valmod();
				HX_STACK_LINE(688)
				::nape::dynamics::ContactList tmp2 = xs;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(688)
				tmp1 = ::nape::dynamics::ContactIterator_obj::get(tmp2);
			}
			HX_STACK_LINE(688)
			::nape::dynamics::ContactIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(688)
			while((true)){
				HX_STACK_LINE(688)
				bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(688)
				{
					HX_STACK_LINE(688)
					::zpp_nape::util::ZPP_ContactList tmp3 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(688)
					tmp3->valmod();
					HX_STACK_LINE(688)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(688)
					{
						HX_STACK_LINE(688)
						::nape::dynamics::ContactList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(688)
						_this->zpp_inner->valmod();
						HX_STACK_LINE(688)
						bool tmp5 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(688)
						if ((tmp5)){
							HX_STACK_LINE(688)
							_this->zpp_inner->zip_length = false;
							HX_STACK_LINE(688)
							{
								HX_STACK_LINE(688)
								_this->zpp_inner->user_length = (int)0;
								HX_STACK_LINE(688)
								{
									HX_STACK_LINE(688)
									::zpp_nape::dynamics::ZPP_Contact tmp6 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(688)
									::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp6->next;		HX_STACK_VAR(cx_ite,"cx_ite");
									HX_STACK_LINE(688)
									while((true)){
										HX_STACK_LINE(688)
										bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(688)
										bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(688)
										if ((tmp8)){
											HX_STACK_LINE(688)
											break;
										}
										HX_STACK_LINE(688)
										::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(688)
										bool tmp9 = i->active;		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(688)
										bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(688)
										if ((tmp9)){
											HX_STACK_LINE(688)
											tmp10 = i->arbiter->active;
										}
										else{
											HX_STACK_LINE(688)
											tmp10 = false;
										}
										HX_STACK_LINE(688)
										if ((tmp10)){
											HX_STACK_LINE(688)
											(_this->zpp_inner->user_length)++;
										}
										HX_STACK_LINE(688)
										cx_ite = cx_ite->next;
									}
								}
							}
						}
						HX_STACK_LINE(688)
						tmp4 = _this->zpp_inner->user_length;
					}
					HX_STACK_LINE(688)
					int length = tmp4;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(688)
					_g->zpp_critical = true;
					HX_STACK_LINE(688)
					bool tmp5 = (_g->zpp_i < length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(688)
					if ((tmp5)){
						HX_STACK_LINE(688)
						tmp2 = true;
					}
					else{
						HX_STACK_LINE(688)
						{
							HX_STACK_LINE(688)
							::nape::dynamics::ContactIterator tmp6 = ::nape::dynamics::ContactIterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(688)
							_g->zpp_next = tmp6;
							HX_STACK_LINE(688)
							::nape::dynamics::ContactIterator_obj::zpp_pool = _g;
							HX_STACK_LINE(688)
							_g->zpp_inner = null();
						}
						HX_STACK_LINE(688)
						tmp2 = false;
					}
				}
				HX_STACK_LINE(688)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(688)
				if ((tmp3)){
					HX_STACK_LINE(688)
					break;
				}
				HX_STACK_LINE(688)
				::nape::dynamics::Contact tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(688)
				{
					HX_STACK_LINE(688)
					_g->zpp_critical = false;
					HX_STACK_LINE(688)
					int tmp5 = (_g->zpp_i)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(688)
					tmp4 = _g->zpp_inner->at(tmp5);
				}
				HX_STACK_LINE(688)
				::nape::dynamics::Contact x = tmp4;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(689)
				::nape::dynamics::Contact tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(689)
				bool tmp6 = this->has(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(689)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(689)
				if ((tmp7)){
					HX_STACK_LINE(689)
					::zpp_nape::util::ZPP_ContactList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(689)
					bool tmp9 = tmp8->reverse_flag;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(689)
					if ((tmp9)){
						HX_STACK_LINE(689)
						::nape::dynamics::Contact tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(689)
						this->push(tmp10);
					}
					else{
						HX_STACK_LINE(689)
						::nape::dynamics::Contact tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(689)
						this->unshift(tmp10);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,merge,(void))

::String ContactList_obj::toString( ){
	HX_STACK_FRAME("nape.dynamics.ContactList","toString",0xb0bbc8b0,"nape.dynamics.ContactList.toString","nape/dynamics/ContactList.hx",702,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(703)
	::String ret = HX_HCSTRING("[","\x5b","\x00","\x00","\x00");		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(704)
	bool fst = true;		HX_STACK_VAR(fst,"fst");
	HX_STACK_LINE(705)
	{
		HX_STACK_LINE(705)
		::nape::dynamics::ContactIterator tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(705)
		{
			HX_STACK_LINE(705)
			::zpp_nape::util::ZPP_ContactList tmp1 = this->zpp_inner;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(705)
			tmp1->valmod();
			HX_STACK_LINE(705)
			tmp = ::nape::dynamics::ContactIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(705)
		::nape::dynamics::ContactIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(705)
		while((true)){
			HX_STACK_LINE(705)
			bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(705)
			{
				HX_STACK_LINE(705)
				::zpp_nape::util::ZPP_ContactList tmp2 = _g->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(705)
				tmp2->valmod();
				HX_STACK_LINE(705)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(705)
				{
					HX_STACK_LINE(705)
					::nape::dynamics::ContactList _this = _g->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(705)
					_this->zpp_inner->valmod();
					HX_STACK_LINE(705)
					bool tmp4 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(705)
					if ((tmp4)){
						HX_STACK_LINE(705)
						_this->zpp_inner->zip_length = false;
						HX_STACK_LINE(705)
						{
							HX_STACK_LINE(705)
							_this->zpp_inner->user_length = (int)0;
							HX_STACK_LINE(705)
							{
								HX_STACK_LINE(705)
								::zpp_nape::dynamics::ZPP_Contact tmp5 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(705)
								::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp5->next;		HX_STACK_VAR(cx_ite,"cx_ite");
								HX_STACK_LINE(705)
								while((true)){
									HX_STACK_LINE(705)
									bool tmp6 = (cx_ite != null());		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(705)
									bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(705)
									if ((tmp7)){
										HX_STACK_LINE(705)
										break;
									}
									HX_STACK_LINE(705)
									::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(705)
									bool tmp8 = i->active;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(705)
									bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(705)
									if ((tmp8)){
										HX_STACK_LINE(705)
										tmp9 = i->arbiter->active;
									}
									else{
										HX_STACK_LINE(705)
										tmp9 = false;
									}
									HX_STACK_LINE(705)
									if ((tmp9)){
										HX_STACK_LINE(705)
										(_this->zpp_inner->user_length)++;
									}
									HX_STACK_LINE(705)
									cx_ite = cx_ite->next;
								}
							}
						}
					}
					HX_STACK_LINE(705)
					tmp3 = _this->zpp_inner->user_length;
				}
				HX_STACK_LINE(705)
				int length = tmp3;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(705)
				_g->zpp_critical = true;
				HX_STACK_LINE(705)
				bool tmp4 = (_g->zpp_i < length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(705)
				if ((tmp4)){
					HX_STACK_LINE(705)
					tmp1 = true;
				}
				else{
					HX_STACK_LINE(705)
					{
						HX_STACK_LINE(705)
						::nape::dynamics::ContactIterator tmp5 = ::nape::dynamics::ContactIterator_obj::zpp_pool;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(705)
						_g->zpp_next = tmp5;
						HX_STACK_LINE(705)
						::nape::dynamics::ContactIterator_obj::zpp_pool = _g;
						HX_STACK_LINE(705)
						_g->zpp_inner = null();
					}
					HX_STACK_LINE(705)
					tmp1 = false;
				}
			}
			HX_STACK_LINE(705)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(705)
			if ((tmp2)){
				HX_STACK_LINE(705)
				break;
			}
			HX_STACK_LINE(705)
			::nape::dynamics::Contact tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(705)
			{
				HX_STACK_LINE(705)
				_g->zpp_critical = false;
				HX_STACK_LINE(705)
				int tmp4 = (_g->zpp_i)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(705)
				tmp3 = _g->zpp_inner->at(tmp4);
			}
			HX_STACK_LINE(705)
			::nape::dynamics::Contact i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(706)
			bool tmp4 = fst;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(706)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(706)
			if ((tmp5)){
				HX_STACK_LINE(706)
				hx::AddEq(ret,HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(707)
			bool tmp6 = (i == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(707)
			::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(707)
			if ((tmp6)){
				HX_STACK_LINE(707)
				tmp7 = HX_HCSTRING("NULL","\x87","\x66","\xcf","\x33");
			}
			else{
				HX_STACK_LINE(707)
				tmp7 = i->toString();
			}
			HX_STACK_LINE(707)
			hx::AddEq(ret,tmp7);
			HX_STACK_LINE(708)
			fst = false;
		}
	}
	HX_STACK_LINE(710)
	::String tmp = (ret + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(710)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ContactList_obj,toString,return )

::nape::dynamics::ContactList ContactList_obj::foreach( Dynamic lambda){
	HX_STACK_FRAME("nape.dynamics.ContactList","foreach",0xf96df206,"nape.dynamics.ContactList.foreach","nape/dynamics/ContactList.hx",732,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(734)
	bool tmp = (lambda == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(734)
	if ((tmp)){
		HX_STACK_LINE(734)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot execute null on list elements","\x97","\xfe","\x61","\x00"));
	}
	HX_STACK_LINE(736)
	::nape::dynamics::ContactIterator tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(736)
	{
		HX_STACK_LINE(736)
		::zpp_nape::util::ZPP_ContactList tmp2 = this->zpp_inner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(736)
		tmp2->valmod();
		HX_STACK_LINE(736)
		tmp1 = ::nape::dynamics::ContactIterator_obj::get(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(736)
	::nape::dynamics::ContactIterator it = tmp1;		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(737)
	while((true)){
		HX_STACK_LINE(737)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(737)
		{
			HX_STACK_LINE(737)
			::zpp_nape::util::ZPP_ContactList tmp3 = it->zpp_inner->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(737)
			tmp3->valmod();
			HX_STACK_LINE(737)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(737)
			{
				HX_STACK_LINE(737)
				::nape::dynamics::ContactList _this = it->zpp_inner;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(737)
				_this->zpp_inner->valmod();
				HX_STACK_LINE(737)
				bool tmp5 = _this->zpp_inner->zip_length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(737)
				if ((tmp5)){
					HX_STACK_LINE(737)
					_this->zpp_inner->zip_length = false;
					HX_STACK_LINE(737)
					{
						HX_STACK_LINE(737)
						_this->zpp_inner->user_length = (int)0;
						HX_STACK_LINE(737)
						{
							HX_STACK_LINE(737)
							::zpp_nape::dynamics::ZPP_Contact tmp6 = _this->zpp_inner->inner;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(737)
							::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp6->next;		HX_STACK_VAR(cx_ite,"cx_ite");
							HX_STACK_LINE(737)
							while((true)){
								HX_STACK_LINE(737)
								bool tmp7 = (cx_ite != null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(737)
								bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(737)
								if ((tmp8)){
									HX_STACK_LINE(737)
									break;
								}
								HX_STACK_LINE(737)
								::zpp_nape::dynamics::ZPP_Contact i = cx_ite;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(737)
								bool tmp9 = i->active;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(737)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(737)
								if ((tmp9)){
									HX_STACK_LINE(737)
									tmp10 = i->arbiter->active;
								}
								else{
									HX_STACK_LINE(737)
									tmp10 = false;
								}
								HX_STACK_LINE(737)
								if ((tmp10)){
									HX_STACK_LINE(737)
									(_this->zpp_inner->user_length)++;
								}
								HX_STACK_LINE(737)
								cx_ite = cx_ite->next;
							}
						}
					}
				}
				HX_STACK_LINE(737)
				tmp4 = _this->zpp_inner->user_length;
			}
			HX_STACK_LINE(737)
			int length = tmp4;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(737)
			it->zpp_critical = true;
			HX_STACK_LINE(737)
			bool tmp5 = (it->zpp_i < length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(737)
			if ((tmp5)){
				HX_STACK_LINE(737)
				tmp2 = true;
			}
			else{
				HX_STACK_LINE(737)
				{
					HX_STACK_LINE(737)
					::nape::dynamics::ContactIterator tmp6 = ::nape::dynamics::ContactIterator_obj::zpp_pool;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(737)
					it->zpp_next = tmp6;
					HX_STACK_LINE(737)
					::nape::dynamics::ContactIterator_obj::zpp_pool = it;
					HX_STACK_LINE(737)
					it->zpp_inner = null();
				}
				HX_STACK_LINE(737)
				tmp2 = false;
			}
		}
		HX_STACK_LINE(737)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(737)
		if ((tmp3)){
			HX_STACK_LINE(737)
			break;
		}
		HX_STACK_LINE(738)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(739)
			::nape::dynamics::Contact tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(739)
			{
				HX_STACK_LINE(739)
				it->zpp_critical = false;
				HX_STACK_LINE(739)
				int tmp5 = (it->zpp_i)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(739)
				tmp4 = it->zpp_inner->at(tmp5);
			}
			HX_STACK_LINE(739)
			lambda(tmp4).Cast< Void >();
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(742)
					{
						HX_STACK_LINE(743)
						::nape::dynamics::ContactIterator tmp4 = ::nape::dynamics::ContactIterator_obj::zpp_pool;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(743)
						it->zpp_next = tmp4;
						HX_STACK_LINE(744)
						::nape::dynamics::ContactIterator_obj::zpp_pool = it;
						HX_STACK_LINE(745)
						it->zpp_inner = null();
					}
					HX_STACK_LINE(747)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(750)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,foreach,return )

::nape::dynamics::ContactList ContactList_obj::filter( Dynamic lambda){
	HX_STACK_FRAME("nape.dynamics.ContactList","filter",0x71d54ebc,"nape.dynamics.ContactList.filter","nape/dynamics/ContactList.hx",779,0xd6cc37f4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lambda,"lambda")
	HX_STACK_LINE(781)
	bool tmp = (lambda == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(781)
	if ((tmp)){
		HX_STACK_LINE(781)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot select elements of list with null","\x14","\xa8","\xf1","\x3b"));
	}
	HX_STACK_LINE(783)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(784)
	while((true)){
		HX_STACK_LINE(784)
		int tmp1 = i;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(784)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(784)
		{
			HX_STACK_LINE(784)
			::zpp_nape::util::ZPP_ContactList tmp3 = this->zpp_inner;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(784)
			tmp3->valmod();
			HX_STACK_LINE(784)
			::zpp_nape::util::ZPP_ContactList tmp4 = this->zpp_inner;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(784)
			bool tmp5 = tmp4->zip_length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(784)
			if ((tmp5)){
				HX_STACK_LINE(784)
				::zpp_nape::util::ZPP_ContactList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(784)
				tmp6->zip_length = false;
				HX_STACK_LINE(784)
				{
					HX_STACK_LINE(784)
					::zpp_nape::util::ZPP_ContactList tmp7 = this->zpp_inner;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(784)
					tmp7->user_length = (int)0;
					HX_STACK_LINE(784)
					{
						HX_STACK_LINE(784)
						::zpp_nape::util::ZPP_ContactList tmp8 = this->zpp_inner;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(784)
						::zpp_nape::dynamics::ZPP_Contact tmp9 = tmp8->inner->next;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(784)
						::zpp_nape::dynamics::ZPP_Contact cx_ite = tmp9;		HX_STACK_VAR(cx_ite,"cx_ite");
						HX_STACK_LINE(784)
						while((true)){
							HX_STACK_LINE(784)
							bool tmp10 = (cx_ite != null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(784)
							bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(784)
							if ((tmp11)){
								HX_STACK_LINE(784)
								break;
							}
							HX_STACK_LINE(784)
							::zpp_nape::dynamics::ZPP_Contact i1 = cx_ite;		HX_STACK_VAR(i1,"i1");
							HX_STACK_LINE(784)
							bool tmp12 = i1->active;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(784)
							bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(784)
							if ((tmp12)){
								HX_STACK_LINE(784)
								tmp13 = i1->arbiter->active;
							}
							else{
								HX_STACK_LINE(784)
								tmp13 = false;
							}
							HX_STACK_LINE(784)
							if ((tmp13)){
								HX_STACK_LINE(784)
								::zpp_nape::util::ZPP_ContactList tmp14 = this->zpp_inner;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(784)
								(tmp14->user_length)++;
							}
							HX_STACK_LINE(784)
							cx_ite = cx_ite->next;
						}
					}
				}
			}
			HX_STACK_LINE(784)
			::zpp_nape::util::ZPP_ContactList tmp6 = this->zpp_inner;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(784)
			tmp2 = tmp6->user_length;
		}
		HX_STACK_LINE(784)
		bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(784)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(784)
		if ((tmp4)){
			HX_STACK_LINE(784)
			break;
		}
		HX_STACK_LINE(785)
		int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(785)
		::nape::dynamics::Contact tmp6 = this->at(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(785)
		::nape::dynamics::Contact x = tmp6;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(786)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(787)
			::nape::dynamics::Contact tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(787)
			bool tmp8 = lambda(tmp7).Cast< bool >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(787)
			if ((tmp8)){
				HX_STACK_LINE(787)
				(i)++;
			}
			else{
				HX_STACK_LINE(788)
				::nape::dynamics::Contact tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(788)
				this->remove(tmp9);
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(791)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(794)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,filter,return )

::nape::dynamics::ContactList ContactList_obj::fromArray( Array< ::Dynamic > array){
	HX_STACK_FRAME("nape.dynamics.ContactList","fromArray",0xa524634b,"nape.dynamics.ContactList.fromArray","nape/dynamics/ContactList.hx",304,0xd6cc37f4)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(306)
	bool tmp = (array == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	if ((tmp)){
		HX_STACK_LINE(307)
		HX_STACK_DO_THROW(HX_HCSTRING("Error: Cannot convert null Array to Nape list","\x35","\xf1","\x7a","\x22"));
	}
	HX_STACK_LINE(310)
	::nape::dynamics::ContactList ret = ::nape::dynamics::ContactList_obj::__new();		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(311)
		while((true)){
			HX_STACK_LINE(311)
			bool tmp1 = (_g < array->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(311)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(311)
			if ((tmp2)){
				HX_STACK_LINE(311)
				break;
			}
			HX_STACK_LINE(311)
			::nape::dynamics::Contact tmp3 = array->__get(_g).StaticCast< ::nape::dynamics::Contact >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(311)
			::nape::dynamics::Contact i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(311)
			++(_g);
			HX_STACK_LINE(316)
			::nape::dynamics::Contact tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(316)
			ret->push(tmp4);
		}
	}
	HX_STACK_LINE(318)
	::nape::dynamics::ContactList tmp1 = ret;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(318)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ContactList_obj,fromArray,return )


ContactList_obj::ContactList_obj()
{
}

void ContactList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ContactList);
	HX_MARK_MEMBER_NAME(zpp_inner,"zpp_inner");
	HX_MARK_END_CLASS();
}

void ContactList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(zpp_inner,"zpp_inner");
}

Dynamic ContactList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shift") ) { return shift_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return get_length(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unshift") ) { return unshift_dyn(); }
		if (HX_FIELD_EQ(inName,"foreach") ) { return foreach_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { return zpp_inner; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ContactList_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { outValue = fromArray_dyn(); return true;  }
	}
	return false;
}

Dynamic ContactList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zpp_inner") ) { zpp_inner=inValue.Cast< ::zpp_nape::util::ZPP_ContactList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ContactList_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ContactList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::zpp_nape::util::ZPP_ContactList*/ ,(int)offsetof(ContactList_obj,zpp_inner),HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("zpp_inner","\x51","\x65","\x85","\x78"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("at","\xf3","\x54","\x00","\x00"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("empty","\x8d","\x3a","\xda","\x6f"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("foreach","\x8a","\xfd","\xe4","\xd9"),
	HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ContactList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ContactList_obj::__mClass,"__mClass");
};

#endif

hx::Class ContactList_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromArray","\xcf","\x57","\x18","\xda"),
	::String(null()) };

void ContactList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nape.dynamics.ContactList","\xea","\x78","\x96","\x58");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ContactList_obj::__GetStatic;
	__mClass->mSetStaticField = &ContactList_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ContactList_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace nape
} // end namespace dynamics
