//
//  Factbook.h
//  FunFacts
//
//  Created by Adam Goldberg on 2015-09-21.
//  Copyright (c) 2015 Adam Goldberg. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Factbook : NSObject

@property (strong, nonatomic) NSArray *facts;

- (NSString *)randomFact;

@end
