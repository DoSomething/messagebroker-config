<?php
/*
 * Configuration values that are common between all Message Broker applications.
 *
 * Include this file in all apps using:
 *   require('mb-config.inc');
 */
 
 // Transactionals
putenv("TRANSACTIONAL_EXCHANGE=transactionalExchange");
putenv("TRANSACTIONAL_EXCHANGE_TYPE=topic");
putenv("TRANSACTIONAL_EXCHANGE_PASSIVE=0");
putenv("TRANSACTIONAL_EXCHANGE_DURABLE=1");
putenv("TRANSACTIONAL_EXCHANGE_AUTO_DELETE=0");

putenv("TRANSACTIONAL_QUEUE=transactionalQueue");
putenv("TRANSACTIONAL_QUEUE_PASSIVE=0");
putenv("TRANSACTIONAL_QUEUE_DURABLE=1");
putenv("TRANSACTIONAL_QUEUE_EXCLUSIVE=0");
putenv("TRANSACTIONAL_QUEUE_AUTO_DELETE=0");