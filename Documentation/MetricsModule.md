#Metrics Module Documentation

Metrics.usp is a Simpl+ Module that listens for specific signals within the TEC HD smw program and forwards events to a reporting service.

##Reporting service

The current reporting infrastructure is an [ELK stack](https://www.elastic.co/products) implementation hosted at [avreports.byu.edu](http://avreports.byu.edu). Sockets for both submission and reporting are on ports 9200/9300.

##Signal List

A compiled signal list can be found at [signalAudit.md](https://github.com/byu-oit-appdev/crestron-tec-hd/blob/MetricsModule/signalAudit.md)
