//
//  Errors.h
//  HTTPMockServer
//
//  Created by Shavit Tzuriel on 4/10/19.
//  Copyright © 2019 demo. All rights reserved.
//

#ifndef Errors_h
#define Errors_h

typedef NS_ENUM(NSUInteger, ErrorCode) {
    NOERROR,
    SOCKETERROR,
    BINDERROR,
    LISTENERROR,
    SOCKETCREATERROR,
    ACCEPTINGERROR,
    
    CONNECTERROR,
    READERROR,
    WRITEERROR
};

#endif /* Errors_h */
