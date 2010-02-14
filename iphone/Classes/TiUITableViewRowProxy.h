/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#import "TiViewProxy.h"
#import "TiDimension.h"

@class TiUITableView;
@class TiUITableViewSectionProxy;

@interface TiUITableViewRowProxy : TiViewProxy <TiProxyDelegate>
{
@private
	NSString *className;
	TiUITableView *table;
	TiUITableViewSectionProxy *section;
	TiDimension height;
	NSInteger row;
}

#pragma mark Public APIs

@property(nonatomic,readonly)	NSString *className;

#pragma mark Framework

@property(nonatomic,readwrite,assign) TiUITableView *table;
@property(nonatomic,readwrite,assign) TiUITableViewSectionProxy *section;
@property(nonatomic,readwrite,assign) NSInteger row;

-(void)initializeTableViewCell:(UITableViewCell*)cell;
-(void)renderTableViewCell:(UITableViewCell*)cell;
-(CGFloat)rowHeight:(CGRect)bounds;

-(void)updateRow:(NSDictionary*)data withObject:(NSDictionary*)properties;

@end