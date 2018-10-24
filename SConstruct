import os
cwd = os.getcwd()
a_inc_path = os.path.join(cwd, "build/a/include")
b_inc_path = os.path.join(cwd, "build/b/include")
env = Environment()
obj_list = []
env.Append(CPPPATH = [a_inc_path])
obj_list += env.SConscript("a/SConscript", variant_dir="build/a", exports="env")
env.Append(CPPPATH = [b_inc_path])
obj_list += env.SConscript("b/SConscript", variant_dir="build/b", exports="env")
env.Program("build/hello", obj_list)
