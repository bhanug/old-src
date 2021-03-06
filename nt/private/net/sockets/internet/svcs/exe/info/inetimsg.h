/**********************************************************************/
/**                       Microsoft Windows NT                       **/
/**                Copyright(c) Microsoft Corp., 1993                **/
/**********************************************************************/

/*
    inetimsg.h

    This file is generated by the MC tool from the INETIMSG.MC message
    file.


    FILE HISTORY:
        DavidTr     08-Aug-1995 Created.

*/


#ifndef _INETIMSG_H_
#define _INETIMSG_H_

//
//  Values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// Define the severity codes
//


//
// MessageId: INETI_EVENT_TITLE
//
// MessageText:
//
//  Microsoft Internet Information Server
//
#define INETI_EVENT_TITLE                0xC0000001L

//
// MessageId: INETI_EVENT_BETA_EXPIRED
//
// MessageText:
//
//  The second Microsoft Internet Information Server beta expired on March 1, 1996.
//  Please update to a newer version of the Microsoft Internet Information Server.
//
#define INETI_EVENT_BETA_EXPIRED         0xC0000002L

//
// MessageId: INETI_EVENT_SERVER_ONLY
//
// MessageText:
//
//  The Microsoft Internet Information Server runs only on Windows NT Server, not
//  Windows NT Workstation.
//
#define INETI_EVENT_SERVER_ONLY          0xC0000003L


#endif  // _INETIMSG_H_

