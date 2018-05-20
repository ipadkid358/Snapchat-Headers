/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SCSearchNavigationItemDelegate;
@class NSString, UIView, UIImage, NSArray;

@interface SCSearchNavigationItem : NSObject <NSCopying> {

	double _navigationBarHeight;
	NSString* _searchPlaceholderText;
	long long _searchClearButtonViewMode;
	UIView* _searchInputAccessoryView;
	UIImage* _searchIconImage;
	UIImage* _searchIconAccessoryImage;
	long long _backButtonBehavior;
	/*^block*/id _backButtonActionBlock;
	NSArray* _rightBarButtonItems;
	id<SCSearchNavigationItemDelegate> _delegate;
	CGPoint _navigationBarContentOffset;

}

@property (assign,nonatomic,__weak) id<SCSearchNavigationItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double navigationBarHeight;                                      //@synthesize navigationBarHeight=_navigationBarHeight - In the implementation block
@property (assign,nonatomic) CGPoint navigationBarContentOffset;                              //@synthesize navigationBarContentOffset=_navigationBarContentOffset - In the implementation block
@property (nonatomic,copy) NSString * searchPlaceholderText;                                  //@synthesize searchPlaceholderText=_searchPlaceholderText - In the implementation block
@property (assign,nonatomic) long long searchClearButtonViewMode;                             //@synthesize searchClearButtonViewMode=_searchClearButtonViewMode - In the implementation block
@property (nonatomic,retain) UIView * searchInputAccessoryView;                               //@synthesize searchInputAccessoryView=_searchInputAccessoryView - In the implementation block
@property (nonatomic,retain) UIImage * searchIconImage;                                       //@synthesize searchIconImage=_searchIconImage - In the implementation block
@property (nonatomic,retain) UIImage * searchIconAccessoryImage;                              //@synthesize searchIconAccessoryImage=_searchIconAccessoryImage - In the implementation block
@property (assign,nonatomic) long long backButtonBehavior;                                    //@synthesize backButtonBehavior=_backButtonBehavior - In the implementation block
@property (nonatomic,copy) id backButtonActionBlock;                                          //@synthesize backButtonActionBlock=_backButtonActionBlock - In the implementation block
@property (nonatomic,copy) NSArray * rightBarButtonItems;                                     //@synthesize rightBarButtonItems=_rightBarButtonItems - In the implementation block
-(void)setSearchIconImage:(UIImage *)arg1 ;
-(UIImage *)searchIconImage;
-(UIView *)searchInputAccessoryView;
-(UIImage *)searchIconAccessoryImage;
-(void)setSearchIconAccessoryImage:(UIImage *)arg1 ;
-(void)setSearchInputAccessoryView:(UIView *)arg1 ;
-(NSString *)searchPlaceholderText;
-(long long)searchClearButtonViewMode;
-(CGPoint)navigationBarContentOffset;
-(long long)backButtonBehavior;
-(id)backButtonActionBlock;
-(void)setNavigationBarContentOffset:(CGPoint)arg1 ;
-(void)setSearchPlaceholderText:(NSString *)arg1 ;
-(void)setBackButtonBehavior:(long long)arg1 ;
-(void)setSearchClearButtonViewMode:(long long)arg1 ;
-(void)setBackButtonActionBlock:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<SCSearchNavigationItemDelegate>)arg1 ;
-(id<SCSearchNavigationItemDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)rightBarButtonItems;
-(void)setRightBarButtonItems:(NSArray *)arg1 ;
-(double)navigationBarHeight;
-(void)setNavigationBarHeight:(double)arg1 ;
@end

