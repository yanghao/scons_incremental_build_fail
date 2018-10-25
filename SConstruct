a_inc_path = "#build/a/include"
b_inc_path = "#build/b/include"
env = Environment()
obj_list = []
env.Append(CPPPATH = [a_inc_path])
obj_list += env.SConscript("a/SConscript", variant_dir="build/a", exports="env", duplicate=0)
env.Append(CPPPATH = [b_inc_path])
obj_list += env.SConscript("b/SConscript", variant_dir="build/b", exports="env", duplicate=0)
env.Program("build/hello", obj_list)
