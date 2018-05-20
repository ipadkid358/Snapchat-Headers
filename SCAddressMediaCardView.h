/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCTextMediaCardView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCActionMenuRenderableCellContentView.h>
#import <Snapchat/SCActionMenuCustomButtonsCell.h>

@protocol SCActionSheetDelegate;
@class UITapGestureRecognizer, UIViewController, NSString;

@interface SCAddressMediaCardView : SCTextMediaCardView <UIGestureRecognizerDelegate, SCActionMenuRenderableCellContentView, SCActionMenuCustomButtonsCell> {

	UITapGestureRecognizer* _tapGestureRecognizer;
	UIViewController*<SCActionSheetDelegate> _parentVC;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resetWithOriginalSettings;
-(void)rerenderForActionMenuWithBoundingSize:(CGSize)arg1 ;
-(id)extraActionMenuButtons;
-(void)onTap:(id)arg1 ;
-(id)_addressMediaCardViewModel;
-(void)handleTapOnAddress:(id)arg1 ;
-(id)initWithViewModel:(id)arg1 backgroundColor:(id)arg2 userSession:(id)arg3 parentVC:(id)arg4 ;
-(void)updateWithViewModel:(id)arg1 backgroundColor:(id)arg2 parentVC:(id)arg3 ;
-(void)dealloc;
@end

