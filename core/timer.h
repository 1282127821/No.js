#ifndef TIMER_H
#define TIMER_H

#include <signal.h>
#include <time.h>
#include <map> 
#include <memory> 
#include "util.h"
#include "include/common.h"
#include "env.h"
#include "string.h"
#include "async.h"

using namespace v8;
using namespace No::Util;
using namespace No::Async;
using namespace No::Env;
using namespace std;

static map<timer_t, shared_ptr<TimerRequestContext>> timerMap;

namespace No {
    namespace Timer {
        void SetTimeout(V8_ARGS);
        void SetInterval(V8_ARGS);
        void ClearTimeout(V8_ARGS);
        void ClearInterval(V8_ARGS);
        void Init(Isolate* isolate, Local<Object> target);
    }
}

#endif