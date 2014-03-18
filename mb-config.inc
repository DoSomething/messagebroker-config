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
 * RabbitMQ
 * Transactionals
 */
putenv("MB_TRANSACTIONAL_EXCHANGE=transactionalExchange");
putenv("MB_TRANSACTIONAL_EXCHANGE_TYPE=topic");
putenv("MB_TRANSACTIONAL_EXCHANGE_PASSIVE=0");
putenv("MB_TRANSACTIONAL_EXCHANGE_DURABLE=1");
putenv("MB_TRANSACTIONAL_EXCHANGE_AUTO_DELETE=0");

putenv("MB_TRANSACTIONAL_EXCHANGE_ROUTING_KEY=transactional");

putenv("MB_TRANSACTIONAL_QUEUE=transactionalQueue");
putenv("MB_TRANSACTIONAL_QUEUE_PASSIVE=0");
putenv("MB_TRANSACTIONAL_QUEUE_DURABLE=1");
putenv("MB_TRANSACTIONAL_QUEUE_EXCLUSIVE=0");
putenv("MB_TRANSACTIONAL_QUEUE_AUTO_DELETE=0");
putenv("MB_TRANSACTIONAL_QUEUE_TOPIC_MB_TRANSACTIONAL_EXCHANGE_PATTERN=*.*.transactional");

/**
 * RabbitMQ
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
 * RabbitMQ
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
 * RabbitMQ
 * MailChimp Unsubscribes
 */
putenv("MB_MAILCHIMP_UNSUBSCRIBE_EXCHANGE=directMailchimpWebhooks");
putenv("MB_MAILCHIMP_UNSUBSCRIBE_EXCHANGE_TYPE=direct");
putenv("MB_MAILCHIMP_UNSUBSCRIBE_EXCHANGE_PASSIVE=0");
putenv("MB_MAILCHIMP_UNSUBSCRIBE_EXCHANGE_DURABLE=1");
putenv("MB_MAILCHIMP_UNSUBSCRIBE_EXCHANGE_AUTO_DELETE=0");

putenv("MB_MAILCHIMP_UNSUBSCRIBE_ROUTING_KEY=mailchimpUnsubscribe");

putenv("MB_MAILCHIMP_UNSUBSCRIBE_QUEUE=mailchimpUnsubscribeQueue");
putenv("MB_MAILCHIMP_UNSUBSCRIBE_QUEUE_PASSIVE=0");
putenv("MB_MAILCHIMP_UNSUBSCRIBE_QUEUE_DURABLE=1");
putenv("MB_MAILCHIMP_UNSUBSCRIBE_QUEUE_EXCLUSIVE=0");
putenv("MB_MAILCHIMP_UNSUBSCRIBE_QUEUE_AUTO_DELETE=0");

/**
 * MailChimp
 */
// Do Something Members
putenv("MAILCHIMP_LIST_ID=f2fab1dfd4");
