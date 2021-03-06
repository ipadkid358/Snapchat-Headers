/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@interface SCOrderedDictionary : NSObject <NSCoding> {

	BOOL _shouldPrune;
	NSMutableDictionary* _dict;
	NSMutableOrderedSet* _keys;
	long long _maxSize;

}

@property (nonatomic,retain) NSMutableDictionary * dict;              //@synthesize dict=_dict - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * keys;              //@synthesize keys=_keys - In the implementation block
@property (assign,nonatomic) long long maxSize;                       //@synthesize maxSize=_maxSize - In the implementation block
@property (assign,nonatomic) BOOL shouldPrune;                        //@synthesize shouldPrune=_shouldPrune - In the implementation block
-(void)onAdd:(BOOL)arg1 countBefore:(unsigned long long)arg2 ;
-(void)onPurge:(id)arg1 ;
-(id)allOrderedValues;
-(void)setShouldPrune:(BOOL)arg1 ;
-(BOOL)shouldPrune;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)count;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)allKeys;
-(long long)maxSize;
-(NSMutableOrderedSet *)keys;
-(void)setKeys:(NSMutableOrderedSet *)arg1 ;
-(BOOL)validate;
-(void)setMaxSize:(long long)arg1 ;
-(NSMutableDictionary *)dict;
-(void)setDict:(NSMutableDictionary *)arg1 ;
-(id)initWithMaxSize:(long long)arg1 ;
@end

