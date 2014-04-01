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
 * User Campaign Activity - signups and reportbacks to be consumed for updates to the UserAPI
 */
putenv("MB_USER_API_REGISTRATION_ROUTING_KEY=userAPIRegistration");

putenv("MB_USER_API_REGISTRATION_QUEUE=userAPIRegistrationQueue");
putenv("MB_USER_API_REGISTRATION_QUEUE_PASSIVE=0");
putenv("MB_USER_API_REGISTRATION_QUEUE_DURABLE=1");
putenv("MB_USER_API_REGISTRATION_QUEUE_EXCLUSIVE=0");
putenv("MB_USER_API_REGISTRATION_QUEUE_AUTO_DELETE=0");
putenv("MB_USER_API_REGISTRATION_QUEUE_TOPIC_MB_TRANSACTIONAL_EXCHANGE_PATTERN=user.registration.*");

/**
 * RabbitMQ - Queue
 * User Campaign Activity - signups and reportbacks to be consumed for updates to the UserAPI
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

/**
 * MailChimp
 */
// Do Something Members
putenv("MAILCHIMP_LIST_ID=f2fab1dfd4");
