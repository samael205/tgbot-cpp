//
// Created by Konstantin Kukin on 26/12/16.
//


#ifndef TGBOT_INPUTVENUEMESSAGECONTENT_H
#define TGBOT_INPUTVENUEMESSAGECONTENT_H

#include <memory>
#include <string>

namespace TgBot {

/**
 * @brief Represents the content of a venue message to be sent as the result of an inline query.
 *
 * @ingroup types
 */
class InputVenueMessageContent : public InputMessageContent {
public:
    typedef std::shared_ptr<InputVenueMessageContent> Ptr;

    InputVenueMessageContent() :
        InputMessageContent("InputVenueMessageContent")
    {}

    /**
     * @brief Latitude of the location in degrees
     */
    float latitude;

    /**
     * @brief Longitude of the location in degrees
     */
    float longitude;

    /**
     * @brief Name of the venue
     */
    std::string title;

    /**
     * @brief Address of the venue
     */
    std::string address;

    /**
     * @brief Optional. Foursquare identifier of the venue, if known
     */
    std::string foursquareId;

    virtual ~InputVenueMessageContent() { }
};
}

#endif //TGBOT_INPUTVENUEMESSAGECONTENT_H
