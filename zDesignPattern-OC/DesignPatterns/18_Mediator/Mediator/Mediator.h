//
//  Mediator.h
//  zDesignPattern-OC
//
//  Created by zyh on 17/4/27.
//  Copyright © 2017年 zyh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DPMComponent.h"

@interface Mediator : NSObject

- (void)componentChanged:(DPMComponent *)c;

@end
