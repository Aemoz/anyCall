//
//  AppDelegate.h
//  anyCall
//
//  Created by Sunday4 on 2019/6/8.
//  Copyright © 2019 Sunday4. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

