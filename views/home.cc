//this file is generated by program(drogon_ctl) automatically,don't modify it!
#include "home.h"
#include <drogon/utils/OStringStream.h>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <list>
#include <deque>
#include <queue>
using namespace drogon;
std::string home::genText(const DrTemplateData& home_view_data)
{
	drogon::OStringStream home_tmp_stream;
	std::string layoutName{""};
if(layoutName.empty())
{
std::string ret{std::move(home_tmp_stream.str())};
return ret;
}else
{
auto templ = DrTemplateBase::newTemplate(layoutName);
if(!templ) return "";
HttpViewData data = home_view_data;
auto str = std::move(home_tmp_stream.str());
if(!str.empty() && str[str.length()-1] == '\n') str.resize(str.length()-1);
data[""] = std::move(str);
return templ->genText(data);
}
}
