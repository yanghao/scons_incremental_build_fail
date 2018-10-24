# Reproducing steps:

* clone repo (on master by default)
* scons # build pass
* git checkout HEAD^ # checkout previous version
* scons # Failure: scons: *** [build/a/test.o] Implicit dependency `build/a/include/test.h' not found, needed by target `build/a/test.o'.
