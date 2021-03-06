/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/ANSEvent.h>

@class NSString, ANSAttributeDictionary;

@interface ANSPredefinedEvent : ANSEvent {

	NSString* _predefinedEventName;
	ANSAttributeDictionary* _predefinedAttributes;
	ANSAttributeDictionary* _customAttributes;

}

@property (nonatomic,retain) NSString * predefinedEventName;                             //@synthesize predefinedEventName=_predefinedEventName - In the implementation block
@property (nonatomic,retain) ANSAttributeDictionary * customAttributes;                  //@synthesize customAttributes=_customAttributes - In the implementation block
@property (nonatomic,retain) ANSAttributeDictionary * predefinedAttributes;              //@synthesize predefinedAttributes=_predefinedAttributes - In the implementation block
+(id)inviteEventWithMethod:(id)arg1 customAttributes:(id)arg2 ;
+(id)signUpEventWithMethod:(id)arg1 success:(id)arg2 customAttributes:(id)arg3 ;
+(id)loginEventWithMethod:(id)arg1 success:(id)arg2 customAttributes:(id)arg3 ;
+(id)shareEventWithMethod:(id)arg1 contentName:(id)arg2 contentType:(id)arg3 contentId:(id)arg4 customAttributes:(id)arg5 ;
+(id)purchaseEventWithPrice:(id)arg1 currency:(id)arg2 success:(id)arg3 itemName:(id)arg4 itemType:(id)arg5 itemId:(id)arg6 customAttributes:(id)arg7 ;
+(id)levelStartEventWithLevelName:(id)arg1 customAttributes:(id)arg2 ;
+(id)levelEndEventWithLevelName:(id)arg1 score:(id)arg2 success:(id)arg3 customAttributes:(id)arg4 ;
+(id)addToCartEventWithPrice:(id)arg1 currency:(id)arg2 itemName:(id)arg3 itemType:(id)arg4 itemId:(id)arg5 customAttributes:(id)arg6 ;
+(id)startCheckoutEventWithPrice:(id)arg1 currency:(id)arg2 itemCount:(id)arg3 customAttributes:(id)arg4 ;
+(id)ratingEventWithRating:(id)arg1 contentName:(id)arg2 contentType:(id)arg3 contentId:(id)arg4 customAttributes:(id)arg5 ;
+(id)contentViewEventWithName:(id)arg1 contentType:(id)arg2 contentId:(id)arg3 customAttributes:(id)arg4 ;
+(id)searchEventWithQuery:(id)arg1 customAttributes:(id)arg2 ;
-(NSString *)predefinedEventName;
-(ANSAttributeDictionary *)predefinedAttributes;
-(void)setPredefinedEventName:(NSString *)arg1 ;
-(void)setCustomAttributes:(ANSAttributeDictionary *)arg1 ;
-(void)setPredefinedAttributes:(ANSAttributeDictionary *)arg1 ;
-(ANSAttributeDictionary *)customAttributes;
-(id)description;
-(id)name;
-(id)dictionaryRepresentation;
@end

