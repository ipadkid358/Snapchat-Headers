/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface SCMapOnboardingActionSheetContainerView : UIView {

	long long _currentIndex;
	BOOL _collapsed;
	NSArray* _sheets;

}

@property (nonatomic,copy) NSArray * sheets;                      //@synthesize sheets=_sheets - In the implementation block
@property (assign,nonatomic) long long currentIndex;              //@synthesize currentIndex=_currentIndex - In the implementation block
@property (assign,nonatomic) BOOL collapsed;                      //@synthesize collapsed=_collapsed - In the implementation block
-(NSArray *)sheets;
-(void)setCollapsed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateRelativeIndexes;
-(void)_setFramesForSheetsInStack;
-(void)setSheets:(NSArray *)arg1 ;
-(void)goToNextSheet:(BOOL)arg1 ;
-(void)goToPreviousSheet:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(long long)currentIndex;
-(BOOL)collapsed;
-(void)_layoutSubviews:(BOOL)arg1 ;
-(void)setCurrentIndex:(long long)arg1 ;
-(void)setCurrentIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setCollapsed:(BOOL)arg1 ;
@end

