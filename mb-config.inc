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

putenv("MB_TRANSACTIONAL_CONSUME_TAG=transactional");
putenv("MB_TRANSACTIONAL_CONSUME_NO_LOCAL=0");
putenv("MB_TRANSACTIONAL_CONSUME_NO_ACK=0");
putenv("MB_TRANSACTIONAL_CONSUME_EXCLUSIVE=0");
putenv("MB_TRANSACTIONAL_CONSUME_NOWAIT=0");

/**
 * RabbitMQ - Queue
 * activityStats
 */

putenv("MB_ACTIVITY_STATS_EXCHANGE_ROUTING_KEY=activityStats");

putenv("MB_ACTIVITY_STATS_QUEUE=activityStatsQueue");
putenv("MB_ACTIVITY_STATS_QUEUE_PASSIVE=0");
putenv("MB_ACTIVITY_STATS_QUEUE_DURABLE=1");
putenv("MB_ACTIVITY_STATS_QUEUE_EXCLUSIVE=0");
putenv("MB_ACTIVITY_STATS_QUEUE_AUTO_DELETE=0");
putenv("MB_ACTIVITY_STATS_QUEUE_TOPIC_MB_TRANSACTIONAL_EXCHANGE_PATTERN=*.*.transactional");

putenv("MB_ACTIVITY_STATS_CONSUME_TAG=activityStats");
putenv("MB_ACTIVITY_STATS_CONSUME_NO_LOCAL=0");
putenv("MB_ACTIVITY_STATS_CONSUME_NO_ACK=1");
putenv("MB_ACTIVITY_STATS_CONSUME_EXCLUSIVE=0");
putenv("MB_ACTIVITY_STATS_CONSUME_NOWAIT=1");

/**
 * RabbitMQ - Queue
 * logging
 */

putenv("MB_ACTIVITY_LOGGING_EXCHANGE_ROUTING_KEY=logging");

putenv("MB_ACTIVITY_LOGGING_QUEUE=loggingQueue");
putenv("MB_ACTIVITY_LOGGING_QUEUE_PASSIVE=0");
putenv("MB_ACTIVITY_LOGGING_QUEUE_DURABLE=1");
putenv("MB_ACTIVITY_LOGGING_QUEUE_EXCLUSIVE=0");
putenv("MB_ACTIVITY_LOGGING_QUEUE_AUTO_DELETE=0");
putenv("MB_ACTIVITY_LOGGING_QUEUE_TOPIC_MB_TRANSACTIONAL_EXCHANGE_PATTERN=*.*.transactional");

putenv("MB_ACTIVITY_LOGGING_CONSUME_TAG=logging");
putenv("MB_ACTIVITY_LOGGING_CONSUME_NO_LOCAL=0");
putenv("MB_ACTIVITY_LOGGING_CONSUME_NO_ACK=1");
putenv("MB_ACTIVITY_LOGGING_CONSUME_EXCLUSIVE=0");
putenv("MB_ACTIVITY_LOGGING_CONSUME_NOWAIT=1");

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
 * Mobile Commons
 */
putenv("MB_MOBILE_COMMONS_EXCHANGE_ROUTING_KEY=mobileCommonsRegistration");

putenv("MB_MOBILE_COMMONS_QUEUE=mobileCommonsQueue");
putenv("MB_MOBILE_COMMONS_QUEUE_PASSIVE=0");
putenv("MB_MOBILE_COMMONS_QUEUE_DURABLE=1");
putenv("MB_MOBILE_COMMONS_QUEUE_EXCLUSIVE=0");
putenv("MB_MOBILE_COMMONS_QUEUE_AUTO_DELETE=0");
putenv("MB_MOBILE_COMMONS_QUEUE_TOPIC_MB_TRANSACTIONAL_EXCHANGE_PATTERN=user.registration.*");

putenv("MB_MOBILE_COMMONS_CONSUME_TAG=mobile");
putenv("MB_MOBILE_COMMONS_CONSUME_NO_LOCAL=0");
putenv("MB_MOBILE_COMMONS_CONSUME_NO_ACK=0");
putenv("MB_MOBILE_COMMONSL_CONSUME_EXCLUSIVE=0");
putenv("MB_MOBILE_COMMONS_CONSUME_NOWAIT=0");

/**
 * Additional binding / routing for Mobile Commons queue to gather campaign signups as well
 */
putenv("MB_MOBILE_COMMONS_QUEUE_TOPIC_MB_TRANSACTIONAL_EXCHANGE_CAMPAIGN_PATTERN=campaign.signup.*");

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
 * Image Processing - Process images to generate cache files for defined image styles. An example is Drupal report back images which have image styles of various sizes.
 */
putenv("MB_IMAGE_PROCESSING_ROUTING_KEY=imageProcessing");

putenv("MB_IMAGE_PROCESSING_QUEUE=imageProcessingQueue");
putenv("MB_IMAGE_PROCESSING_QUEUE_PASSIVE=0");
putenv("MB_IMAGE_PROCESSING_QUEUE_DURABLE=1");
putenv("MB_IMAGE_PROCESSING_QUEUE_EXCLUSIVE=0");
putenv("MB_IMAGE_PROCESSING_QUEUE_AUTO_DELETE=0");
putenv("MB_IMAGE_PROCESSING_QUEUE_TOPIC_MB_TRANSACTIONAL_EXCHANGE_PATTERN=campaign.report_back.transactional");


/**
 * RabbitMQ - Queue
 * userDigestQueue
 */
putenv("MB_USER_DIGEST_ROUTING_KEY=userDigest");

putenv("MB_USER_DIGEST_QUEUE=userDigestQueue");
putenv("MB_USER_DIGEST_QUEUE_PASSIVE=0");
putenv("MB_USER_DIGEST_QUEUE_DURABLE=1");
putenv("MB_USER_DIGEST_QUEUE_EXCLUSIVE=0");
putenv("MB_USER_DIGEST_QUEUE_AUTO_DELETE=0");
putenv("MB_USER_DIGEST_QUEUE_BINDING_KEY=userDigest");

/**
 * RabbitMQ - Exchange
 * User Import from CSV
 */
putenv("MB_USER_IMPORT_EXCHANGE=directUserImport");
putenv("MB_USER_IMPORT_EXCHANGE_TYPE=direct");
putenv("MB_USER_IMPORT_EXCHANGE_PASSIVE=0");
putenv("MB_USER_IMPORT_EXCHANGE_DURABLE=1");
putenv("MB_USER_IMPORT_EXCHANGE_AUTO_DELETE=0");

/**
 * RabbitMQ - Queue
 * userImportQueue
 */
putenv("MB_USER_IMPORT_ROUTING_KEY=userImport");

putenv("MB_USER_IMPORT_QUEUE=userImportQueue");
putenv("MB_USER_IMPORT_QUEUE_PASSIVE=0");
putenv("MB_USER_IMPORT_QUEUE_DURABLE=0");
putenv("MB_USER_IMPORT_QUEUE_EXCLUSIVE=0");
putenv("MB_USER_IMPORT_QUEUE_AUTO_DELETE=1");
putenv("MB_USER_IMPORT_QUEUE_BINDING_KEY=userImport");

putenv("MB_USER_IMPORT_CONSUME_TAG=userImport");
putenv("MB_USER_IMPORT_CONSUME_NO_LOCAL=0");
putenv("MB_USER_IMPORT_CONSUME_NO_ACK=0");
putenv("MB_USER_IMPORT_CONSUME_EXCLUSIVE=0");
putenv("MB_USER_IMPORT_CONSUME_NOWAIT=0");

/**
 * RabbitMQ - Exchange
 * User Import Logging Existing accounts (email and mobile)
 */
putenv("MB_USER_IMPORT_LOGGING_EXCHANGE=directUserImportExistingLogging");
putenv("MB_USER_IMPORT_LOGGING_EXCHANGE_TYPE=direct");
putenv("MB_USER_IMPORT_LOGGING_EXCHANGE_PASSIVE=0");
putenv("MB_USER_IMPORT_LOGGING_EXCHANGE_DURABLE=1");
putenv("MB_USER_IMPORT_LOGGING_EXCHANGE_AUTO_DELETE=0");

/**
 * RabbitMQ - Queue
 * userImportExistingLoggingQueue
 */
putenv("MB_USER_IMPORT_LOGGING_ROUTING_KEY=userImportExistingLogging");

putenv("MB_USER_IMPORT_LOGGING_QUEUE=userImportExistingLoggingQueue");
putenv("MB_USER_IMPORT_LOGGING_QUEUE_PASSIVE=0");
putenv("MB_USER_IMPORT_LOGGING_QUEUE_DURABLE=0");
putenv("MB_USER_IMPORT_LOGGING_QUEUE_EXCLUSIVE=0");
putenv("MB_USER_IMPORT_LOGGING_QUEUE_AUTO_DELETE=0");
putenv("MB_USER_IMPORT_LOGGING_QUEUE_BINDING_KEY=userImportExistingLogging");

putenv("MB_USER_IMPORT_LOGGING_CONSUME_TAG=userImportExistingLogging");
putenv("MB_USER_IMPORT_LOGGING_CONSUME_NO_LOCAL=0");
putenv("MB_USER_IMPORT_LOGGING_CONSUME_NO_ACK=0");
putenv("MB_USER_IMPORT_LOGGING_CONSUME_EXCLUSIVE=0");
putenv("MB_USER_IMPORT_LOGGING_CONSUME_NOWAIT=0");

putenv("MB_IMPORT_REPORT_ROUTING_KEY=import.report.transactional");

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
 * RabbitMQ - Exchange - directExternalApplicationsExchange
 * External application messages to trigger functionality within the Message
 * Broker system.
 */
putenv("MB_SCRIPT_EXCHANGE=topicScriptExchange");
putenv("MB_SCRIPT_EXCHANGE_TYPE=topic");
putenv("MB_SCRIPT_EXCHANGE_PASSIVE=0");
putenv("MB_SCRIPT_EXCHANGE_DURABLE=1");
putenv("MB_SCRIPT_EXCHANGE_AUTO_DELETE=0");

/**
 * Service IDs
 */
// Mailchimp - Do Something Members
putenv("NEWRELIC_APP_NAME_RABBIT1=Message Broker - rabbit1");

// Toggle in dev / production to control StatHat collection
putenv("USE_STAT_TRACKING=1");  // Old Lib
putenv("DISABLE_STAT_TRACKING=0");  // New Lib

