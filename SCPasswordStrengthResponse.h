/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SCPasswordStrengthResponse : NSObject {

	BOOL _savable;
	NSString* _strength;
	NSString* _message;

}

@property (nonatomic,retain) NSString * strength;              //@synthesize strength=_strength - In the implementation block
@property (assign,nonatomic) BOOL savable;                     //@synthesize savable=_savable - In the implementation block
@property (nonatomic,retain) NSString * message;               //@synthesize message=_message - In the implementation block
-(void)setSavable:(BOOL)arg1 ;
-(BOOL)savable;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSString *)strength;
-(void)setStrength:(NSString *)arg1 ;
@end

