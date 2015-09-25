//
//  ColorWheel.h
//  FunFacts
//
//  Created by Adam Goldberg on 2015-09-21.
//  Copyright (c) 2015 Adam Goldberg. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

- (UIColor *)randomColor;
@end
