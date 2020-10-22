/*
Navicat MySQL Data Transfer
Source Server         : localhost
Source Server Version : 100116
Source Host           : localhost:3306
Source Database       : airline
Target Server Type    : MYSQL
Target Server Version : 100116
File Encoding         : 65001
Date: 2017-09-09 14:15:20
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for aircraft
-- ----------------------------
DROP TABLE IF EXISTS `aircraft`;
CREATE TABLE `aircraft` (
  `id` int(11) NOT NULL,
  `model` int(11) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `fk1` (`model`),
  CONSTRAINT `fk1` FOREIGN KEY (`model`) REFERENCES `airplane_type` (`id`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of aircraft
-- ----------------------------
INSERT INTO `aircraft` VALUES ('1', '1');
INSERT INTO `aircraft` VALUES ('4', '1');
INSERT INTO `aircraft` VALUES ('6', '2');
INSERT INTO `aircraft` VALUES ('5', '3');
INSERT INTO `aircraft` VALUES ('7', '4');
INSERT INTO `aircraft` VALUES ('2', '5');
INSERT INTO `aircraft` VALUES ('3', '5');

-- ----------------------------
-- Table structure for aircraft_seat
-- ----------------------------
DROP TABLE IF EXISTS `aircraft_seat`;
CREATE TABLE `aircraft_seat` (
  `aircraftid` int(11) NOT NULL,
  `seatid` int(11) NOT NULL,
  `classid` int(11) DEFAULT NULL,
  PRIMARY KEY (`aircraftid`,`seatid`),
  KEY `fas2` (`classid`),
  KEY `seatid` (`seatid`),
  CONSTRAINT `fas1` FOREIGN KEY (`aircraftid`) REFERENCES `aircraft` (`id`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `fas2` FOREIGN KEY (`classid`) REFERENCES `travel_class` (`classid`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of aircraft_seat
-- ----------------------------
INSERT INTO `aircraft_seat` VALUES ('1', '1', '1');
INSERT INTO `aircraft_seat` VALUES ('1', '2', '1');
INSERT INTO `aircraft_seat` VALUES ('1', '3', '1');
INSERT INTO `aircraft_seat` VALUES ('1', '4', '1');
INSERT INTO `aircraft_seat` VALUES ('1', '5', '1');
INSERT INTO `aircraft_seat` VALUES ('1', '6', '2');
INSERT INTO `aircraft_seat` VALUES ('1', '7', '2');
INSERT INTO `aircraft_seat` VALUES ('1', '8', '2');
INSERT INTO `aircraft_seat` VALUES ('1', '9', '2');
INSERT INTO `aircraft_seat` VALUES ('1', '10', '2');

-- ----------------------------
-- Table structure for airplane_type
-- ----------------------------
DROP TABLE IF EXISTS `airplane_type`;
CREATE TABLE `airplane_type` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `type` varchar(50) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=8 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of airplane_type
-- ----------------------------
INSERT INTO `airplane_type` VALUES ('1', 'AIRBUS-340');
INSERT INTO `airplane_type` VALUES ('2', 'BOEING-777');
INSERT INTO `airplane_type` VALUES ('3', 'BOEING-787');
INSERT INTO `airplane_type` VALUES ('4', 'AIRBUS-340');
INSERT INTO `airplane_type` VALUES ('5', 'AIRBUS-321');
INSERT INTO `airplane_type` VALUES ('6', 'BOEING-737');
INSERT INTO `airplane_type` VALUES ('7', 'AIRBUS-320');

-- ----------------------------
-- Table structure for airport
-- ----------------------------
DROP TABLE IF EXISTS `airport`;
CREATE TABLE `airport` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(50) NOT NULL,
  `city` varchar(50) NOT NULL,
  `country` varchar(50) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=10 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of airport
-- ----------------------------
INSERT INTO `airport` VALUES ('1', 'El.Venizelos', 'Athens', 'Greece');
INSERT INTO `airport` VALUES ('2', ' Los Angeles International Airport', 'Los Angeles', 'USA');
INSERT INTO `airport` VALUES ('3', 'Atatürk International Airport', 'Instabul', 'Turkey');
INSERT INTO `airport` VALUES ('4', 'Tokyo International Airport', 'Tokyo', 'Japan');
INSERT INTO `airport` VALUES ('5', 'Amsterdam Airport Schiphol', 'Haarlemmermeer', 'Netherlands');
INSERT INTO `airport` VALUES ('6', 'Charles de Gaulle Airport', 'Paris', 'France');
INSERT INTO `airport` VALUES ('7', 'London Heathrow Airport', 'London', 'England');
INSERT INTO `airport` VALUES ('8', 'Frankfurt Airport', 'Frankfurt', 'Germany');
INSERT INTO `airport` VALUES ('9', ' Beijing Capital International Airport', 'Chaoyang-Shunyi', 'China');

-- ----------------------------
-- Table structure for booking
-- ----------------------------
DROP TABLE IF EXISTS `booking`;
CREATE TABLE `booking` (
  `clientid` varchar(50) NOT NULL,
  `flightid` int(11) NOT NULL,
  `aircraftid` int(11) NOT NULL,
  `seatid` int(11) NOT NULL,
  `date_time` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`clientid`,`flightid`,`aircraftid`,`seatid`),
  KEY `b2` (`flightid`,`aircraftid`,`seatid`),
  KEY `b3` (`aircraftid`),
  KEY `b4` (`seatid`),
  CONSTRAINT `b1` FOREIGN KEY (`clientid`) REFERENCES `client` (`id`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `b2` FOREIGN KEY (`flightid`) REFERENCES `flight` (`id`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `b3` FOREIGN KEY (`aircraftid`) REFERENCES `aircraft` (`id`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `b4` FOREIGN KEY (`seatid`) REFERENCES `aircraft_seat` (`seatid`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of booking
-- ----------------------------
INSERT INTO `booking` VALUES ('AF23294', '1', '1', '1', '01/06/2017');

-- ----------------------------
-- Table structure for client
-- ----------------------------
DROP TABLE IF EXISTS `client`;
CREATE TABLE `client` (
  `id` varchar(50) NOT NULL,
  `name` varchar(50) NOT NULL,
  `sname` varchar(50) NOT NULL,
  `street` varchar(50) NOT NULL,
  `number` int(10) NOT NULL,
  `city` varchar(50) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of client
-- ----------------------------
INSERT INTO `client` VALUES ('12345', 'Test', 'Test', 'Test', '11', 'Test');
INSERT INTO `client` VALUES ('AF23294', 'THANOS', 'DRIVAS', 'PIPINU', '3', 'SARWNIDA');
INSERT INTO `client` VALUES ('AM3W942', 'VICKY', 'MAKRI', 'ATHINWN', '23', 'P.FALIRO');

-- ----------------------------
-- Table structure for flight
-- ----------------------------
DROP TABLE IF EXISTS `flight`;
CREATE TABLE `flight` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `scheduleid` int(11) NOT NULL,
  `aircraftid` int(11) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `key1` (`scheduleid`),
  KEY `key2` (`aircraftid`),
  CONSTRAINT `key1` FOREIGN KEY (`scheduleid`) REFERENCES `schedule` (`id`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `key2` FOREIGN KEY (`aircraftid`) REFERENCES `aircraft` (`id`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of flight
-- ----------------------------
INSERT INTO `flight` VALUES ('1', '1', '3');
INSERT INTO `flight` VALUES ('2', '2', '4');
INSERT INTO `flight` VALUES ('3', '3', '5');
INSERT INTO `flight` VALUES ('4', '5', '1');

-- ----------------------------
-- Table structure for flight_seat_price
-- ----------------------------
DROP TABLE IF EXISTS `flight_seat_price`;
CREATE TABLE `flight_seat_price` (
  `flightid` int(11) NOT NULL,
  `seatid` int(11) NOT NULL,
  `price` double NOT NULL,
  PRIMARY KEY (`flightid`,`seatid`),
  KEY `h2` (`seatid`),
  CONSTRAINT `h1` FOREIGN KEY (`flightid`) REFERENCES `flight` (`id`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `h2` FOREIGN KEY (`seatid`) REFERENCES `aircraft_seat` (`seatid`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of flight_seat_price
-- ----------------------------
INSERT INTO `flight_seat_price` VALUES ('1', '1', '200');
INSERT INTO `flight_seat_price` VALUES ('1', '2', '100');
INSERT INTO `flight_seat_price` VALUES ('1', '3', '150');
INSERT INTO `flight_seat_price` VALUES ('1', '4', '200');

-- ----------------------------
-- Table structure for schedule
-- ----------------------------
DROP TABLE IF EXISTS `schedule`;
CREATE TABLE `schedule` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `airfrom` int(11) NOT NULL,
  `airto` int(50) NOT NULL,
  `departure` varchar(50) NOT NULL,
  `arrival` varchar(50) NOT NULL,
  `date` varchar(255) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `fs1` (`airfrom`),
  KEY `fs2` (`airto`),
  CONSTRAINT `fs1` FOREIGN KEY (`airfrom`) REFERENCES `airport` (`id`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `fs2` FOREIGN KEY (`airto`) REFERENCES `airport` (`id`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of schedule
-- ----------------------------
INSERT INTO `schedule` VALUES ('1', '2', '5', '07.00', '10.10', '03/06/2017');
INSERT INTO `schedule` VALUES ('2', '1', '8', '18.30', '21.40', '03/06/2017');
INSERT INTO `schedule` VALUES ('3', '1', '3', '07.45', '11.15', '03/06/2017');
INSERT INTO `schedule` VALUES ('4', '7', '5', '17.10', '21.50', '03/06/2017');
INSERT INTO `schedule` VALUES ('5', '6', '4', '12.00', '14.00', '03/06/2017');

-- ----------------------------
-- Table structure for travel_class
-- ----------------------------
DROP TABLE IF EXISTS `travel_class`;
CREATE TABLE `travel_class` (
  `classid` int(11) NOT NULL AUTO_INCREMENT,
  `classname` varchar(50) NOT NULL,
  PRIMARY KEY (`classid`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of travel_class
-- ----------------------------
INSERT INTO `travel_class` VALUES ('1', 'ECONOMY');
INSERT INTO `travel_class` VALUES ('2', 'BUSINESS');
