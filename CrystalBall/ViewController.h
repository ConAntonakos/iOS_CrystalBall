//
//  ViewController.h
//  CrystalBall
//
//  Created by Qwiki on 1/7/13.
//  Copyright (c) 2013 Qwiki. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) NSArray *predictionArray;
@property (strong, nonatomic) UIImageView *imageView;


- (void) makePrediction;

//- (IBAction)buttonPressed:(id)sender;

@end
