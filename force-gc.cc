#include <config.h>
#include <primops.hh>

#include <gc/gc.h>


using namespace nix;

static void forceGC(EvalState & _state, const Pos & _pos, Value ** _args, Value & v)
{
    GC_gcollect();
    mkNull(v);
}

static RegisterPrimOp rp1("__forceGC", 0, forceGC);
