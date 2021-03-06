/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, NSString;

@interface SCTV3TooltipDisplayContext : NSObject {

	UIView* _containerView;
	UIView* _anchorView;
	NSString* _text;
	long long _arrowPosition;

}

@property (nonatomic,readonly) UIView * containerView;               //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) UIView * anchorView;                  //@synthesize anchorView=_anchorView - In the implementation block
@property (nonatomic,readonly) NSString * text;                      //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) long long arrowPosition;              //@synthesize arrowPosition=_arrowPosition - In the implementation block
-(id)initWithContainerView:(id)arg1 anchorView:(id)arg2 text:(id)arg3 arrowPosition:(long long)arg4 ;
-(long long)arrowPosition;
-(UIView *)containerView;
-(NSString *)text;
-(UIView *)anchorView;
@end

