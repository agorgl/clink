// Copyright (c) 2015 Martin Ridgers
// License: http://opensource.org/licenses/MIT

#pragma once

#include <vector>

class str_base;

//------------------------------------------------------------------------------
class matches
{
public:
                        matches();
                        ~matches();
    unsigned int        get_match_count() const;
    const char*         get_match(unsigned int index) const;
    void                get_match_lcd(str_base& out) const;
    void                reset();
    void                add_match(const char* match);

private:
    std::vector<char*>  m_matches;

private:
                        matches(const matches&) = delete;
                        matches(matches&&) = delete;
    void                operator = (const matches&) = delete;
    void                operator = (matches&& rhs) = delete;
};
