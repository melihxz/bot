#ifndef SUGGESTION_H
#define SUGGESTION_H

#include <iostream>
#include <dpp/dpp.h>

namespace utils::suggestion
{
    /**
     * @brief Creates a suggestion
     * @param bot cluster
     * @param event message create event
     */
    void createSuggestion(dpp::cluster& bot, const dpp::message_create_t& event);


    /**
    * @brief Deletes a suggestion
    * @param bot cluster
    * @param event button click event
    */
    void deleteSuggestion(dpp::cluster& bot, const dpp::button_click_t& event);

    /**
    * @brief Shows the modal to edit an suggestion
    * @param bot cluster
    * @param event button click event
    */
    void editSuggestion(dpp::cluster& bot, const dpp::button_click_t& event);


    /**
    * @brief Edit suggestion modal
    * @param bot cluster
    * @param event form submit event
    */
    void showSuggestionEditModal(dpp::cluster& bot, const dpp::form_submit_t& event);
}

#endif // SUGGESTION_H
