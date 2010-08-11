//
//  SessionViewController.h
//  CocoaCamp
//
//  Created by airportyh on 8/6/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface SessionViewController : UITableViewController {
	NSArray *schedules;
	NSMutableDictionary *thumbnails;
}

@property (nonatomic, retain) NSArray *schedules;
@property (nonatomic, retain) NSMutableDictionary *thumbnails;

@end