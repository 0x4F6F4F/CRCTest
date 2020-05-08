//
//  CRCService.h
//  NetSeed
//
//  Created by Mr - 宋 on 2020/5/6.
//  Copyright © 2020 gaotianyu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CRCService : NSObject

@end

@interface NSData (CRCSum)

- (NSString *)CRCSumString;

@end
