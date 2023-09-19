#include "home.h"

void home::asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback)
{
    auto resp = HttpResponse::newHttpResponse();
    resp->setStatusCode(k200OK);
    resp->setContentTypeCode(CT_TEXT_HTML);
    resp->setBody(""
        "<div>"
            "<h2> Funcionou </h2>"
        "</div>"
    "");
    callback(resp);
}
