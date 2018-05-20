/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SCMapOnboardingActionSheetViewItem : NSObject {

	NSString* _text;
	NSString* _subtext;
	long long _tag;
	NSString* _accessibilityIdentifier;

}

@property (nonatomic,copy) NSString * text;                                 //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * subtext;                              //@synthesize subtext=_subtext - In the implementation block
@property (assign,nonatomic) long long tag;                                 //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy) NSString * accessibilityIdentifier;              //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
-(void)setSubtext:(NSString *)arg1 ;
-(id)initWithText:(id)arg1 subtext:(id)arg2 accessibilityIdentifier:(id)arg3 tag:(long long)arg4 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)accessibilityIdentifier;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(NSString *)subtext;
@end

