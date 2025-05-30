// baruh.ifraimov@gmail.com
#pragma once

namespace coup {
    enum class Role {
        GENERAL,
        JUDGE,
        GOVERNOR,
        BARON,
        SPY,
        MERCHANT
    };

    /**
     * @brief Convert Role enum to its string representation
     * 
     * @param r The role you want to convert into string
     * @return std::string
     */
    inline std::string to_string(Role r) {
        switch (r) {
            case Role::GOVERNOR: return "GOVERNOR";
            case Role::SPY:      return "SPY";
            case Role::BARON:    return "BARON";
            case Role::GENERAL:  return "GENERAL";
            case Role::JUDGE:    return "JUDGE";
            case Role::MERCHANT:    return "MERCHANT";
        }
    }

    
}