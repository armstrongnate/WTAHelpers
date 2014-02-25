//
//  NSString+MD5.m
//  Example
//
//  Created by Novall Khan on 2/15/14.
//  Copyright (c) 2014 Novall Khan. All rights reserved.
//

#import "NSString+MD5.h"
#import <CommonCrypto/CommonDigest.h>

@implementation NSString (MD5)

-(NSString*)MD5
{
    NSData* data = [self dataUsingEncoding:NSUTF8StringEncoding];
    
    unsigned char result[16];
    CC_MD5( data.bytes, data.length, result );
    
    return [NSString stringWithFormat:
            @"%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",
            result[0], result[1], result[2], result[3],
            result[4], result[5], result[6], result[7],
            result[8], result[9], result[10], result[11],
            result[12], result[13], result[14], result[15]];
}

@end