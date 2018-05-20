/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/GPBDictionaryInternalsProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBMessage, NSMutableDictionary;

@interface GPBUInt32ObjectDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {

	GPBMessage* _autocreator;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) unsigned long long count; 
+(id)dictionaryWithObjects:(const id*)arg1 forKeys:(const unsigned*)arg2 count:(unsigned long long)arg3 ;
+(id)dictionaryWithObject:(id)arg1 forKey:(unsigned)arg2 ;
+(id)dictionary;
+(id)dictionaryWithDictionary:(id)arg1 ;
+(id)dictionaryWithCapacity:(unsigned long long)arg1 ;
-(void)setGPBGenericValue:(/*function pointer*/void**)arg1 forGPBGenericValueKey:(/*function pointer*/void**)arg2 ;
-(unsigned long long)computeSerializedSizeAsField:(id)arg1 ;
-(void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2 ;
-(void)enumerateForTextFormat:(/*^block*/id)arg1 ;
-(BOOL)isInitialized;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)objectForKey:(unsigned)arg1 ;
-(void)removeObjectForKey:(unsigned)arg1 ;
-(void)setObject:(id)arg1 forKey:(unsigned)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const unsigned*)arg2 count:(unsigned long long)arg3 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)removeAll;
-(id)deepCopyWithZone:(NSZone*)arg1 ;
@end

