#include <dlt/dlt.h>

DLT_DECLARE_CONTEXT(ctx);

int main()
{
    DLT_REGISTER_APP("LAPP", "Logging Application");
    DLT_REGISTER_CONTEXT(ctx, "TES1", "Context for Hello world Logging");
    DLT_LOG(ctx, DLT_LOG_INFO, DLT_CSTRING("Hello, world!"));
    DLT_UNREGISTER_CONTEXT(ctx);
    DLT_UNREGISTER_APP();
    return 0;
}