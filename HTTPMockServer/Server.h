//
//  Server.h
//  HTTPMockServer
//
//  Created by Shavit Tzuriel on 4/10/19.
//  Copyright © 2019 demo. All rights reserved.
//

#ifndef Server_h
#define Server_h

#import <Foundation/Foundation.h>
#import "Errors.h"

typedef NS_ENUM(NSUInteger, ServerType) {
    SERVERTYPESTRING,
    SERVERTYPEDATA
};

#define NOTIFICATIONSTRING @"receivedmessage"
#define NOTIFICATIONDATA @"receiveddata"

@interface HTTPServer : NSObject

@property (nonatomic) CFSocketRef sRef;

@property (nonatomic) int listenfd, errorCode;

- (instancetype) initOnPort: (int)port serverType:(int)serverType;

@end

#endif /* Server_h */
