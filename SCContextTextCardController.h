/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCContextCardController.h>
#import <Snapchat/SCContextTextCardDelegate.h>

@protocol SCContextContentLoaderProtocol, SCContextCardActionDelegate;
@class NSString, UIView, SCContextTextCardViewCell;

@interface SCContextTextCardController : SCContextCardController <SCContextTextCardDelegate> {

	NSString* _text;
	UIView* _iconView;
	long long _cutoff;
	id<SCContextContentLoaderProtocol> _contentLoader;
	id<SCContextCardActionDelegate> _actionDelegate;
	SCContextTextCardViewCell* _view;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)openUrl:(id)arg1 ;
-(CGSize)sizeForCell;
-(void)attachCardView:(id)arg1 ;
-(id)cellTypeIdentifier;
-(void)updateCardHeight:(BOOL)arg1 ;
-(id)initWithCard:(id)arg1 contentLoader:(id)arg2 contextSession:(id)arg3 actionDelegate:(id)arg4 ;
-(Class)cellClass;
-(void)_setupView;
-(void)_loadContent;
@end

