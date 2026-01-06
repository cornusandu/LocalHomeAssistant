#pragma once

#include "status.hpp"
#include "feature.hpp"

#include <vector>

struct HomeAssistantServer {
    ServerStatus status = ServerStatus::Inactive;
    std::vector<Feature> availableFeatures;
};
