/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UILabel.h>

@protocol SCNamedFriend;
@class NSString;

@interface SCRecipientPill : UILabel {

	UIEdgeInsets _edgeInsets;
	unsigned long long _state;
	id<SCNamedFriend> _friend;
	NSString* _latestSearchText;

}

@property (nonatomic,readonly) id<SCNamedFriend> friend; 
@property (nonatomic,readonly) unsigned long long state; 
-(void)setText:(id)arg1 withKerning:(double)arg2 ;
-(void)_applyState:(unsigned long long)arg1 ;
-(CGSize)_sizeForStyle:(unsigned long long)arg1 currentText:(id)arg2 ;
-(void)_applyStateStyles:(unsigned long long)arg1 ;
-(id)_borderColorForStyle:(unsigned long long)arg1 ;
-(id)_textColorForStyle:(unsigned long long)arg1 ;
-(id)_backgroundColorForStyle:(unsigned long long)arg1 ;
-(double)_alphaForStyle:(unsigned long long)arg1 ;
-(CGSize)sizeForStyle:(unsigned long long)arg1 currentText:(id)arg2 ;
-(id)initWitFriend:(id)arg1 searchText:(id)arg2 ;
-(unsigned long long)state;
-(void)setText:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)drawTextInRect:(CGRect)arg1 ;
-(id<SCNamedFriend>)friend;
-(void)applyState:(unsigned long long)arg1 ;
-(void)setup;
@end

