//
//  main.cpp
//  HTTPMockServer
//
//  Created by Shavit Tzuriel on 4/10/19.
//  Copyright © 2019 demo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Server.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        HTTPServer *server = [[HTTPServer alloc] initOnPort:4010 serverType:SERVERTYPEDATA];
        NSLog(@"Starting the echo server");
    }
    return 0;
}
