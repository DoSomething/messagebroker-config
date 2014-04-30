<?php
/*
 * Configuration values that are common between all Message Broker applications.
 *
 * Include this file in all apps using:
 *   require('mb-config.inc');
 *
 * Create a symlink in the base of the project directory to point to this file.
 *
 * $ ln -s <to> <from>
 *
 * ex.
 * ln -s /Users/darrenlee/Sites/message-broker/messagebroker-config/mb-config.inc
 *   /Users/darrenlee/Sites/message-broker/mbc-registration-email/mb-config.inc
 *
 * $ls -la
 *   lrwxr-xr-x   1 darrenlee  staff   82 Mar 10 14:49 ds-config.inc ->
 *     /Users/darrenlee/Sites/message-broker/messagebroker-config/mb-config/ds-config.inc
 */

/**
 * RabbitMQ - Exchange
 * transactionalExchange
 */

putenv("MB_TRANSACTIONAL_EXCHANGE=transactionalExchange");
putenv("MB_TRANSACTIONAL_EXCHANGE_TYPE=topic");
putenv("MB_TRANSACTIONAL_EXCHANGE_PASSIVE=0");
putenv("MB_TRANSACTIONAL_EXCHANGE_DURABLE=1");
putenv("MB_TRANSACTIONAL_EXCHANGE_AUTO_DELETE=0");

/**
 * RabbitMQ - Queue
 * Transactionals
 */

putenv("MB_TRANSACTIONAL_EXCHANGE_ROUTING_KEY=transactional");

putenv("MB_TRANSACTIONAL_QUEUE=transactionalQueue");
putenv("MB_TRANSACTIONAL_QUEUE_PASSIVE=0");
putenv("MB_TRANSACTIONAL_QUEUE_DURABLE=1");
putenv("MB_TRANSACTIONAL_QUEUE_EXCLUSIVE=0");
putenv("MB_TRANSACTIONAL_QUEUE_AUTO_DELETE=0");
putenv("MB_TRANSACTIONAL_QUEUE_TOPIC_MB_TRANSACTIONAL_EXCHANGE_PATTERN=*.*.transactional");

/**
 * RabbitMQ - Queue
 * Registrations
 */
putenv("MB_USER_REGISTRATION_EXCHANGE_ROUTING_KEY=emailRegistration");

putenv("MB_USER_REGISTRATION_QUEUE=userRegistrationQueue");
putenv("MB_USER_REGISTRATION_QUEUE_PASSIVE=0");
putenv("MB_USER_REGISTRATION_QUEUE_DURABLE=1");
putenv("MB_USER_REGISTRATION_QUEUE_EXCLUSIVE=0");
putenv("MB_USER_REGISTRATION_QUEUE_AUTO_DELETE=0");
putenv("MB_USER_REGISTRATION_QUEUE_TOPIC_MB_TRANSACTIONAL_EXCHANGE_PATTERN=user.registration.*");

/**
 * RabbitMQ - Queue
 * MailChimp Campaign Signups
 */
putenv("MB_MAILCHIMP_CAMPAIGN_SIGNUP_ROUTING_KEY=mailchimpCampaignSignup");

putenv("MB_MAILCHIMP_CAMPAIGN_SIGNUP_QUEUE=mailchimpCampaignSignupQueue");
putenv("MB_MAILCHIMP_CAMPAIGN_SIGNUP_QUEUE_PASSIVE=0");
putenv("MB_MAILCHIMP_CAMPAIGN_SIGNUP_QUEUE_DURABLE=1");
putenv("MB_MAILCHIMP_CAMPAIGN_SIGNUP_QUEUE_EXCLUSIVE=0");
putenv("MB_MAILCHIMP_CAMPAIGN_SIGNUP_QUEUE_AUTO_DELETE=0");
putenv("MB_MAILCHIMP_CAMPAIGN_SIGNUP_QUEUE_TOPIC_MB_TRANSACTIONAL_EXCHANGE_PATTERN=campaign.signup.*");

/**
 * RabbitMQ - Queue
 * User Campaign Activity - signups and reportbacks
 */
putenv("MB_USER_CAMPAIGN_ACTIVTY_ROUTING_KEY=userCampaignActivty");

putenv("MB_USER_CAMPAIGN_ACTIVTY_QUEUE=userCampaignActivityQueue");
putenv("MB_USER_CAMPAIGN_ACTIVTY_QUEUE_PASSIVE=0");
putenv("MB_USER_CAMPAIGN_ACTIVTY_QUEUE_DURABLE=1");
putenv("MB_USER_CAMPAIGN_ACTIVTY_QUEUE_EXCLUSIVE=0");
putenv("MB_USER_CAMPAIGN_ACTIVTY_QUEUE_AUTO_DELETE=0");
putenv("MB_USER_CAMPAIGN_ACTIVTY_QUEUE_TOPIC_MB_TRANSACTIONAL_EXCHANGE_PATTERN=campaign.*.*");

/**
 * RabbitMQ - Queue
 * User Account Activity - user account creation details to be consumed for
 * record creation in the UserAPI.
 */
putenv("MB_USER_API_REGISTRATION_ROUTING_KEY=userAPIRegistration");

putenv("MB_USER_API_REGISTRATION_QUEUE=userAPIRegistrationQueue");
putenv("MB_USER_API_REGISTRATION_QUEUE_PASSIVE=0");
putenv("MB_USER_API_REGISTRATION_QUEUE_DURABLE=1");
putenv("MB_USER_API_REGISTRATION_QUEUE_EXCLUSIVE=0");
putenv("MB_USER_API_REGISTRATION_QUEUE_AUTO_DELETE=0");
putenv("MB_USER_API_REGISTRATION_QUEUE_TOPIC_MB_TRANSACTIONAL_EXCHANGE_PATTERN=user.registration.#");

/**
 * RabbitMQ - Queue
 * User Campaign Activity - campaign signups and reportbacks to be consumed for
 * updates to the UserAPI
 */
putenv("MB_USER_API_CAMPAIGN_ACTIVITY_ROUTING_KEY=userAPICampaignActivity");

putenv("MB_USER_API_CAMPAIGN_ACTIVITY_QUEUE=userAPICampaignActivityQueue");
putenv("MB_USER_API_CAMPAIGN_ACTIVITY_QUEUE_PASSIVE=0");
putenv("MB_USER_API_CAMPAIGN_ACTIVITY_QUEUE_DURABLE=1");
putenv("MB_USER_API_CAMPAIGN_ACTIVITY_QUEUE_EXCLUSIVE=0");
putenv("MB_USER_API_CAMPAIGN_ACTIVITY_QUEUE_AUTO_DELETE=0");
putenv("MB_USER_API_CAMPAIGN_ACTIVITY_QUEUE_TOPIC_MB_TRANSACTIONAL_EXCHANGE_PATTERN=campaign.*.*");

/**
 * RabbitMQ - Exchange
 * MailChimp Unsubscribes
 */
putenv("MB_MAILCHIMP_UNSUBSCRIBE_EXCHANGE=directMailchimpWebhooks");
putenv("MB_MAILCHIMP_UNSUBSCRIBE_EXCHANGE_TYPE=direct");
putenv("MB_MAILCHIMP_UNSUBSCRIBE_EXCHANGE_PASSIVE=0");
putenv("MB_MAILCHIMP_UNSUBSCRIBE_EXCHANGE_DURABLE=1");
putenv("MB_MAILCHIMP_UNSUBSCRIBE_EXCHANGE_AUTO_DELETE=0");

/**
 * RabbitMQ - Queue
 * mailchimpUnsubscribeQueue
 */
putenv("MB_MAILCHIMP_UNSUBSCRIBE_ROUTING_KEY=mailchimpUnsubscribe");

putenv("MB_MAILCHIMP_UNSUBSCRIBE_QUEUE=mailchimpUnsubscribeQueue");
putenv("MB_MAILCHIMP_UNSUBSCRIBE_QUEUE_PASSIVE=0");
putenv("MB_MAILCHIMP_UNSUBSCRIBE_QUEUE_DURABLE=1");
putenv("MB_MAILCHIMP_UNSUBSCRIBE_QUEUE_EXCLUSIVE=0");
putenv("MB_MAILCHIMP_UNSUBSCRIBE_QUEUE_AUTO_DELETE=0");
putenv("MB_MAILCHIMP_UNSUBSCRIBE_QUEUE_BINDING_KEY=mailchimpUnsubscribe");

/**
 * RabbitMQ - Exchange
 * MailChimp Error messages reported after batch submit
 */
putenv("MB_USER_MAILCHIMP_STATUS_EXCHANGE=directUserMailchimpStatus");
putenv("MB_USER_MAILCHIMP_STATUS_EXCHANGE_TYPE=direct");
putenv("MB_USER_MAILCHIMP_STATUS_EXCHANGE_PASSIVE=0");
putenv("MB_USER_MAILCHIMP_STATUS_EXCHANGE_DURABLE=1");
putenv("MB_USER_MAILCHIMP_STATUS_EXCHANGE_AUTO_DELETE=0");

/**
 * RabbitMQ - Queue
 * userMailchimpStatusQueue
 */
putenv("MB_USER_MAILCHIMP_STATUS_ROUTING_KEY=userMailchimpStatus");

putenv("MB_USER_MAILCHIMP_STATUS_QUEUE=userMailchimpStatusQueue");
putenv("MB_USER_MAILCHIMP_STATUS_QUEUE_PASSIVE=0");
putenv("MB_USER_MAILCHIMP_STATUS_QUEUE_DURABLE=1");
putenv("MB_USER_MAILCHIMP_STATUS_QUEUE_EXCLUSIVE=0");
putenv("MB_USER_MAILCHIMP_STATUS_QUEUE_AUTO_DELETE=0");
putenv("MB_USER_MAILCHIMP_STATUS_QUEUE_BINDING_KEY=userMailchimpStatus");

/**
 * RabbitMQ - Queue
 * userMailchimpResubscribeQueue
 */
putenv("MB_USER_MAILCHIMP_RESUBSCRIBE_ROUTING_KEY=userMailchimpResubscribe");

putenv("MB_USER_MAILCHIMP_RESUBSCRIBE_QUEUE=userMailchimpResubscribeQueue");
putenv("MB_USER_MAILCHIMP_RESUBSCRIBE_QUEUE_PASSIVE=0");
putenv("MB_USER_MAILCHIMP_RESUBSCRIBE_QUEUE_DURABLE=1");
putenv("MB_USER_MAILCHIMP_RESUBSCRIBE_QUEUE_EXCLUSIVE=0");
putenv("MB_USER_MAILCHIMP_RESUBSCRIBE_QUEUE_AUTO_DELETE=0");

/**
 * RabbitMQ - Exchange
 * User events
 */
putenv("MB_USER_EVENT_EXCHANGE=directUserEvent");
putenv("MB_USER_EVENT_EXCHANGE_TYPE=direct");
putenv("MB_USER_EVENT_EXCHANGE_PASSIVE=0");
putenv("MB_USER_EVENT_EXCHANGE_DURABLE=1");
putenv("MB_USER_EVENT_EXCHANGE_AUTO_DELETE=0");

/**
 * RabbitMQ - Queue
 * userEventBirthdayQueue
 */
putenv("MB_USER_EVENT_BIRTHDAY_ROUTING_KEY=userEventBirthday");

putenv("MB_USER_EVENT_BIRTHDAY_QUEUE=userEventBirthdayQueue");
putenv("MB_USER_EVENT_BIRTHDAY_QUEUE_PASSIVE=0");
putenv("MB_USER_EVENT_BIRTHDAY_QUEUE_DURABLE=0");
putenv("MB_USER_EVENT_BIRTHDAY_QUEUE_EXCLUSIVE=0");
putenv("MB_USER_EVENT_BIRTHDAY_QUEUE_AUTO_DELETE=1");
putenv("MB_USER_EVENT_BIRTHDAY_QUEUE_BINDING_KEY=userEventBirthday");

/*
 * RabbitMQ - Queue
 * userEvent13BirthdayQueue
 */
putenv("MB_USER_EVENT_13BIRTHDAY_ROUTING_KEY=userEvent13Birthday");

putenv("MB_USER_EVENT_13BIRTHDAY_QUEUE=userEvent13BirthdayQueue");
putenv("MB_USER_EVENT_13BIRTHDAY_QUEUE_PASSIVE=0");
putenv("MB_USER_EVENT_13BIRTHDAY_QUEUE_DURABLE=1");
putenv("MB_USER_EVENT_13BIRTHDAY_QUEUE_EXCLUSIVE=0");
putenv("MB_USER_EVENT_13BIRTHDAY_QUEUE_AUTO_DELETE=1");
putenv("MB_USER_EVENT_13BIRTHDAY_QUEUE_BINDING_KEY=userEvent13Birthday");

/*
 * RabbitMQ - Queue
 * userEventAnniversaryQueue
 */
putenv("MB_USER_EVENT_ANNIVERSARY_ROUTING_KEY=userEventAnniversary");

putenv("MB_USER_EVENT_ANNIVERSARY_QUEUE=userEventAnniversaryQueue");
putenv("MB_USER_EVENT_ANNIVERSARY_QUEUE_PASSIVE=0");
putenv("MB_USER_EVENT_ANNIVERSARY_QUEUE_DURABLE=0");
putenv("MB_USER_EVENT_ANNIVERSARY_QUEUE_EXCLUSIVE=0");
putenv("MB_USER_EVENT_ANNIVERSARY_QUEUE_AUTO_DELETE=1");
putenv("MB_USER_EVENT_ANNIVERSARY_QUEUE_BINDING_KEY=userEventAnniversary");

/**
 * RabbitMQ - Exchange
 * Sources of data to be cached for persistant data storage for the Message
 * Broker system.
 */
putenv("MB_CACHE_EXCHANGE=directCacheExchange");
putenv("MB_CACHE_EXCHANGE_TYPE=direct");
putenv("MB_CACHE_EXCHANGE_PASSIVE=0");
putenv("MB_CACHE_EXCHANGE_DURABLE=1");
putenv("MB_CACHE_EXCHANGE_AUTO_DELETE=0");

/**
 * RabbitMQ - Queue
 * campaignCacheQueue
 */
putenv("MB_CAMPAIGN_CACHE_ROUTING_KEY=campaignCache");

putenv("MB_CAMPAIGN_CACHE_QUEUE=campaignCacheQueue");
putenv("MB_CAMPAIGN_CACHE_QUEUE_PASSIVE=0");
putenv("MB_CAMPAIGN_CACHE_QUEUE_DURABLE=1");
putenv("MB_CAMPAIGN_CACHE_QUEUE_EXCLUSIVE=0");
putenv("MB_CAMPAIGN_CACHE_QUEUE_AUTO_DELETE=0");
putenv("MB_CAMPAIGN_CACHE_QUEUE_BINDING_KEY=campaignCache");

/**
 * RabbitMQ - Exchange - Heartbeat
 * Automated test entries for monitoring the health of the system.
 */
putenv("MB_HEARTBEAT_EXCHANGE=directHeartbeatExchange");
putenv("MB_HEARTBEAT_EXCHANGE_TYPE=direct");
putenv("MB_HEARTBEAT_EXCHANGE_PASSIVE=0");
putenv("MB_HEARTBEAT_EXCHANGE_DURABLE=1");
putenv("MB_HEARTBEAT_EXCHANGE_AUTO_DELETE=0");

/**
 * RabbitMQ - Queue - Heartbeat
 * heartbeatQueue
 */
putenv("MB_HEARTBEAT_ROUTING_KEY=heartbeat");

putenv("MB_HEARTBEAT_QUEUE=heartbeatQueue");
putenv("MB_HEARTBEAT_QUEUE_PASSIVE=0");
putenv("MB_HEARTBEAT_QUEUE_DURABLE=0");
putenv("MB_HEARTBEAT_QUEUE_EXCLUSIVE=0");
putenv("MB_HEARTBEAT_QUEUE_AUTO_DELETE=1");
putenv("MB_HEARTBEAT_QUEUE_BINDING_KEY=heartbeat");

/**
 * Service IDs
 */
// Mailchimp - Do Something Members
putenv("MAILCHIMP_LIST_ID=f2fab1dfd4");
putenv("NEWRELIC_APP_NAME_RABBIT1=Message Broker - rabbit1");
