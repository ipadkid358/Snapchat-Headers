/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ANSAttributeDictionary : NSObject {

	NSMutableDictionary* _rawDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * rawDictionary;              //@synthesize rawDictionary=_rawDictionary - In the implementation block
-(void)addAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)addBooleanAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)addPriceAttribute:(id)arg1 forKey:(id)arg2 ;
-(BOOL)validAttributeValue:(id)arg1 ;
-(id)serializeAttributeValue:(id)arg1 ;
-(id)truncateString:(id)arg1 ;
-(id)serializeSuccess:(id)arg1 ;
-(id)serializePriceToMicros:(id)arg1 ;
-(id)serializeNumber:(id)arg1 ;
-(id)init;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableDictionary *)rawDictionary;
-(void)setRawDictionary:(NSMutableDictionary *)arg1 ;
@end

