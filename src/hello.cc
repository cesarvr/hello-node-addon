#include <nan.h>

using namespace v8;
using namespace Nan;

void addWorld(const Nan::FunctionCallbackInfo<v8::Value>& info) {
    info.GetReturnValue().Set(New("world").ToLocalChecked());
}

void Init(Local<Object> exports) {
    auto myFn = New<FunctionTemplate>(addWorld)->GetFunction(); 
    exports->Set(New("hello").ToLocalChecked(), myFn);
}

NODE_MODULE(hello, Init)
