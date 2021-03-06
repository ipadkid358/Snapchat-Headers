/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSHashTable, NSString;

@interface FBTweak : NSObject <NSCoding> {

	NSHashTable* _observers;
	NSString* _identifier;
	NSString* _name;
	id _defaultValue;
	id _currentValue;
	id _possibleValues;
	id _actionBlock;
	id _stepValue;
	id _precisionValue;

}

@property (nonatomic,copy,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (getter=isAction,nonatomic,readonly) BOOL action; 
@property (nonatomic,retain) id defaultValue;                            //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) id currentValue;                            //@synthesize currentValue=_currentValue - In the implementation block
@property (nonatomic,retain) id possibleValues;                          //@synthesize possibleValues=_possibleValues - In the implementation block
@property (nonatomic,retain) id actionBlock;                             //@synthesize actionBlock=_actionBlock - In the implementation block
@property (nonatomic,retain) id minimumValue; 
@property (nonatomic,retain) id maximumValue; 
@property (nonatomic,retain) id stepValue;                               //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,retain) id precisionValue;                          //@synthesize precisionValue=_precisionValue - In the implementation block
-(id)precisionValue;
-(void)setPrecisionValue:(id)arg1 ;
-(BOOL)isAction;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)addObserver:(id)arg1 ;
-(NSString *)identifier;
-(void)removeObserver:(id)arg1 ;
-(id)minimumValue;
-(id)maximumValue;
-(void)setMinimumValue:(id)arg1 ;
-(void)setMaximumValue:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)defaultValue;
-(void)setDefaultValue:(id)arg1 ;
-(void)setStepValue:(id)arg1 ;
-(id)stepValue;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
-(id)currentValue;
-(void)setCurrentValue:(id)arg1 ;
-(id)possibleValues;
-(void)setPossibleValues:(id)arg1 ;
@end

