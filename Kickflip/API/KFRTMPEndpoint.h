//
//  KFRTMPEndpoint.h
//  Kickflip
//
//  Created by Christopher Ballinger on 1/16/14.
//  Copyright (c) 2014 Christopher Ballinger. All rights reserved.
//

#import "KFEndpoint.h"

@interface KFRTMPEndpoint : KFEndpoint

@property (nonatomic, strong) NSURL *rtmpURL;

@end
