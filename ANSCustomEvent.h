/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/ANSEvent.h>

@class NSString, NSDictionary;

@interface ANSCustomEvent : ANSEvent {

	NSString* _customEventName;
	NSDictionary* _customAttributes;

}

@property (nonatomic,retain) NSDictionary * customAttributes;              //@synthesize customAttributes=_customAttributes - In the implementation block
@property (nonatomic,readonly) NSString * customEventName;                 //@synthesize customEventName=_customEventName - In the implementation block
-(id)initWithCustomEventName:(id)arg1 customAttributes:(id)arg2 ;
-(void)setCustomAttributes:(NSDictionary *)arg1 ;
-(NSString *)customEventName;
-(id)attributesDictionary;
-(NSDictionary *)customAttributes;
-(id)description;
-(id)name;
-(id)dictionaryRepresentation;
@end

