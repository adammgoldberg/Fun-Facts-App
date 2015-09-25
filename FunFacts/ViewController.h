//
//  ViewController.h
//  FunFacts
//
//  Created by Adam Goldberg on 2015-09-21.
//  Copyright (c) 2015 Adam Goldberg. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Factbook;
@class ColorWheel;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;

@property (strong, nonatomic) Factbook *factbook;

@property (strong, nonatomic) ColorWheel *colorwheel;

@property (weak, nonatomic) IBOutlet UIButton *funFactButton;



@end

