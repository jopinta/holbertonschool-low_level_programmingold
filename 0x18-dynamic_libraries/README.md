 When programming in C, it is possible to select if the Library is going to be
 Dynamic or StaticDynamic Library that it has to be installed in the
 operating system to use it

lags. the -L is to tell the compiler where search it and with the -l before the
name is used to identified the name of it

-o

--print-file-name
Precede each symbol by the name of the input file (or archive member) in which
it was found, rather than identifying the input file once only, before all of
its symbols.

D
d
The symbol is in the initialized data section.

ldd prints the shared objects (shared libraries) required by each
       program or shared object specified on the command line

ldd invokes the standard dynamic linker (see
       ld.so(8)) with the LD_TRACE_LOADED_OBJECTS environment variable
       set to 1.  This causes the dynamic linker to inspect the
       program's dynamic dependencies, and find (according to the rules
       described in ld.so(8)) and load the objects that satisfy those
       dependencies.  For each dependency, ldd displays the location of
       the matching object and the (hexadecimal) address at which it is
       loaded.

ldconfig is a utility that indexes shared object names to simplify loading on sh
ared object libraries by executables. It scans standard directories and those fo
und in the ld. so. conf configuration file and stores its index in ld.