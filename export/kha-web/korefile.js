var solution = new Solution('solemnsky');
var project = new Project('solemnsky');
project.setDebugDir('build/linux');
project.addSubProject(Solution.createProject('build/linux-build'));
project.addSubProject(Solution.createProject('/tmp/haxe/export/kha-web/Kha'));
project.addSubProject(Solution.createProject('/tmp/haxe/export/kha-web/Kha/Kore'));
solution.addProject(project);
return solution;
