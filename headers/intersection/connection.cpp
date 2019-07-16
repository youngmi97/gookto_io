#include <string>
#include <iostream>
#include "connection.hpp"

connection::connection(int id, int fromLink, int fromLane, int toLink, int toLane, int priority) : 
connectionId(id), from_link(fromLink), from_lane(fromLane), to_link(toLink), to_lane(toLane), priority(priority)
{};